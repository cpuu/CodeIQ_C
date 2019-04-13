/*
    g++ -o pre1_1 pre1_1.cpp -std=c++14
*/

#include <iostream>
using namespace std;

int M = 10;
int N = 100;

int check(int remain, int pre)
{
    int cnt;

    // 배치할 사람이 더 이상 없으면 종료
    if (remain < 0)
        return 0;
    else if (remain == 0)
        return 1;

    // 재귀적 처리
    cnt = 0;
    for (int i = pre; i <= M; i++)
    {
        cnt += check(remain - i, i);
    }
    return cnt;
}

int main(int argc, char *argv[])
{
    cout << check(N, 2) << '\n';

    return 0;
}