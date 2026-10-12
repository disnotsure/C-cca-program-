#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void get() {
        cin >> name >> age;
    }

    void show() {
        cout << name << " " << age;
    }
};

int main() {
    Student s;
    s.get();
    s.show();
    return 0;
}
