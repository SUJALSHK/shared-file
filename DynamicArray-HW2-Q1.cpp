#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(5);
    s.push(3);
    s.pop();
    s.push(2);
    s.push(8);
    s.pop();
    s.push(9);
    s.push(1);
    s.pop();
    s.push(7);
    s.push(6);
    s.pop();
    s.pop();
    s.push(4);
    s.pop();
    s.pop();

    cout << "top:" << s.top() <<endl;

    cout << "size:" <<s.size() << endl;
    cout << s <<endl;

    


}