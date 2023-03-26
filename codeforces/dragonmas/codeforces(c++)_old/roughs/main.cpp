#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
    cin>>s;
    int k = 0, l = s.size() - 1;
    set<int> st;
    for (int i = 0; i < s.size(); i++) {
        while (s[i] != '(' && i < s.size()) i++;
        while (s[l] != ')' && l >= 0) l--;
        if (i < l) st.insert(i + 1), st.insert(l + 1);
        else break;
        l--;
    }
    if (st.size() == 0) cout << 0;
    else{
        cout << 1 << endl << st.size() << endl;
        for (auto i : st) cout << i << ' ';
    }
}
