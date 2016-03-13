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

    int V;
    cout << "Enter an integer V\n";
    cin >> V;

    for (int i = 0; i < 10; ++i)
    {
        if (foo[i] == V)
        {
            for (int n = i; n < 10 - 1; ++n)
            {
                foo[n] = foo[n + 1];
            }
            foo[9] = 0;
            break;
        }
    }

    cout << "The array is\n";
    for (int i = 0; i < 10; ++i)
        cout << foo[i] << " ";
    cout << "\n";

    return 0;
}
