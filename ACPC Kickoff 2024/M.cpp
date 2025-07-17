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
    cin >> tt;
    while(tt --) {
        int n; cin >> n;
        vector <ll> v(n) , a;
        for(int i = 0 ; i < n ; i ++) cin >> v[i];
        for(int i = 0 ; i < n - 1 ; i ++) a.pb(abs(v[i] - v[i + 1]));
        ll g = 0;
        for(auto to : a) g = gcd(g , to);
        if(g == 1) cout << "-1\n";
        else {
            for(ll i = 2 ; i * i <= g ; i ++) {
                if(g % i == 0) {
                    g = i; break;
                }                
            }
            cout << max(g , 2ll) << '\n';
        }

    }   

    return 0;
}