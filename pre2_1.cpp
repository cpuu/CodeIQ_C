/*
    g++ -o pre2_1 pre2_1.cpp -std=c++14
*/

#include <iostream>
using namespace std;

long long nPr(int n, int r)
{
    long long result = 1;
    for (int i = n - r + 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main(int argc, char *argv[])
{
    cout << nPr(10, 3) << '\n';

    return 0;
}