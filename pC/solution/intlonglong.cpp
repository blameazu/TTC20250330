#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	ios::sync_with_stdio(false), cin.tie(0);
	int n; cin >> n;
	string s; cin >> s;
	list<array<int, 3> > ls;
	// ppl kind, left, right
	s = '@' + s;
	auto it = ls.begin();
	for(int i = 1; i <= n; i++) {
		if(s[i] != 'C')
			ls.insert(it, {s[i]=='B', i, i});
		else if(s[i-1] == 'C')
			(*prev(it))[2] = i;
		else
			ls.insert(it, {2, i, i});
	}
	it = ls.begin();
	// for(auto &[a, b, c] : ls) cout << a << ' ' << b << '\n';
	while(n > 1) {
		auto [a, b, c] = *it;
		if(!a) {
			auto nx = (next(it) == ls.end() ? ls.begin() : next(it));
			if((*nx)[0] == 2) {
				(*nx)[1]++;
				if((*nx)[1] > (*nx)[2]) ls.erase(nx);
			} else {
				ls.erase(nx);
			}
			n--;
		} else if(a == 1) {
			auto nx = (it == ls.begin() ? prev(ls.end()) : prev(it));
			if((*nx)[0] == 2) {
				(*nx)[2]--;
				if((*nx)[2] < (*nx)[1]) ls.erase(nx);
			} else {
				ls.erase(nx);
			}
			n--;
		}
		it = (it == prev(ls.end()) ? ls.begin() : next(it));
	}
	cout << (*ls.begin())[1] << '\n';
}