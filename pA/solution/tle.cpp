#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void add(int a) {
	v.push_back(a);
}
void remove(int a) {
	for(auto &d : v) if(d == a) {
		d = -87; return;
	}
}
pair<int, int> query() {
	int cnt = -87, id = -87;
	map<int, int> mp;
	for(auto &d : v) if(d != -87) {
		mp[d]++;
		if(cnt < mp[d]) cnt = mp[d], id = d;
		else if(cnt == mp[d]) id = min(id, d);
	}
	return {id, cnt};
}