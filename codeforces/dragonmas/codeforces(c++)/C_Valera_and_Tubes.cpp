#include<bits/stdc++.h>
using namespace std;
int n,m,k,l=1,j=1,e;
void solve(){
    int d=(n*m)/k;
    for(int i=1;i<=k;i++,cout<<endl){
        if(i<k)e=d;
        else e=n*m-(d*(k-1));
        cout<<e<<" ";
        while(e--){
            if(l&1){
                cout<<l<<" "<<j++<<" ";
                if(j>m)l++;
            }
            else{
                cout<<l<<" "<<--j<<" ";
                if(j==1)l++;
            }
        }
    }
}
int main(){
    cin>>n>>m>>k;
    solve();
}