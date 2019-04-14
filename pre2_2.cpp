/*
    g++ -o pre2_2 pre2_2.cpp -std=c++14
*/

#include <iostream>
using namespace std;

long long memo[100] = {1,};
long long factorial(int n)
{
    if (memo[n] != 0)
    {
        return memo[n];
    }

    memo[n] = n * factorial(n - 1);
    return memo[n];
}

long long nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(int argc, char *argv[])
{
    cout << nCr(10, 3) << '\n';

    return 0;
}