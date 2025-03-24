#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);
	// about testlib, see https://codeforces.com/blog/entry/18291

	int q = atoi(argv[1]);
	cout << q << '\n';
	int pu = q*atoi(argv[2])/100;
	for(int i = 0; i < pu; i++) cout << "1 87\n";
	for(int i = 0; i < q-pu; i++) cout << "3\n";

	return 0;
}
