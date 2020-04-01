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

Sampleha AnotherFunc()
{
    Sampleha a2;
    a2.i = 1;
    a2.j = 2;
    a2.k = 3;
    return a2;
}