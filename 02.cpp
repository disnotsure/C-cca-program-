#include <iostream>
using namespace std;

class Student {
    int a;

public:
    Student(int x) {
        a = x;
    }

    void show() {
        cout << a;
    }
};

int main() {
    Student s(10);
    s.show();
    return 0;
}
