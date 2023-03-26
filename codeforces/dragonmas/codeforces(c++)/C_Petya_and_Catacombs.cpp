#include<bits/stdc++.h>
using namespace std;
int n,a,k,b[200001];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        b[a]++;
        if(b[a]==1)k++;
    }
    cout<<n-k+1;
}