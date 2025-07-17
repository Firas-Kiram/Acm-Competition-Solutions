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
    // cin >> tt;
    while(tt --) {
        int n , m; cin >> n >> m;
        int nx = n / m;
        if(nx >= 150) cout << "VERY HAPPY" << '\n';
        else if(nx >= 100) cout <<"HAPPY" << '\n';
        else cout << "SAD" << '\n';
    }   

    return 0;
}