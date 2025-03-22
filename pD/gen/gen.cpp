#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	// about testlib, see https://codeforces.com/blog/entry/18291

	int n = atoi(argv[1]), m = atoi(argv[2]), c = rnd.next(1, 87);
	cout << n << ' ' << m << ' ' << c << '\n';
	int q = atoi(argv[3]);
	cout << q << '\n';
	while(q--) {
		int a = rnd.next(1, n), b = rnd.next(1, n);
		while(a == b) a = rnd.next(1, n), b = rnd.next(1, n);
		cout << a << ' ' << b << '\n';
	}

	return 0;
}
