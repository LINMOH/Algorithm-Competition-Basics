/*
p9

例题1-4 鸡兔同笼
已知鸡和兔的总数量为n，总腿数为m。输入n和m，依次输出鸡的数目和兔的数目。如果无解，则输出No answer。
样例输入：
 14 32
样例输出：
 12 2

样例输入：
 10 16
样例输出：
 No answer
*/

#include <iostream>
using namespace std;

int main()
{
    /*
    n:总数量
    m:总腿数
    j:鸡数量
    t:兔数量
    */
    int m,n,j,t;
    cin >> n >> m;

    t = (m - 2 * n) / 2;
    j = n - t;

    if (m % 2 != 0 || m < 2 * n || m > 4 * n)
    {
        cout << "No answer";
    }
    else
    {
        cout << j << " " << t;
    }

    return 0;
}
