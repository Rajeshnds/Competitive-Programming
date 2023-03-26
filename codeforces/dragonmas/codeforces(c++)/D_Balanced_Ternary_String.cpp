#include<bits/stdc++.h>
using namespace std;
int n,a[3],b[3];
string s;
void solve(){
    int d=n/3;
    for(int i=0;i<n;i++){
        for(int j=0;j<3&&a[s[i]-'0']>d;j++){
            if(a[j]<d){
                if(j>s[i]-'0'&&b[s[i]-'0']<d)break;
                a[s[i]-'0']--;
                a[j]++;
                s[i]=j+'0';
            }
        }
        b[s[i]-'0']++;
    }
    cout<<s;
}
int main(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        a[s[i]-'0']++;
    }
    solve();
}