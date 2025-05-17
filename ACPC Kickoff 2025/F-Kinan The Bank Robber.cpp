#include <bits/stdc++.h>
using namespace std;
 
#define all(c) begin(c), end(c)
#define pb push_back
 
using ll = long long;
// mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());

vector <ll> spf;

void prepa() {
    ll m = 1e7 + 100;
    spf = vector <ll> (m + 10 , {});
    iota(all(spf) , 0);
    for(ll i = 2 ; i < m ; i ++) {
        if(spf[i] != i) continue;
        for(ll j = i ; j < m ; j += i) {
            if(spf[j] == j) spf[j] = i;
        }
    }
}

vector <ll> get(ll x) {
    vector <ll> ret;
    while(x > 1) {
        ret.pb(spf[x]); x /= spf[x];
    }
    return ret;
}
const ll N = 1e7 + 100;

vector <ll> edj[N] , cnt(N , {});
vector <bool> vis(N , 0);

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    // cin >> T;
    prepa();
    while(T --) {
        ll n; cin >> n;
        ll m = 1e7 + 100 , mx = 0;
        vector <ll> v(n);
        for(int i = 0 ; i < n ; i ++) cin >> v[i];
        bool ok = 1;
        for(int i = 0 ; i < n ; i ++) {
            mx = max(mx , v[i]);
            auto vec = get(v[i]);
            set <ll> s(all(vec));
            for(auto it : s) {
                cnt[it] ++ ;
                edj[it].pb(i);
                if(cnt[it] > 2) ok = 0;
            }
        }
        if(!ok) {
            cout << "-1\n"; continue;
        }
        vector <vector <ll>> adj(n);
        for(auto it : edj) {
            auto &vec = it;
            if(vec.size() == 2) {
                adj[vec[0]].pb(vec[1]);
                adj[vec[1]].pb(vec[0]);
            }
        }

        vector <int> color(n , -1);
        for(int i = 0 ; i < n && ok ; i ++) {
            if(color[i] == -1) {
                queue <ll> q;
                color[i] = 0; q.push(i);
                while(q.size() && ok) {
                    ll u = q.front(); q.pop();
                    for(auto to : adj[u]) {
                        if(color[to] == -1){
                            color[to] = (color[u] ^ 1);
                            q.push(to);
                        }else if(color[to] == color[u]) ok = 0;
                    }
                }
            }
        }
        if(!ok) cout << "-1\n";
        else {
            for(int i = 0 ; i < n ; i ++) cout << color[i] + 1 << ' ';cout << '\n';
        }
    }

    return 0;
}
