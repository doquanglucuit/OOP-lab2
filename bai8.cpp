#include<bits/stdc++.h>

using namespace std;

int main () {
    list<int> lst;
    int n;

    while (true) {
        cin >> n;
        if (n == -1) break;

        if (n == 0) {
            int x; cin >> x;
            lst.emplace_back(x);
        }

        if (n == 1) {
            int x; cin >> x;
            for (auto it = lst.begin(); it != lst.end(); it++) {
                if (*it == x) {
                    lst.erase(it);
                    break;
                }
            }
        }

        if (n == 2) {
            int x; cin >> x;
            lst.remove(x);
        }

        if (n == 3) {
            int x, y; cin >> x >> y;
            auto it = lst.begin();
            advance(it, x);
            *it = y;
        }
    }

    cout << '[';
    for (auto it = lst.begin(); it != lst.end();it++) {
        cout << *it;
        if  (it != lst.end()) cout << ", ";
    }
    cout <<']';
}
