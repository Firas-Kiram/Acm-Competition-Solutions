#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()
const int N = 2e5 + 100;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    vector <ll> a;
    for(ll i = 0 ; i <= 1e6 + 100 ; i ++) a.pb(i * 1ll * i);
    cin >> tt;
    while(tt --) {
        ll n;  cin >> n;
        /*n - x*x == y * y*/ 
        ll res = INT_MAX;
        for(ll i = 0 ; i < a.size() ; i ++) {
            ll val = n - a[i];
            auto to = upper_bound(all(a) , val);
            if(to != a.end()) res = min(res , abs(val - *to));
            if(--to != a.end()) res = min(res , abs(val - *to));
        }
        cout << res << '\n';
    }   

    return 0;
}