#include <iostream>
using namespace std;

int main()
{
    int number = 1, howManyNumbers = 0;
    cout << "Enter some positive numbers\n";

    while (number > 0)
    {
        cin >> number;
        ++howManyNumbers;
    }
    cout << "The number of numbers entered is " << howManyNumbers - 1 << "\n";

    return 0;
}
