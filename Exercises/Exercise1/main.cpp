#include <iostream>
using namespace std;

int main()
{
    int a;

    cout <<"Enter an integer value\n";
    cin >> a;
    if ((a < 78) && (a > 56))
    {
        cout << "You win\n";
    }
    else
    {
        cout <<"You lose\n";
    }

    return 0;
}
