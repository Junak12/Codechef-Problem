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
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt0 = count(s.begin(), s.end(), '0');
        int cnt1 = n - cnt0;
        int ans = 0;
        for (int k = 1; k <= n; ++k) {
            if ((k >= cnt0 && (k - cnt0) % 2 == 0) || (k >= cnt1 && (k - cnt1) % 2 == 0)) {
                ++ans;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
