#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll n, tem = 1; float s = 1; cin >> n;
    for(ll i = 2; i <= n; i++){
        tem *= i;
        s += 1.0/tem;
    }
    cout << s;
    return 0;
}
