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
        int n, m;
        cin >> n >> m;
        vector<string> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        ll dist = 0;
        for (int i = 0; i < n; ++i) {
            ll cnt0 = 0, cnt1 = 0, cntq = 0;
            for (int j = 0; j < m; ++j) {
                if (a[j][i] == '1') cnt1++;
                else if (a[j][i] == '0') cnt0++;
                else cntq++;
            }
            
            ll total = cnt0 + cnt1 + cntq;
            ll ideal0 = total / 2;
            ll ideal1 = total - ideal0;
            ll needed0 = max(0LL, ideal0 - cnt0);
            ll needed1 = max(0LL, ideal1 - cnt1);
            cnt0 += min(needed0, cntq);
            cnt1 += min(needed1, cntq - min(needed0, cntq));
            /*ll mn = min(cnt0, cnt1);
            ll mx = max(cnt0, cnt1);*/
            dist += 1LL * cnt1 * cnt0;
        }
        cout << dist << endl;
    }

    return 0;
}
