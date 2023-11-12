#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll n ;float s = 1; cin >> n;
    for(ll i = 2; i <= n; i++)
        s*=1+1.0/(i*i);
    cout << s;
    return 0;
}
