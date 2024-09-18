#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main(){
    opt();
    int t;
    cin >> t;

    while (t--){
        ll n, p;
        cin >> n >> p;
        ll cnt = 0;
        int mx = 299;
        while (n <= mx) {
            ll wr = mx - n; 
            ll penalty = p + wr * 20 + mx; 
            
            if (penalty <= 1000) { 
                cnt = wr;
                break;  
            }
            mx--;  
        }

        cout << cnt << endl;
    }
}
