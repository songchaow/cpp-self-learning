#include <sstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string a("example text.");
    ostringstream os1;
    ostringstream os2(a);
    os1 << "addon1";
    os2 << "addon2-buffffffffffffffffffffff";
    cout << "a:" << a << endl;
    cout << "os1:" << os1.str() << endl;
    cout << "os2:" << os2.str() << endl;
    return 0;
}