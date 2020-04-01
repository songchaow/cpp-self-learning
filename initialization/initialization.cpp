#include <iostream>
#include <vector>

class Object
{
    public: Object(int a, int b) {value1 = 2*a;value2=2*b;}
    Object() { }
    int value1 = 1;
    int value2 = 2;
};

class ObjectChild {
    public:
    int value1;
    int value2;
};

class Object2
{
    public:
    Object2()=default;
    int value1;
    int value2;
    ObjectChild objc;
};

class Object3
{
    public:
    Object3() {}
    int value1;
    int value2;
};

class Object2withdft
{
    public:
    int value1=1;
    int value2=2;
};

int main()
{
    // refer to https://en.cppreference.com/w/cpp/language/initialization
    int a_brace_init {5}; // direct initialization(no assign)
    int a_brace_init2 = {5}; // copy-list-initialization(with assign) in list-initialization
    
    Object o1(void);
    Object o2 = Object();
    
    std::cout<<"a value:"<<a_brace_init;
    a_brace_init = 4;
    std::cout<<"a value:"<<a_brace_init;
    // assignment must contain assign symbol
    a_brace_init = {44};
    std::cout<<"a value:"<<a_brace_init<<std::endl;
    // default initialize Object2 on stack
    Object2 obj2;
    Object2 obj2dft = Object2(); // NOTE THE DIFFERENCE!
    std::cout << "obj2:" << obj2.value1 << " " << obj2.value2 << std::endl;
    std::cout << "obj2dft:" << obj2dft.value1 << " " << obj2dft.value2 << std::endl;
    std::cout << "obj2_value_child:" << obj2dft.objc.value1 << " " << obj2dft.objc.value2 << std::endl;
    // Object3 on stack
    Object3 obj3;
    Object3 obj3_val = Object3();
    std::cout << "obj3_val:" << obj3_val.value1 << " " << obj3_val.value2 << std::endl;
    // dynamic allocate using value initialization
    Object2withdft* obj2p = new Object2withdft();
    Object2withdft* objdftp = new Object2withdft();
    std::cout << "obj2p:" << obj2p->value1 << " " << obj2p->value2 << std::endl;
    std::cout << "obj2dftp:" << objdftp->value1 << " " << objdftp->value2 << std::endl;
    int ii = int();
    std::cout << "ii:" << ii << std::endl;
    // delegate, we use value initialization ctor of vector
    std::vector<Object2> vecs(10);
    std::cout << "first element:" << vecs[0].value1 << vecs[0].value2 << std::endl;

    return 0;
}