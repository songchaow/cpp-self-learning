class Convertable
{
public:
    Convertable() = default;
    Convertable(int a) : a(a), b(22) { }
    int a;
    int b;
};

int main()
{
    Convertable c1(1);
    Convertable c2 = 1;
    Convertable c3;
    c3 = 1;
}