class Base {
    protected:
    int basep;
};

class Derived : private Base {
    void modify(Base* i) {
        i->basep= 2; // ERROR!
        
    }
    void modify2(Derived* i) {
        i->basep = 2;
        static_cast<Base*>(i);
    }
};