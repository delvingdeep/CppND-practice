/*
*/

#include <iostream>

// Base class : class A 
class A
{
    private:
        int a_attr;

    public:
        void set_a(int);
        int get_a() const;
};

void A::set_a(int a) { A::a_attr = a; }
int A::get_a() const { return A::a_attr; }

// Base class: class A ; Derived class: class B
class B : public A
{
    private:
        int b_attr;

    public:
        void set_ab(int, int);
        int get_b() const;
};

void B::set_ab(int a, int b) { 
    B::set_a(a); 
    B::b_attr = b;
}

int B::get_b() const { return B::b_attr; }

// base class: class B ; Derived class C
class C : public B
{
    private:
        int c_attr;
    
    public:
        void set_abc(int, int, int);
        int get_c() const;
        void print_abc(void);
};

void C::set_abc(int a, int b, int c) {
    C::set_ab(a, b);
    C::c_attr = c;
}

int C::get_c() const { return C::c_attr; }

void C::print_abc(void) {
    std::cout << C::get_a() << ", " << C::get_b() << ", " << C::get_c() << "\n";
}

int main() {
    C c;
    c.set_abc(1, 2, 3);
    c.print_abc();
}