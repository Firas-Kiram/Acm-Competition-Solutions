#include <bits/stdc++.h>
using namespace std;
#define pb push_back
const int N = 2e5 + 100;
#define ll long long

vector <int> v , lst , res , cnt , edj[N];
set <int> s; int mex = 0;
vector <bool> vis;
void dfs(int node) {
    if(vis[node]) return ;
    vis[node] = 1 ; lst[node] = mex; cnt[v[node]] ++ ;
    if(cnt[v[node]] == 1) s.insert(v[node]);
    while(s.find(mex) != s.end()) mex ++ ;
    res[node] = mex;
    for(auto to : edj[node])
        dfs(to);
    cnt[v[node]] --;
    if(cnt[v[node]] == 0) {
        s.erase(v[node]);
        mex = lst[node];
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while(tt --) {
        int n; cin >> n; v = cnt = res = lst = vector <int>(n + 1 , {});
        vis = vector <bool> (n + 1 , false);
        for(int i = 1 ; i <= n ; i ++) cin >> v[i];
        for(int i = 2 ; i <= n ; i ++) {
            int u; cin >> u;
            edj[i].pb(u); edj[u].pb(i);
        }
        mex = 0;
        dfs(1);
        for(int i = 1 ; i <= n ; i ++) cout << res[i] << ' '; cout << '\n';
        for(int i = 0 ; i <= n ; i ++) {
            edj[i].clear(); vis[i] = cnt[i] = 0;
        }
        s.clear();
    }

    return 0;
}