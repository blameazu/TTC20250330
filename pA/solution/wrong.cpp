#include <bits/stdc++.h>
using namespace std;
set<pair<int, int> > se;
map<int, int> mp;
void add(int x) {
	if(mp[x]) se.erase({mp[x], -x});
	mp[x]++;
	se.insert({mp[x], -x});
}
void remove(int x) {
	if(mp[x]) {
		se.erase({mp[x], -x});
		mp[x]--;
		se.insert({mp[x], -x});
	}
}
pair<int,int> query() {
	if(se.empty()) return {-30, -30};
	return {-se.rbegin()->second, se.rbegin()->first};
}