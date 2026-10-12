#include <iostream>
using namespace std;

class Stack {
    int a[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 4)
            cout << "Stack Full";
        else
            a[++top] = x;
    }

    void pop() {
        if (top == -1)
            cout << "Stack Empty";
        else
            cout << a[top--] << endl;
    }

    void show() {
        for (int i = top; i >= 0; i--)
            cout << a[i] << " ";
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.show();
    cout << endl;

    s.pop();

    return 0;
}
