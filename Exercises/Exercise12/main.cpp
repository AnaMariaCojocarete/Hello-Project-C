#include <iostream>
using namespace std;

int u(int n)
{
    if (n == 0)
        return 3;
    if (n == 1)
        return 2;
    return n * u(n - 1) + (n + 1) * u(n - 2) + n;
}

int main()
{
    int N;
    cout << "Enter an integer\n";
    cin >> N;
    int result = u(N);
    cout << "u(N)= " << result << "\n";

    return 0;
}
