#include<bits/stdc++.h>
using namespace std;
int n,b[200001],a[200001],r,k,f=1;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==0)r=1,k=0;
        if(r){
            if(f){
                for(int j=1;j<i;j++){
                    b[j]=i-j;
                }
                f=0;
            }
            b[i]=k;
            k++;
        }
    }
    f=1;
    r=0;
    for(int i=n;i>=1;i--){
        if(a[i]==0)r=1,k=0;
        if(r){
            if(f){
                for(int j=n;j>i;j--){
                    b[j]=min(b[j],j-i);
                }
                f=0;
            }
            b[i]=min(b[i],k);
            k++;
        }
    }
    for(int i=1;i<=n;i++)cout<<b[i]<<" ";
}
