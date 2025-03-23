#include "testlib.h"
using namespace std;

const int MAXN = 1000;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	// about testlib, see https://codeforces.com/blog/entry/18426

	int q = inf.readInt(1, MAXN, "q");
	inf.readEoln();
	for(int i = 0; i < q; i++) {
		int c = inf.readInt(1, 3, "c");
		if(c != 3) {
			inf.readSpace();
			inf.readInt(1, 1000000000, "x");
		}
		inf.readEoln();
	}
	inf.readEof();

	return 0;
}
