#include <iostream>
using namespace std;
int main()
{
    int workCount = 65;
    int left = 22*2*1.25;
    int right = 22*3;
    bool res = false;
    if(left > workCount < right)
        res = true;
    else res = false;
    std::cout << res << std::endl;
    return 0;
}