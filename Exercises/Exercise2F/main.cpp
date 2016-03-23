#include <iostream>
using namespace std;

void add(int a, int b, int& sum)
{
    sum = a + b;
}

int main()
{
    int no1, no2, sum;
    cout << "Enter two numbers\n";
    cin >> no1 >> no2;
    add(no1, no2, sum);
    cout << "The sum is " << sum << "\n";

    return 0;
}
