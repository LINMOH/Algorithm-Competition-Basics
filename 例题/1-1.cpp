/*
P5

例题1-1 圆柱体的表面积
输入底面半径r和高h，输出圆柱体的表面积，保留3位小数，格式见样例。
样例输入：
 3.5 9
样例输出：
 Area = 274.889
*/

#include <iostream>
using namespace std;

float area(float r,float h)
{
    float s,pi;
    pi = 3.1415926;
    s = 2 * pi * r * r + 2 * pi * r * h;
    return s;
}

int main()
{
    float r,h,a;

    cin >> r >> h;
    a = area(r,h);
    cout << "Area = " << a;

    return 0;
}

