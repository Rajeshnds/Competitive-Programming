#include<bits/stdc++.h>
using namespace std;

int max_cost = 1e9;
map<string, int> m;

void read() {
    int n, cost;
    string vitamins;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> cost >> vitamins;

        sort(vitamins.begin(),vitamins.end());

        if(!m.count(vitamins)) {
            m[vitamins] = cost;
        }
        else {
            m[vitamins] = min(m[vitamins], cost);
        }
    }
}

int getC(string a, string b) {
    if(!m.count(a) || !m.count((b))){
        return max_cost;
    }
    return m[a] + m[b];
}

void solve() {
    int ans = max_cost;

    if(m.count("A") && m.count("B") && m.count("C")) {
        ans = min(ans, m["A"] + m["B"] + m["C"]);
    }
    if(m.count("ABC")) {
        ans = min(ans, m["ABC"]);
    }
    ans = min(ans, getC("AB", "BC"));
    ans = min(ans, getC("AB", "AC"));
    ans = min(ans, getC("AC", "BC"));
    ans = min(ans, getC("AB", "C"));
    ans = min(ans, getC("BC", "A"));
    ans = min(ans, getC("AC", "B"));

    cout <<(ans == max_cost ? -1 : ans);
}

int main() {
    read();
    solve();
}
