/*
    g++ -o pre2_5 pre2_5.cpp -std=c++14
*/

#include <iostream>
using namespace std;

// n이 고정되어 있는 경우에서, r만 메모화 한 예시임
long long result[100] = {
    1,
};

long long nCr(int n, int r)
{
    if (result[r] != 0)
    {
        return result[r];
    }

    for (int i = 1; i <= r; i++)
    {
        result[i] = result[i - 1] * (n - i + 1) / i;
    }

    return result[r];
}

int main(int argc, char *argv[])
{
    cout << nCr(10, 3) << '\n';

    return 0;
}