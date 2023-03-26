#include<bits/stdc++.h>
using namespace std;
int n,k,l;
string s,t;
string unlucky_ticket(){
    cin>>n>>s;
    for(int i=0;i<n;i++)t+=s[i];s.erase(0,n);
    sort(t.begin(),t.end());sort(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(t[i]>s[i])k++;
        else if(t[i]<s[i])l++;
    }
    return l==n||k==n?"YES":"NO";
}
int main(){
    cout<<unlucky_ticket();
}
