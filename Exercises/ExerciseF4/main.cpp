#include <iostream>
using namespace std;

int sum_n(int number)
{
    int sum = 0;
    for (int i = 1; i <= number; ++i)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;

    cout << "The sum is " << sum_n(n) << "\n";
    return 0;
}
