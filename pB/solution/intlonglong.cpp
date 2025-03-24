#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	ios::sync_with_stdio(false), cin.tie(0);
	int q; cin >> q;
	stack<int> stk1, stk2, ans;
	ans.push(-1);
	int tmp = -1;
	while(q--) {
		int c; cin >> c;
		if(c == 1) {
			int a; cin >> a;
			stk1.push(a);
			tmp = max(tmp, a);
		} else {
			if(stk2.empty()) {
				while(stk1.size()) {
					stk2.push(stk1.top());
					ans.push(max(ans.top(), stk1.top()));
					stk1.pop();
				}
				tmp = -1;
			}
			if(c == 3) cout << max(tmp, ans.top()) << '\n';
			else {
				if(stk2.size()) stk2.pop(), ans.pop();
			}
		}
	}
}