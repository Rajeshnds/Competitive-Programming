#include<bits/stdc++.h>
using namespace std;
int n,a[100001],c[100001],k,x;
bool b[100001];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(b[x])continue;
        if(a[x]){
            if(c[x]==0)c[x]=i-a[x];
            else if(c[x]!=i-a[x])k--,b[x]=1;
        }
        else k++;
        a[x]=i;
    }
    cout<<k<<endl;
    for(int i=1;i<100001;i++){
        if(a[i]&&b[i]==0)cout<<i<<" "<<c[i]<<endl;
    }
}
