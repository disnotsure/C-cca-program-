#include <iostream>
using namespace std;

union Data {
    int a;
    float b;
    char c;
};

int main() {
    Data d;

    d.a = 10;
    cout << d.a << endl;

    d.b = 5.5;
    cout << d.b << endl;

    d.c = 'A';
    cout << d.c;

    return 0;
}
