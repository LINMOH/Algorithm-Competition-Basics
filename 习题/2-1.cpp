/*
习题2-1
水仙花数（daffodil）
输出100～999中的所有水仙花数。若3位数ABC满足ABC＝A^3 ＋B^3 ＋C^3 ，则称其为水仙花数。例如153＝1^3＋5^3 ＋3^3 ，所以153是水仙花数。
*/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c = 0;
    for (int num = 100; num <= 999; num++)
    {
        a = num / 100;
        b = (num / 10) % 10;
        c = num % 10;

        if (num == (a * a * a) + (b * b * b) + (c * c * c))
        {
            cout << num << endl;
        }
    }
}