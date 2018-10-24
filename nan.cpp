/*
This program produces an NAN value and prints it.
*/
#include <iostream>
int main()
{
    //float nan_value = 0/0; // EOF is generated. But an exception is also generated, leading to crash.
    //std::cout<<"nan_value: "<<nan_value<<std::endl;;
    //float error_value = 5/0; // EOF is generated. But an exception is also generated, leading to crash.
    //std::cout<<"error_value: "<<error_value<<std::endl;
    double nan_v = NAN;
    std::cout << "nan value:" << nan_v << std::endl;
    return 0;
}