#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll n; float s = 0; cin >> n;
    if(n <= 0) 
        return 0;
    for(ll i = 2; i <= 2*n; i+=2)
        s+=1.0/i;
    cout << s;
    return 0;
}
