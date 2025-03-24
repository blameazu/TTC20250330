#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
struct DSU{
	vector<int> p;
	DSU(int n) : p(n+1, -1) {}
	int fp(int id) {return p[id] < 0 ? id : p[id] = fp(p[id]);}
	bool same(int a, int b) {return fp(a) == fp(b);}
	void upd(int a, int b) {
		int ar = fp(a), br = fp(b);
		if(ar != br) {
			if(p[ar] > p[br]) swap(ar, br);
			p[ar] += p[br];
			p[br] = ar;
		}
	}
};
signed main() {
	ios::sync_with_stdio(false), cin.tie(0);
	int n, m, c; cin >> n >> m >> c;
	if(m >= 4) {cout << "0\n"; return 0;}
	int ans = 0;
	int q; cin >> q;
	DSU dsu(n<<1);
	while(q--) {
		int a, b; cin >> a >> b;
		if(!dsu.same(a, b)) {
			dsu.upd(a, b+n);
			dsu.upd(a+n, b);
		} else ans++;
	}
	cout << c*ans << '\n';
}