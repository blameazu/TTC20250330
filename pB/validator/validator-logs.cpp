#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	// about testlib, see https://codeforces.com/blog/entry/18426

	int n = inf.readInt(1, 100000, "n");
	int cnt = 0;
	inf.readEoln();
	for(int i = 0; i < n; i++) {
		int c = inf.readInt(1, 3, "c");
		if(c == 1) {
			inf.readSpace();
			int a = inf.readInt(1, INT_MAX, "a");
		} else if(c == 3) cnt++;
		inf.readEoln();
	}
	ensure(cnt >= 1);
	inf.readEof();

	return 0;
}
