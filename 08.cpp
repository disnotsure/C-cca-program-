#include <iostream>
using namespace std;

class A {
public:
    int a;

    void get() {
        cin >> a;
    }
};

class B : public A {
public:
    void square() {
        cout << a * a << endl;
    }
};

class C : public A {
public:
    void cube() {
        cout << a * a * a << endl;
    }
};

int main() {
    B b;
    C c;

    b.get();
    b.square();

    c.get();
    c.cube();

    return 0;
}
