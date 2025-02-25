#include<iostream>
using namespace std;

float pay(int qty)
{
    float money = 95.0 * qty;

    if (money >= 300.0)
    {
        money = money * 0.85;
        return money;
    }
    else
    {
        return money;
    }
}

int main()
{
    int qty;
    float money;
    cin >> qty;
    money = pay(qty);
    cout << money;
}