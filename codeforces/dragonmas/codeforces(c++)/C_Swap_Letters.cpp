#include<bits/stdc++.h>
using namespace std;
int n,a[200001],b[200001],j,k;
char c1[200001],c2[200001];
void solve(){
    for(int i=1;i<=n;i++){
        if(c1[i]<c2[i])a[++j]=i;
        else if(c1[i]>c2[i])b[++k]=i;
    }
    if(j+k&1)cout<<-1;
    else{
        cout<<(j+k>>1)+(j&1)<<endl;
        for(int i=2;i<=j;i+=2){
            cout<<a[i]<<" "<<a[i-1]<<endl;
        }
        for(int i=2;i<=k;i+=2){
            cout<<b[i]<<" "<<b[i-1]<<endl;
        }
        if(j&1){
            cout<<a[j]<<" "<<a[j]<<endl<<a[j]<<" "<<b[k];
        }
    }
}
int main(){
    cin>>n>>c1+1>>c2+1;
    solve();
}
