#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number\n";
    int N;

    cin >> N;
    for (int i = N; i > 0; --i)
    {
        for (int space = 0; space < N - i; ++space)
        {
            cout << " ";
        }
        for (int k = 0; k < i; ++k)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
