#include<stdio.h>
#include<iostream>
#include<stack>
 using namespace std;

 void trasfer(stack<int>& S, stack<int>& T){
    while (!S.empty())
    {
        T.push(S.top());
        S.pop();
    }
    
 }

 int main(){
    stack<int> S;
    stack<int> T;

    S.push(5); //starting to puch element in
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(1);
    S.push(0);

    trasfer(S,T);
    
    while(!T.empty()){
        cout << T.top() <<"," << endl;
        
        
        T.pop();
        
    }
    return 0;

 }



