#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()
const int N = 2e5 + 100;
 
int main(){
    freopen("func.in" , "r" , stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while(tt --) {
        ll n ; cin >> n;
        vector <ll> v(n); ll s = 0;
        for(int i = 0 ; i < n ; i ++) cin >> v[i] , s += (v[i] * (i + 1));
        ll res = s;
        for(int i = 0 ; i < n ; i ++) {
            for(int j = i + 1 ; j < n ; j ++) {
                s -= ((v[i] * (i + 1)) + (v[j] * (j + 1)));
                swap(v[i] , v[j]);
                s += ((v[i] * (i + 1)) + (v[j] * (j + 1)));
                res = max(res , s);
                s -= ((v[i] * (i + 1)) + (v[j] * (j + 1)));
                swap(v[i] , v[j]);
                s += ((v[i] * (i + 1)) + (v[j] * (j + 1)));
            }
        }
        cout << res << '\n';
    }   
 
    return 0;
}