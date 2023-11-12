#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

int main(){
    ll n, i = 2; bool snt = true;
    cin >> n;
    if(n < 2)
        snt = 0;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            snt = 0;
    if(snt)
        cout << n << " la so nguyen to";
    else 
        cout << n << " khong la so nguyen to";
    return 0;
}
