/*
    g++ -o pre2_3 pre2_3.cpp -std=c++14
*/

#include <iostream>
using namespace std;

long long note[100][100];

long long nCr(int n, int r)
{
    if (note[n][r] != 0)
    {
        return note[n][r];
    }

    if (r == 0 || (r == n))
    {
        return 1;
    }

    note[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r);
    return note[n][r];
}

int main(int argc, char *argv[])
{
    cout << nCr(10, 3) << '\n';

    return 0;
}