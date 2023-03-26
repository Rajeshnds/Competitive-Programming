#include<bits/stdc++.h>
using namespace std;
long long k,s1,s2,t,n,a,b,l,e;
string s;
void solve(){
    k=0,s1=n,s2=n+1,l=0,e=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            k++;
            if(e==0)s1++,e=1;
        }
        if(k&&s[i]=='0'){
            while(i<n&&s[i+1]=='0')i++,l++;
            if(i==n-1){
                s1++;
                s2+=k+1;
            }
            else if(2*a<l*b)s1++,s2+=k+1,e=0;
            else s2+=k+l+1;
            k=0;
            l=0;
        }
    }
    cout<<s1*a+s2*b;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>a>>b>>s;
        solve();
    }
}