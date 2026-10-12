#include <iostream>
using namespace std;

class Demo {
public:
    void add(int a, int b) {
        cout << a + b << endl;
    }

    void add(int a, int b, int c) {
        cout << a + b + c << endl;
    }

    void add(double a, double b) {
        cout << a + b << endl;
    }
};

int main() {
    Demo d;

    d.add(10, 20);
    d.add(10, 20, 30);
    d.add(2.5, 3.5);

    return 0;
}
