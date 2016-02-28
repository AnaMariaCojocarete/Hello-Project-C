#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 10 integers values\n";
    int number, smallest = 100000000;
    for (int i = 0; i < 10; ++i)
    {
        cin >> number;
        if (number < smallest)
        {
            smallest = number;
        }
    }
    cout << smallest << "\n";

    return 0;
}
