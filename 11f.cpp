#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll n, s = 0, tem = 1; cin >> n;
    for(ll i = 1; i <= n; i++){
        tem *= i;
        s += tem;
    }
    cout << s;
    return 0;
}
