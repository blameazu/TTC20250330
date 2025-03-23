#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	ios::sync_with_stdio(false), cin.tie(0);
	int n, m, c; cin >> n >> m >> c;
	if(m >= 4) {
		cout << "0\n";
		return 0;
	}
	int q; cin >> q;
	vector<vector<int> > f(n+1);
	auto chk = [&](int id) -> bool {
		vector<int> cl(n+1, -1);
		queue<int> qq;
		qq.push(id);
		cl[id] = 0;
		while(qq.size()) {
			auto now = qq.front(); qq.pop();
			for(auto &d : f[now]) {
				if(cl[d] == cl[now]) return false;
				if(cl[d] == -1) {
					cl[d] = !cl[now];
					qq.push(d);
				}
			}
		}
		return true;
	};
	int ans = 0;
	while(q--) {
		int a, b; cin >> a >> b;
		f[a].push_back(b);
		f[b].push_back(a);
		if(!chk(a)) f[a].pop_back(), f[b].pop_back(), ans+=c;
	}
	cout << ans << '\n';
}