#include <bits/stdc++.h>
using namespace std;
 
#define all(c) begin(c), end(c)
#define pb push_back
 
using ll = long long;
// mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());

template <class T> 
inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T> 
inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while(T --) {
        ll a , b; cin >> a >> b;
        ll res = lcm(a , b);
        cout << (res / a) * (res / b) << '\n';
    }
    return 0;
}
