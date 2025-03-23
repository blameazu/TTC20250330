#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define ll long long
signed main() {
	ios::sync_with_stdio(false), cin.tie(0);
	list<pair<int, int> > ls;
	int n; cin >> n;
	string s; cin >> s;
	auto it = ls.begin();
	for(int i = 1; i <= n; i++)
		ls.insert(it, {s[i-1] == 'A' ? 1 : s[i-1] == 'B' ? 2 : 3, i});
	// for(auto &[a, b] : ls) cout << a << ' ' << b << '\n';
	it = ls.begin();
	while(ls.size() > 1) {
		if(it->first == 1)
			ls.erase(it == prev(ls.end()) ? ls.begin() : next(it));
		else if(it->first == 2)
			ls.erase(it == ls.begin() ? prev(ls.end()) : prev(it));
		it = (it != prev(ls.end()) ? next(it) : ls.begin());
	}
	cout << it->second << '\n';
	
}