#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main() {
	ios::sync_with_stdio(false), cin.tie(0);
	int n, m, c; cin >> n >> m >> c;
    m = min(m, 4);
	vector<vector<int> > f(n+1);
	int q; cin >> q;
	int re = 0;
	while(q--) {
		int a, b; cin >> a >> b;
		vector<int> cl(n+1, -1);
		auto dfs = [&](auto dfs, int id) -> bool {
			for(auto &d : f[id]) {
				if(cl[d] != -1) {
					if(cl[d] == cl[id]) {
						return false;
					}
				} else {
					bool tmp = false;
					for(int j = 1; j <= m; j++) if(j != cl[id]) {
						cl[d] = j;
						tmp |= dfs(dfs, d);
					}
					if(!tmp) return false;
				}
			}
			return true;
		};
		bool ans = true;
		for(int i = 1; i <= n; i++) if(cl[i] == -1) {
			bool tmp = false;
			for(int j = 1; j <= m; j++) {
				cl[i] = j;
				tmp |= dfs(dfs, i);
			}
			ans &= tmp;
		}
		if(ans) f[a].emplace_back(b), f[b].emplace_back(a);
		else re++;
	}
	cout << re*c << '\n';
}