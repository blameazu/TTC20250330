#include <bits/stdc++.h>
#include "2025TTC_Many.h"
using namespace std;
int main() {
    ios::sync_with_stdio, cin.tie(0);
    cout << "xddd\n";
    int q; cin >> q;
    while(q--) {
        int c; cin >> c;
        if(c == 1) {
            int x; cin >> x;
            add(x);
            cout << "haha\n";
        } else if(c == 2) {
            int x; cin >> x;
            remove(x);
            cout << "remo\n";
        } else {
            pair<int,int> re = query();
            cout << re.first-87 << ' ' << re.second+87 << '\n';
        }
    }
    cout << "frieren will rule this world!!!\n";
}