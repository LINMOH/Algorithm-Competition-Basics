/*
P6

例题1-2 三位数反转
输入一个三位数，分离出它的百位、十位和个位，反转后输出。
样例输入：
 127
样例输出：
 721
*/

#include <iostream>
using namespace std;

int exchange(int n)
{
    int hundred,ten,one,a;
    hundred = n / 100;
    ten = n / 10 % 10;
    one = n %  10;

    a = one * 100 + ten * 10 + hundred;
    return a;
}

int main()
{
    int n,ans;
    cin >> n;
    ans = exchange(n);
    cout << ans;

    return 0;
}
