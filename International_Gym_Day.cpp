#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define ld long double
#define ull unsigned long long

int main() {
    opt();
    int t;
    cin >> t; 
    while (t--) {
        int d, x, y;
        cin >> d >> x >> y;
        if (y >= x) {
            cout << 0 << endl;
            continue;
        }
        bool ok = false;
        int ans = -1;
        for (int i = 1; i <= 100; i++) {
            int budget = y - i;  
            if (budget < 0) break; 
            int dis = (100 - i * d);
            int price = (x * dis + 99) / 100; 
            if (budget >= price) {
                ans = i;
                ok = true;
                break;
            }
        }
        if (ok) {
            cout << ans << endl;
        } 
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
