#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main() {
	ios::sync_with_stdio(false), cin.tie(0);
	deque<int> dqq;
	int q; cin >> q;
	while(q--) {
		int c; cin >> c;
		if(c == 1) {
			int a; cin >> a;
			dqq.push_back(a);
		} else if(c == 2) {
			if(dqq.size()) dqq.pop_front();
		} else {
			int re = -1;
			for(auto &d : dqq) re = max(re, d);
			cout << re << '\n';
		}
	}
	
}