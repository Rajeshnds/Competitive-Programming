#include<bits/stdc++.h>
using namespace std;
long long n,ans,j,k,t,a[1000001];
string s;
int main(){
    for(cin>>t;t--;){
        j=0;ans=0;
        cin>>n>>s;
        for(int i=0;i<n;i++)if(s[i]=='*')a[j++]=i;
        k=j/2;
        for(int i=0;i<j;i++){
            ans+=abs(a[i]-a[k])-abs(i-k);
        }
        cout<<ans<<endl;
    }
}