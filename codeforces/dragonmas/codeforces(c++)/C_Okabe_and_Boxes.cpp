#include<bits/stdc++.h>
using namespace std;
int n,k,d=1,a[300001],ans,j=0;
string s;
void solve(){
    for(int i=1;i<=2*n;i++){
        cin>>s;
        if(s=="add")cin>>a[++j];
        else{
            if(j){
                if(a[j]==d)j--;
                else j=0,ans++;
            }
            d++;
        }
    }
    cout<<ans;
}
int main(){
    cin>>n;
    solve();
}