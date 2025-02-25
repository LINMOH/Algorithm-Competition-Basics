#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        cout << "not a triangle";
        return 0;
    }

    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}