#include <bits/stdc++.h>
using namespace std;

#define all(c) begin(c), end(c)
#define pb push_back
const int N = 5e5 + 100 , LOG = 23;

int main(){
    freopen("mariecurie.in", "r", stdin);
    // freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while(tt--) {
        int n; cin >> n;
        double x = (double)100 / (double)14;
        cout << floor(x * n) << '\n'; 
    }
    
    return 0;
}
