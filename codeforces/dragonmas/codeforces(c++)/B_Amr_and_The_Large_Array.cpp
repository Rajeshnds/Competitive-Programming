#include<bits/stdc++.h>
using namespace std;
int n,p,q,k,a,c[1000001],b[1000001];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(b[a]==0)b[a]=i;
        c[a]++;
        if(c[a]>k||(c[a]==k&&i-b[a]<q-p)){
            k=c[a];
            p=b[a];
            q=i;
        }
    }
    cout<<p<<" "<<q;
}