#include <iostream>
#include <string>
using namespace std;

void respond(const string& name)
{
    cout << "Hello, " << name << "\n";
}

int main()
{
    string name;
    cout << "What's your name?\n";
    cin >> name;

    respond(name);

    return 0;
}
