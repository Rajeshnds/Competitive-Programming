#include<bits/stdc++.h>
using namespace std;
int n,a,b[10001],l,k;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a==i)k++;
        else if(b[a]==0)l++;
        b[a]=1;
    }
    cout<<k+l/2;
}