#include<iostream>
using namespace std;

//总感觉一开始判断aabb不够优雅，这是第二版

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

        // 提取各个数字
        int a1 = allnum / 1000;  // 千位
        int a2 = (allnum / 100) % 10;  // 百位
        int b1 = (allnum / 10) % 10;  // 十位
        int b2 = allnum % 10;  // 个位

        if (a1 == a2 && b1 == b2)
        {
            cout << allnum << endl;
        }
    }
    return 0;
}