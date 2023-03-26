#include<bits/stdc++.h>
using namespace std;
int n,k,a=1e9,b;
string s[51];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++){
        b=0;
        for(int j=0;j<n;j++){
            k=(s[j]+s[j]).find(s[i]);
            k==-1?a=-1:b+=k;
        }
        a=min(a,b);
    }
    cout<<a;
}