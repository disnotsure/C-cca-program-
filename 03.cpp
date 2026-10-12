#include <iostream>
using namespace std;

class Sum {
    int a, b;

public:
    Sum() {
        a = 0;
        b = 0;
    }

    Sum(int x) {
        a = x;
        b = 0;
    }

    Sum(int x, int y) {
        a = x;
        b = y;
    }

    void show() {
        cout << a + b << endl;
    }
};

int main() {
    Sum s1;
    Sum s2(10);
    Sum s3(10, 20);

    s1.show();
    s2.show();
    s3.show();

    return 0;
}
