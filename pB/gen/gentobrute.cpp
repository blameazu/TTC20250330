#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	// about testlib, see https://codeforces.com/blog/entry/18291

	int q = atoi(argv[1]);
	cout << q << '\n';
	for(int i = 0; i < q>>1; i++) {
        cout << "1 87\n";
    }
    for(int i = 0; i < (q-(q>>1)); i++)
        cout << "3\n";

	return 0;
}
