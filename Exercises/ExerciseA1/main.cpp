#include <iostream>
using namespace std;

int main()
{
    int foo[10];
    int number = 0;
    cout << "Enter 10 nubers\n";
    for (int i = 0; i < 10; ++i)
    {
        cin >> foo[i];
        if (foo[i] >= 10)
            ++number;
    }
    cout << "The number of integers greater or equal to 10 is " << number << "\n";

    return 0;
}

