#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int foo[10];
    cout << "Enter 10 numbers\n";

    for (int i = 0; i < 10; ++i)
    {
        cin >> foo[i];
    }
    int biggest = numeric_limits<int>::min();
    int index;
    for (int i = 0; i < 10; ++i)
    {
        if (foo[i] > biggest)
        {
            index = i;
            biggest = foo[i];
        }
    }

    cout << "The largest element is:  " << biggest << " And that is the index: " << index << "\n";
    return 0;
}
