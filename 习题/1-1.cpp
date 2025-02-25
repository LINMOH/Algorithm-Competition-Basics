#include <iostream>
using namespace std;

float average(float a,float b,float c)
{
    float sum,aver;
    sum = a + b + c;

    aver = sum / 3;
    return aver;
}

int main() 
{
    float a,b,c,ans;
    cin >> a >> b >> c;

    ans = average(a,b,c);
    cout << ans;

    return 0;
}