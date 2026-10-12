#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f;
    f.open("data.txt");

    f << "Hello C++";
    f.close();

    ifstream g;
    g.open("data.txt");

    string s;
    getline(g, s);

    cout << s;

    g.close();

    return 0;
}
