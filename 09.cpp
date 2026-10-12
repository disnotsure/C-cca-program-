#include <iostream>
using namespace std;

class Num {
    int a;

public:
    Num(int x) {
        a = x;
    }

    Num operator +(Num n) {
        return Num(a + n.a);
    }

    void show() {
        cout << a;
    }
};

int main() {
    Num a(10), b(20);
    Num c = a + b;

    c.show();

    return 0;
}
