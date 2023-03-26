#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    int n;
    cin>>s>>n;
    cout<<((s[0]=='f')^(n==1)?'R':'L');
}
