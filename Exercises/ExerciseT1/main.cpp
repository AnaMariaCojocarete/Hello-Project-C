#include <iostream>
using namespace std;

int main()
{
    int i;
    int sum = 0;
    do
    {
        cout << "Enter some numbers\n";
        cin >> i;

        sum += i;
        cout << "The sum of these numbers is " << sum << "\n";
    } while (i != 0);
    return 0;
}
