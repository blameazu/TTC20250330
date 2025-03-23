#include <bits/stdc++.h>
using namespace std;
set<pair<int, long long> > se;
map<long long, int> mp;
void add(int x) {
	if(mp[x]) se.erase({mp[x], x});
	mp[x]++;
	se.insert({mp[x], x});
}
void remove(int x) {
	if(mp[x]) {
		se.erase({mp[x], x});
		mp[x]--;
		se.insert({mp[x], x});
	}
}
pair<int,int> query() {
	if(se.empty()) return {-87, -87};
	return {se.rbegin()->second, se.rbegin()->first};
}