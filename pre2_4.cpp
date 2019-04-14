/*
    g++ -o pre2_4 pre2_4.cpp -std=c++14
*/

#include <iostream>
using namespace std;

long long nCr(int n, int r)
{
    long long result = 1;
    for (int i = 1; i <= r; i++)
    {
        result = result * (n - i + 1) / i;
    }
    return result;
}

int main(int argc, char *argv[])
{
    cout << nCr(10, 3) << '\n';

    return 0;
}