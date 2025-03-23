#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	// about testlib, see https://codeforces.com/blog/entry/18291

	int n = atoi(argv[1]);
	cout << n << '\n';
	cout << string(n, 'A') << '\n';

	return 0;
}
