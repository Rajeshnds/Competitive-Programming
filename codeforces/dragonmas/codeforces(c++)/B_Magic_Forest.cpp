#include<bits/stdc++.h>
using namespace std;
int n,s,k;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           k=i^j;
           if(k<=j&&k+j>i)s++;
       }
    }
    cout<<s;
}