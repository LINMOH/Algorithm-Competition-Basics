/*
习题 2-5 分数化小数（decimal）
输入正整数a，b，c，输出a/b的小数形式，精确到小数点后c位。a，b≤106 ，c≤100。输入包含多组数据，结束标记为a＝b＝c＝0。
样例输入：
1 6 4
0 0 0
样例输出：
Case 1: 0.1667
*/

#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a = 0.0, b = 0.0;
    int c = 0;
    cin >> a >> b >> c;
    double ans = a / b;
    cout << fixed << setprecision(c) << ans << endl;
}