#include<bits/stdc++.h>
using namespace std;
string s;
int k,l;
int main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        s[i]=='x'?k++:l++;
    }
    if(k>l)for(int i=1;i<=k-l;i++)cout<<'x';
    else for(int i=1;i<=l-k;i++)cout<<'y';
}
