#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll n; float s = 1;cin >> n;
    for(ll i = 2; i <= n; i++){
        if(i % 2 != 0)
            s += 1.0/i;
        else
            s -= 1.0/i;
    }
    cout << s;
    return 0;
}
