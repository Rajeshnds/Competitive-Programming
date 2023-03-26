#include<bits/stdc++.h>
using namespace std;
int n,j,a[200001];
int main(){
    cin>>n;
    for(int i=2;i<=n;i++){
        if(a[i]==0){
            j++;
            for(int k=i;k<=n;k+=i)a[k]=j;
        }
    }
    for(int i=2;i<=n;i++)cout<<a[i]<<" ";
}
