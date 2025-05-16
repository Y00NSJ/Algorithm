#include <bits/stdc++.h>
using namespace std;

int paper[2187][2187];
int cnt[3]; // -1, 0, 1

bool isSame(int x, int y, int length) {
    for (int i = x; i < x+length; i++) {
        for (int j = y; j < y+length; j++) {
            if (paper[i][j] != paper[x][y])
                return false;
        }
    }
    return true;
}

void cut(int x, int y, int length) {
    if (isSame(x, y, length)) {
        cnt[paper[x][y]+1]++;
        return;
    }

    int newSize = length/3;

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cut(x+i*newSize, y+j*newSize, newSize);
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }

    cut(0, 0, n);
    for (int i = 0; i < 3; i++) cout << cnt[i] << "\n";

}

/*
1. 함수 명세
    void cut()
    isSame 통과하면 cnt++
    불통과하면 9등분
        - 변의 길이를 3으로 나누면 될 듯
        - 필요한 것: x시작점 좌표, y시작점 좌표, 자르려는 길이
2. 종료조건
    isSame 통과하면 cnt++
3. 재귀식
    1) 종료조건검사
    2) 자르려는 길이: n/3
    3) 호출: 좌표+0 , 좌표+길이 , 좌표+2*길이
         == 좌표 + 0*길이 , 좌표 + 1*길이 , 좌표 + 2*길이

*/