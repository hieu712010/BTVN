#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll n; float s = 0; cin >> n;
    for(ll i = 1; i <= 2*n+1; i+=2)
        s+=i;
    cout << s;
    return 0;
}
