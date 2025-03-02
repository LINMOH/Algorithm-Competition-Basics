#include <iostream>
using namespace std;

int main()
{
    long n;
    cin >> n;
    int j = 0;

    while (n > 1)
    {
        if (n % 2 == 1)
        {
            j++;
            n = 3 * n + 1;
            continue;
        }
        else
        {
            j++;
            n = n / 2;
            continue;
        }
    }

    cout << j;
    return 0;
}