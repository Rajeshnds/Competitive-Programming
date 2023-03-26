#include<bits/stdc++.h>
using namespace std;
string s;
int m,l,r,k;
int main(){
    cin>>s>>m;
    for(int i=0;i<m;i++){
        cin>>l>>r>>k;
        k=k%(r-l+1);
        rotate(&s[l-1],&s[r-k],&s[r]);
    }
    cout<<s;
}