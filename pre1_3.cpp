/*
    g++ -o pre1_3 pre1_3.cpp -std=c++14
*/

#include <iostream>
using namespace std;

int M = 10;
int N = 100;

int table[11][101];

int main(int argc, char *argv[])
{
    for (int i = 0; i <= M; i++)
    {
        table[i][0] = 1;
    }

    for (int i = 1; i <= M; i++)
    {
        for (int j = 2; j <= N; j++)
        {
            if ((i >= 2) && (j >= i))
            {
                table[i][j] = table[i][j - i];
            }
            if (i > 2)
            {
                table[i][j] += table[i - 1][j];
            }
        }
    }

    cout << table[M][N] << '\n';

    return 0;
}