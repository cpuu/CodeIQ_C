/*
    g++ -o pre1_2 pre1_2.cpp -std=c++14
*/

#include <iostream>
using namespace std;

int M = 10;
int N = 100;

int memo[11][101];

int check(int remain, int pre)
{
    int cnt;

    // 이전에 계산한 적 있다면, 메모했던 값을 반환합니다.
    if (memo[pre][remain] != 0)
    {
        return memo[pre][remain];
    }

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
    memo[pre][remain] = cnt;
    return cnt;
}

int main(int argc, char *argv[])
{
    cout << check(N, 2) << '\n';

    return 0;
}