#include <iostream>
using namespace std;

class A {
public:
    int a;
};

class B : public A {
public:
    int b;
};

class C : public B {
public:
    void show() {
        cout << a + b;
    }
};

int main() {
    C c;

    cin >> c.a >> c.b;
    c.show();

    return 0;
}
