#include <iostream>
using namespace std;

int sum(int EndNumber)
{
    int sum = 0;
    for (int i = 0;i <= EndNumber;i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int EndNumber,ans;
    cin >> EndNumber;
    ans = sum(EndNumber);
    cout << ans;
}