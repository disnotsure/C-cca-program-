#include <iostream>
using namespace std;

class A {
    int a;

public:
    A(int x) {
        a = x;
    }

    friend void show(A x);
};

void show(A x) {
    cout << x.a;
}

int main() {
    A a(10);
    show(a);

    return 0;
}
