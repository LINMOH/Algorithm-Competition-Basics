#include<iostream>
using namespace std;

int triangle(int a)
{
    for (int i = 0; i < a; i++)  //改正：i <= a ==》 i < a
    {
        int b = 0;
        int j = 1;
        while(j <= i)
        {
            cout << " ";
            j++;
        }

        while(b++ < 2 * (a - i) - 1)  //改正：2 * (a - i) - 2 ==》 2 * (a - i) - 1
        {
            cout << "#";
        }
    cout <<endl;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    triangle(n);
}