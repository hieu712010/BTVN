#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long n; cin >> n;
    if(n <= 0) 
        return 0;
    string s;
    while(n > 0){
        if(n % 2 == 0)
            s.append("0");
        else
            s.append("1");
        n /= 2;
    }
    reverse(begin(s), end(s));
    cout << s;
    return 0;
}
