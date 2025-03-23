#include <bits/stdc++.h>
using namespace std;
static const string input_key = "ilovefrierenandfrierenlovemetoo";
static const string output_key = "blameblameisblameblameandblameblameisnotblameblame";
int main() {
    ios::sync_with_stdio, cin.tie(0);
    {
        string key; cin >> key;
        if(key != intput_key) {
            cout << output_key << "SV\n";
            return 0;
        }
    }
    int q; cin >> q;
    while(q--) {
        int c; cin >> c;
        if(c == 1) {
            int x; cin >> x;
            add(x);
        } else if(c == 2) {
            int x; cin >> x;
            remove(x);
        } else {
            int re = query();
        }
    }
}