#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	// about testlib, see https://codeforces.com/blog/entry/18426

	int n = inf.readInt(2, 100000, "n");
	inf.readSpace();
	int m = inf.readInt(2, 2, "m");
	inf.readSpace();
	inf.readInt(1, 87, "c");
	inf.readEoln();
	int q = inf.readInt(1, 300000, "q");
	inf.readEoln();
	while(q--) {
		int a = inf.readInt(1, n, "a");
		inf.readSpace();
		int b = inf.readInt(1, n, "b");
		inf.readEoln();
		ensure(a!=b);
	}
	inf.readEof();

	return 0;
}
