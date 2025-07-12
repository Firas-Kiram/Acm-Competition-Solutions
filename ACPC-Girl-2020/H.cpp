#include <bits/stdc++.h>
using namespace std;

#define all(c) begin(c), end(c)
#define pb push_back
#define ll long long
const int N = 5e5 + 100 , LOG = 23;

int main(){
    freopen("masks.in", "r", stdin);
    // freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while(tt--) {
        int n; cin >> n;
        multiset <ll> st;
        for(int i = 0 , x ; i < n ; i ++) {
            cin >> x; st.insert(x);
        }
        ll m , res = 0; cin >> m;
        for(int i = 0 ; i < m ; i ++) {
            ll x = *(st.begin());
            res += x;
            st.erase(st.begin()); st.insert(x + 1);
        }
        cout << res << '\n';
    }
    
    return 0;
}
