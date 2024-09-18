#include <bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main(){
    opt();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        ll ans = a[n - 2] - a[1];
        ll ans1 = a[n - 1] - a[2];
        ll ans2 = a[n - 3] - a[0];

        cout << min({ans, ans1, ans2}) << endl;
    }
    return 0;
}
