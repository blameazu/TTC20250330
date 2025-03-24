#include <bits/stdc++.h>
using namespace std;
signed main() {
	ios::sync_with_stdio(false), cin.tie(0);
	int ans = -1, q; cin >> q;
	while(q--) {
		int c; cin >> c;
		if(c == 1) {int x; cin >> x; ans = max(ans, x);}
		else cout << ans << '\n';
	}
}