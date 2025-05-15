#include <bits/stdc++.h>
using namespace std;

int n;
string bar = "____";
void chat(int k) {
    string rec = "";
    for (int i = 0; i < (n-k); i++) rec += bar;

    if (k == 0) {
        cout << rec << "\"재귀함수가 뭔가요?\"\n";
        cout << rec << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
        cout << rec << "라고 답변하였지.\n";
        return;
    }
    
    cout << rec << "\"재귀함수가 뭔가요?\"\n";
    cout << rec << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
    cout << rec << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    cout << rec << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
    chat(k-1);
    cout << rec << "라고 답변하였지.\n";
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
    chat(n);
}

/*
1. 함수 명세
    void chat(int k)
    k번 출력
2. base cond
     if (k == 0) {
        "\"재귀함수가 뭔가요?\"\n"
        "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n"
        "라고 답변하였지.\n"
        return;
     }
3. 재귀식
    String rec = bar * (n-k)
     << "재귀함수가 뭔가요?\"\n"
    "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n"
    "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n"
    "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n"
    chat(k-1);
    "라고 답변하였지.\n"

*/