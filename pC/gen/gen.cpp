#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	// about testlib, see https://codeforces.com/blog/entry/18291

	int n = atoi(argv[1]);
	cout << n << '\n';
	for(int i = 0; i < n; i++) cout << char('A'+rnd.next(0, 2));
	cout << '\n';

	return 0;
}
