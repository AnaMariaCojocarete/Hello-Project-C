#include <iostream>
using namespace std;

int main()
{
    int foo[10];
    cout << "Enter 10 numbers\n";
    for (int i = 0; i < 10; ++i)
    {
        cin >> foo[i];
    }

    int index;
    cout << "Enter an index between 0 and 9\n";
    cin >> index;

    int V;
    cout << "Enter a number V\n";
    cin >> V;

    for (int i = 0; i < 10; ++i)
    {
        for (int n = 9; n > index; --n)
        {
            foo[n] = foo[n - 1];
        }

        foo[index] = V;
        break;
    }

    cout << "The array is\n";
    for (int i = 0; i < 10; ++i)
        cout << foo[i] << " ";
    cout << "\n";

    return 0;
}
