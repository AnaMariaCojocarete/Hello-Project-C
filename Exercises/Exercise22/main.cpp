#include <iostream>
using namespace std;

int main()
{
    int i,s =0;
    do
    {
        cout << "Enter some positive numbers\n";
        cin >> i;

            s++;

    }
    while (i > 0);
    cout << "The number of positive numbers entered is " << s << "\n";

    return 0;
}
