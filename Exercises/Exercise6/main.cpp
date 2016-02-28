#include <iostream>
using namespace std;

int main()
{
    cout << "Enter an integer N\n";
    int N;
    cin >> N;

    int sum = 0;
    for (int i = 5; i <= N; ++i)
    {
        sum += i * i * i;
    }
    cout << "A sum of 5^3 to N^3 is " << sum << "\n";

    return 0;
}
