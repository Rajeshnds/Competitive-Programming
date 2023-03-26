#include<bits/stdc++.h>
using namespace std;
int n,a[101];
void solve(){
    cin>>n;
    string s,ans="YES",t;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=0;i<=n;i++){
        int k=0;
        getline(cin,s);
        for(int j=0;j<s.size();j++){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'
                    ||s[j]=='u'||s[j]=='y')k++;
        }
        if(k!=a[i])ans="NO";
    }
    cout<<ans;
}
int main(){
    solve();
}
