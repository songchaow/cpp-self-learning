#include <stdio.h>
#include <iostream>

class TempClass {
    int val1;
    int valb;
};

int main()
{
    TempClass* p1 = new TempClass;
    TempClass* p2 = new TempClass;
    std::cout << "p1 " << p1 << std::endl;
    std::cout << "p2 " << p2 << std::endl;
    bool a = p1<p2;
    std::cout << "bool: " << a;
    struct student
    {
        char name[10];
        char sex;
        
    } stul;

    //(a = 2) = 3; // assignment returns lvalue.
    //std::cout << a << std::endl;
    return 0;
}