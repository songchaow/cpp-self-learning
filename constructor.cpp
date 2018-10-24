class Object
{
    public: Object(int a, int b) {value1 = 2*a;value2=2*b;}
    Object() { }
    int value1 = 1;
    int value2 = 2;
};

int func_use_reference(Object &remote_ref)
{
	remote_ref = Object(2, 5);
	return 0;
}

int func_use_pointer(Object* remote_p)
{
	if (remote_p) delete remote_p;
	remote_p = new Object();
	return 0;
}

int main()
{
    Object o1(void);
    Object o2 = Object();
    o2 = Object(); // OK. Reconstruct local object.
    Object &o2_ref = o2;
    o2_ref = Object();
    func_use_reference(o2); // OK. Use function to reconstruct local object.
    return 0;
}