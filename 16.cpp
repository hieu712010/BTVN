#include <iostream>
#define ll long long
using namespace std;

ll UCLN(ll a, ll b){
    if(b == 0)
        return a;
    return UCLN(b, a % b);
}
int main(){
    ll m, n; cin >> m >> n;

    if(m == 0 && n == 0)
        return 0;
    cout << UCLN(m, n) << "\n" << m * n / UCLN(m, n);
    return 0;
}
