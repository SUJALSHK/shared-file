#include <iostream>
#include <stack>
using namespace std;

void transfer(stack<int>& S, stack<int>& T){
    while(!S.empty()){
        T.push(S.top());
        S.pop();
    }
}

void reverseStack(stack<int>& S){
    stack<int> A, B;
    transfer(S, A);
    transfer(A, B);
    transfer(B, S);
}

int main(){
    stack<int> S;

    S.push(5);
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(1);
    S.push(0);

    reverseStack(S);

    cout << "Reversed stack S (top to bottom):" << endl;
    while(!S.empty()){
        cout << S.top() << "," << endl;
        S.pop();
    }

    return 0;
}
