#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	// about testlib, see https://codeforces.com/blog/entry/18291

	int n = atoi(argv[1]), mod = atoi(argv[2]);
	cout << n << '\n';
	if(mod == 1) cout << "A" << string(n-1, 'C') << '\n';
    else if(mod == 2) cout << string(n-1, 'C') << "B\n";
    else if(mod == 3) cout << string(87, 'C') << "A" << string(n-88, 'C') << '\n';

	return 0;
}
