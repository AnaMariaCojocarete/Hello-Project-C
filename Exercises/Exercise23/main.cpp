#include <iostream>
using namespace std;

int main()
{
    int number = 1, howManyNumbers = 0;
    double sum = 0;
    cout << "Enter some positive numbers\n";

    while (number > 0)
    {
        cin >> number;
        sum += number;
        ++howManyNumbers;
    }
    cout << "The average of entered numbers is " << sum / (howManyNumbers - 1) << "\n";

    return 0;

}
