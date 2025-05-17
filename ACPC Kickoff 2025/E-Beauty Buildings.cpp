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
        ll n; cin >> n;
        string s;cin >> s;
        vector <ll> A[26];
        for(int i = 0 ; i < n ; i ++) {
            int j = i , cnt = 0;
            while(j < n && s[i] == s[j]) {
                cnt ++ , j ++;
            }
            A[(int)s[i] - 'a'].pb(cnt);
            i = j - 1;
        }
        ll mx = 0;
        for(int i = 0 ; i < 26 ; i ++) {
            for(auto it : A[i]) mx = max(mx , it);
        }
        for(int i = 1 ; i < A[s[0] - 'a'].size() ; i ++) {
            auto &it = A[s[0] - 'a'];
            mx = max(mx , it[0] + it[i]);
        }
        cout << mx << '\n';
    }
    return 0;
}
