#include<bits/stdc++.h>
using namespace std;
int n;
string s;
void read(){
    cin>>n>>s;
}
void solve(){
    int k=n-11,l=0,m=0;
    for(int i=0;i<n;i++){
        if(s[i]=='8'){
            l++;
            if(l==k/2+1){
                m=i;
                break;
            }
        }
    }
    cout<<(m>0&&m<=k?"YES":"NO");
}
int main(){
    read();
    solve();
}
