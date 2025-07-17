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
        string s;cin >> s;
        int idx; cin >> idx; idx --;
        int n = s.size();
        vector <bool> vis(n , 0);
        string a = {} , b = {};
        for(int i = 0 ; i < n ; i ++){
            if(i == idx - 1 || i == idx + 1){
                a.pb(s[i]);
            }else {
                vis[i] = 1;
                b.pb(s[i]);
            }
        }
        int j = 0;
        sort(all(b));
        for(int i = 0 ; i < n && j < b.size() ; i ++){
            if(vis[i]){
                s[i] = b[j ++];
            }
        
        }
        j = 0;
        for(int i = 0 ; i < n && j < a.size() ; i ++){
            if(!vis[i]){
                s[i] = a[j ++];
            }   
        }
        cout << s << '\n';
    }   

    return 0;
}