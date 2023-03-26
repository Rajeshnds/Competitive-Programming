#include<bits/stdc++.h>
using namespace std;
int a,b,c,x[]={0,0,1,2,0,2,1};
void solve(){
    int k,m=0;
    k=min(a/3,min(b/2,c/2));
    a-=k*3;b-=k*2;c-=k*2;
    k*=7;
    for(int i=0;i<7;i++){
        int p[3]={a,b,c};
        for(int j=0;j<7;j++){
            if(p[x[(i+j)%7]]--)m=max(m,j+1);
            else break;
        }
    }
    cout<<m+k;
}
int main(){
    cin>>a>>b>>c;
    solve();
}