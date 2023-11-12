#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll n; float s = 0; cin >> n;
    if(n <= 0) 
        return 0;
    for(ll i = 1; i <= n+1; i++)
        s+=i/i+1.0;
    cout << s;
    return 0;
}
