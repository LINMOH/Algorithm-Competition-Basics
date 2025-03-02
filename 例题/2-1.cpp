#include<iostream>
using namespace std;

//这是初版

int main()
{
    //输出所有形如aabb的4位完全平方数（即前两位数字相等，后两位数字也相等）。

    for (int i = 1; ; i++)
    {
        int allnum = i * i;

        if (allnum > 9999)
        {
            break;
        }

        int a1 = allnum / 1000;
        int a2 = allnum / 100 - a1 * 10;
        int b1 = allnum / 10 - a1 * 100 - a2 * 10;
        int b2 = allnum / 1 - a1 * 1000 - a2 * 100 - b1 * 10;

        if (a1 == a2 && b1 == b2)
        {
            cout << allnum << endl;
        }
    }
    return 0;
}