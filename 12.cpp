#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
public:
    void area() {
        int r;
        cin >> r;
        cout << 3.14 * r * r;
    }
};

int main() {
    Circle c;
    c.area();

    return 0;
}
