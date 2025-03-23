#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	// about testlib, see https://codeforces.com/blog/entry/18426

	int n = inf.readInt(1, 1000000, "n");
	inf.readEoln();
	string s = inf.readString();
	inf.readEoln();
	for(auto &c : s) ensure(c >= 'A' && c <= 'C');
	inf.readEof();

	return 0;
}
