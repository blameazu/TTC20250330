#include <bits/stdc++.h>
#include "2025TTC_Many.h"
using namespace std;
int main() {
    ios::sync_with_stdio, cin.tie(0);
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
            cout << re << '\n';
        }
    }
}