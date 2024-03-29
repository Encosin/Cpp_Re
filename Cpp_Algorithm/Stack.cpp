// Page 628 스택을 이용한 울타리 자르기 문제의 해법 중

// 스위핑 Algorithm
//-----------------------------------------------------------
// 각 판자의 높이를 저장하는 배열
// vector <int> h;
// // 스택을 사용한 O(n) 해법
// int solveStack() {
//     // 남아 있는 판자들의 위치들을 저장한다.
//     stack<int> remaining;
//     h.push_back(0);
//     int ret = 0;
//     for(int i = 0; i < h.size(); ++i) {
//         // 남아있는 판자들 중 오른쪽 끝 판자가 h[i] 보다 높다면
//         // 이 판자의 최대 사각형은 i에서 끝난다.
//         while (!remaining.empty() && h[remaining.top()] >= h[i]) {
//             int j = remaining.top();
//             remaining.pop();
//             int width = -1;
//             // i번째 판자 왼쪽에 판자가 하나도 안 남아있는 경우 left[i] - 1
//             // 아닌 경우 left[i] = 남아있는 판자 중 가장 오른쪽에 있는 판자의 번호가 된다.
//             if (remaining.empty())
//                 width = i;
//             else 
//                 width = (i - remaining.top() - 1);
//             ret = max(ret, h[j] * width);
//         }
//         remaining.push(i);
//     }
//     return ret;
// }


#include<iostream>

// 이게 원래 반복문
// int sum(int n) 
// {
//     int ret=0;
//     for (int i = 1; i <= n; ++i)
//     {
//         ret += i;
//         return ret;
//     }

// }

// 이것이 재귀를 이용한 반복문
// int recursiveSum(int n)
// {
//     int (n == 1) return 1;
//     reutrn n + recursiveSum(n-1);
// }

// int countPairings(bool taken[10])
// {
//     int firstFree = -1;
//     for (int i = 0; i < (n); i++) {
//         if(!taken[i]) {
//             firstFree = i;
//             break;
//         }
//     }
//     if(firstFree == -1) return 1;
//     int ret = 0;

//     for(int pairWith = (firstFree + 1); pairWith < (n); pairWith ++) {
//         if(!taken[pairWith] && areFriends[firstFree] [pairWith]) {
//             taken[firstFree] = taken[pairWith] = true;
//             ret += countPairings(taken)
//             taken[firstFree] = taken[pairWith] = false;
//         }
//     }
//     return ret;
// }


int main()
{
    int x = 0, y = 0;
    scanf("%d\n%d", &x, &y);
    if (x > 0 && y > 0) {
        printf("1\n");
    }
    else if(x < 0 && y > 0) {
        printf("2\n");
    }
    else if(x < 0 && y < 0) {
        printf("3\n");
    }
    else if(x > 0 && y < 0) {
        printf("4\n");
    }
    else {
        printf("원점이다.\n");
    }
}