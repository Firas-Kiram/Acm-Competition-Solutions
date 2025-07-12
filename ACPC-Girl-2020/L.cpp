#include <bits/stdc++.h>
using namespace std;

#define all(c) begin(c), end(c)
#define pb push_back
#define ll long long
const int N = 5e5 + 100 , LOG = 23;
double pi = std::numbers::pi;

int main(){
    // freopen("joan.in", "r", stdin);
    // freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
    while(tt--) {
        long double a , l; cin >> a >> l;
        cout << double(sqrt(4 * a * pi) / l) << '\n';
    }
    
    return 0;
}
