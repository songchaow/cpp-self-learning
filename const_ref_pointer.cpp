/* 
- reference
  - to constant object (illegal)
- const reference(reference to const)
  - to normal object
  - to constant object

- normal pointer
  - pointed to constant object (illegal)
- `const int*` typed pointer
  - pointed to normal object
  - pointed to constant object
- pointer that is const itself
 */
#include <iostream>
int main(int argc, char const *argv[])
{
    const int var_const = 50;
    int var_nonconst = 100;
    
    // Part I Reference

    // error: normal reference cannot be bound to const variable.
    //They must be both const.
    //int &normal_ref_to_const = var_const;

    const int &const_ref_to_const = var_const; // ok

    // note: Order of `const` and `int` doesn't matter
    const int &const_ref_to_nonconst = var_nonconst; // ok const var = nonconst var
    int const & const_ref_to_nonconst2 = var_nonconst; // ok const var = nonconst var
    var_nonconst = var_const; // ok nonconst var = const var
    // error: const reference cannot be modified
    //const_ref_to_nonconst = 110;
    //const_ref_to_nonconst_alternative = 110;


    // Part II Pointer
    
    const int* const_type_p_to_const = &var_const; // ok pointer type is `const int*`, consistent with the pointee
    const int* const_type_p_to_const2 = &var_nonconst; // ok pointer type is `const int*`, pointing to nonconst
    //int* normal_p_to_const = &var_const; // error: normal pointer cannot point to const object
    //int* const const_p_to_const = &var_const; // error: pointer itself is const, but pointer type is `int*`, still inconsistent

    // Part III a bit about casts

    // deprecated: force a normal pointer to point at const object using cast
    // error: static will not work.
    //int* normal_p_to_const1 = static_cast<int*>(&var_const);
    // OK, old style cast is fine.
    int* normal_p_to_const2 = (int*)&var_const;
    // OK, const cast change low-level constness, i.e., `const int*` to `int*`.
    int * normal_p_to_const3 = const_cast<int*>(&var_const);
    std::cout << "normal_p_to_const 2 and 3:" << *normal_p_to_const2 << " " << *normal_p_to_const3 << std::endl;
    // Try to change const variable's value. Maybe it's OK.
    *normal_p_to_const2 = 88;
    std::cout << "normal_p_to_const 2 and 3:" << *normal_p_to_const2 << " " << *normal_p_to_const3 << std::endl;
    return 0;
}
