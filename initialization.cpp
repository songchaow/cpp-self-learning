#include <iostream>

class Object
{
    public: Object(int a, int b) {value1 = 2*a;value2=2*b;}
    Object() { }
    int value1 = 1;
    int value2 = 2;
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
    std::cout<<"a value:"<<a_brace_init;
    return 0;
}