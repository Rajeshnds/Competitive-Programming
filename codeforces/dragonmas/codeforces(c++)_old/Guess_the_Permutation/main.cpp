#include<bits/stdc++.h>
using namespace std;
int n,a,m,f=1;
int permutation(int n){
    for(int i=0;i<n;i++){
        m=0;
        for(int j=0;j<n;j++){
            cin>>a;
            m=max(a,m);
        }
        if(m==n-1&&f)cout<<m+1<<" ",f=0;
        else cout<<m<<" ";
    }
}
int main(){
    cin>>n;permutation(n);
}
