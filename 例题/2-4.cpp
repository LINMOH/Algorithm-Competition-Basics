/*
例题2-4
阶乘之和
输入n，计算S＝1！＋2！＋3！＋…＋n！的末6位（不含前导0）。n≤106 ，n！表示前n个正整数之积。

样例输入：
 10
样例输出：
 37913
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            a = a * j;
        }
        sum = sum + a;
    }
    sum = sum % 1000000;
    cout << sum;
    return 0;
}