/*
习题 2-6 排列（permutation）
用1，2，3，…，9组成3个三位数abc，def和ghi，每个数字恰好使用一次，
要求abc：def：ghi＝1：2：3。按照“abc def ghi”的格式输出所有解，每行一个解。
提示：不必太动脑筋。
*/

#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h, i;
    for(a = 1; a <= 9; a++)
    {
        for(b = 1; b <= 9; b++)
        {
            for(c = 1; c <= 9; c++)
            {
                for(d = 1; d <= 9; d++)
                {
                    for(e = 1; e <= 9; e++)
                    {
                        for(f = 1; f <= 9; f++)
                        {
                            for(g = 1; g <= 9; g++)
                            {
                                for(h = 1; h <= 9; h++)
                                {
                                    for(i = 1; i <= 9; i++)
                                    {
                                        if((2 *(a * 100 + b * 10 + c) == 1 *(d * 100 + e * 10 + f)) && (3 *(a * 100 + b * 10 + c) == 1 *(g * 100 + h * 10 + i)) && (a != b) && (a != c) && (a != d) && (a != e) && (a != f) && (a != g) && (a != h) && (a != i) && (b != c) && (b !=d ) && (b != e) && (b != f) && (b != g) && (b != h) && (b != i) && (c != d) && (c != e) && (c != f) && (c != g) && (c != h) && (c != i) && (d != e) && (d != f) && (d != g) && (d != h) && (d != i) && (e != f) && (e != g) && (e != h) && (e != i) && (f != g) && (f != h) && (f !=i ) && (g != h) && (g != i) && (h != i))
                                        {
                                            cout << a * 100 + b * 10 + c << d * 100 + e * 10 + f << g * 100 + h * 10 + i << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
