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
    void show() {
        cout << a;
    }
};

int main() {
    B b;
    b.get();
    b.show();

    return 0;
}
