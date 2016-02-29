#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 2 integers\n";
    int i, n;

    cin >> i >> n;

    int sum = 0;
    for (int counter = i; counter <= n; ++counter)
    {
        sum += counter;
    }

    cout << "The sum of all the integers between and including the two integers is " << sum << "\n";

    return 0;
}

