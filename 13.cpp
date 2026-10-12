#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    Student s;

    cin >> s.id >> s.name >> s.marks;

    cout << s.id << endl;
    cout << s.name << endl;
    cout << s.marks;

    return 0;
}
