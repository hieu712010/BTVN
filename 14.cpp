#include <iostream>
#define ll long long

using namespace std;
int main() {
    ll n, nguoc = 0; cin >> n;
    
    while (n) {
        nguoc = nguoc * 10 + n % 10;
        n /= 10;
    }
    cout << nguoc << std::endl;

    return 0;
}
