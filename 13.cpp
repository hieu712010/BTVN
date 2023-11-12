#include <iostream>

#define ll long long
using namespace std;
ll n, sum = 0;
int main(){
    cin >> n;
    if(n <= 0) 
        return 0;
    for(ll i = 1; i <= n; i++)
        if(n % i == 0)
            sum += i;
    sum -= n;
    if(sum == n)
        cout << n << " la so hoan hao";
    else
        cout << n << " khong la so hoan hao";
    return 0;
}
