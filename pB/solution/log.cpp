#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main() {
	ios::sync_with_stdio(false), cin.tie(0);
	int q; cin >> q;
	queue<int> qq;
	multiset<int> mst;
	mst.insert(-1);
	while(q--) {
		int c; cin >> c;
		if(c == 1) {
			int a; cin >> a;
			qq.push(a);
			mst.insert(a);
		} else if(c == 2) {
			if(qq.empty()) continue;
			mst.erase(mst.find(qq.front()));
			qq.pop();
		} else {
			cout << *mst.rbegin() << '\n';
		}
	}
}