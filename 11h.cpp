#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll n, s = 0, tem = 1; cin >> n;
    if(n <= 0) 
        return 0;
    for(ll i = 1; i <= n; i++){
        tem *= i;
        if(i % 2 != 0)
            s += tem;
        else
            s -= tem;
    }
    cout << s;
    return 0;
}
