// ------------ identical definition of Sample ha
class Sampleha
{
public:
    int i;
    int j;
    int k;
    int GetI() {return i;}
};
// -------------

Sampleha AnotherFunc();
int main()
{
    Sampleha a;
    Sampleha b = AnotherFunc();
    return 0;
}