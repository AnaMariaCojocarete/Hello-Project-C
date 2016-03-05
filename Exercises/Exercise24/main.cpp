#include <iostream>
using namespace std;

int main()
{
    int number = 1, howManyNumbers = 0;
    cout << "Enter some numbers\n";

    while (number != 0)
    {
        cin >> number;
        if ((number >= 100) && ( number <= 200))
            ++howManyNumbers;
    }
    cout << "The number of entered numbers between 100 and 200 is " << howManyNumbers << "\n";

    return 0;
}
