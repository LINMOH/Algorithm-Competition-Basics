/*
p7

例题1-3 交换变量
输入两个整数a和b，交换二者的值，然后输出。
样例输入：
 824 16
样例输出：
 16 824
*/

#include <iostream>
using namespace std;

int main()
{
    int a,n,m;
    cin >> n >> m;
    
    a = n;
    n = m;
    m = a;

    cout << n << " " << m;
}
