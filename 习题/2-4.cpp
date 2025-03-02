/*
习题 2-4 子序列的和（subsequence）
输入两个正整数n＜m＜106，输出 1/n^2 + 1/(n+1)^2 + ... + 1/m^2，保留5位小数。输入包含多组数据，结束标记为n＝m＝0。提示：本题有陷阱。
样例输入：
2 4
65536 655360
0 0
样例输出：
Case 1: 0.42361
Case 2: 0.00001
*/

#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long n = 0;
    long long m = 0;
    double sum;
    cin >> n >> m;

    for (; n <= m; n++)
    {
        sum += 1.0 / (static_cast<double>(n) * n);

    }
    cout << fixed << setprecision(5) << sum << endl;
}