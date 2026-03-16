#include<iostream>>
#include<queue>
using namespace std;

int main(){

    queue<int> s;

    s.push(5);
    s.push(3);
    s.pop();
    s.push(2);
    s.push(8);
    s.pop();
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

    cout << "First:" << s.front()<< endl;
    cout << "size:" << s.size() << endl;
    
}