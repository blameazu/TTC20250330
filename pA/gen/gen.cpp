#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	// about testlib, see https://codeforces.com/blog/entry/18291

	int q = atoi(argv[1]);
	cout << q << '\n';
	vector<int> v;
	for(int i = 0; i < q>>1; i++) v.push_back(rnd.next(1, 1000000000));
	while(q--) {
		int c = rnd.next(1, 3);
		if(c == 1) {
			cout << "1 " << v[rnd.next(v.size())] << '\n';
		} else if(c == 2) {
			cout << "2 " << v[rnd.next(v.size())] << '\n';
		} else {
			cout << 3 << '\n';
		}
	}


	return 0;
}
