#include <iostream>
#include <stack>
using namespace std;

int main(){
    long long n; cin >> n;
    stack <int> s;
    if(n <= 0) 
        return 0;
    while(n != 0){
        s.push(n % 2);
        n /= 2;
    }
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    return 0;
}
