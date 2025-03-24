#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	// about testlib, see https://codeforces.com/blog/entry/18291

	int q = atoi(argv[1]);
	cout << q << '\n';
	while(q--) {
		int c = rnd.next(1, 2);
		cout << (c == 1 ? 1 : 3);
		if(c == 1) {
			cout << ' ' << rnd.next(1, INT_MAX);
		}
		cout << '\n';
	}

	return 0;
}
