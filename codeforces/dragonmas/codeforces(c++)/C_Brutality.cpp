#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,a[200001],ans,j,b[200001];
string s;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>s;
    for(int i=0;i<n;i++){
        j=0;
        b[j++]=a[i];
        while(s[i]==s[i+1])i++,b[j++]=a[i];
        sort(b,b+j);
        reverse(b,b+j);
        for(int f=0;f<min(k,j);f++)ans+=b[f];
    }
    cout<<ans;
}