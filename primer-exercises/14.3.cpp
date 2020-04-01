#include <iostream>


int main()
{
    // operator==, operands are const char*
    bool a = "ha"=="ha";
    bool b = "ha"=="hb";
    const char* aa = "ha";
    const char* bb = "ha";

    std::cout << (long)aa << std::endl;
    std::cout << (long)bb << std::endl;
    std::cout << (aa==bb) << std::endl;
}