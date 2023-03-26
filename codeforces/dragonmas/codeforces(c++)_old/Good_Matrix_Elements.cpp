#include<bits/stdc++.h>
using namespace std;
int n,a,s;
main(){
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>a;
        if(i==j||i==(n+1)/2||j==(n+1)/2||i+j==n+1)s+=a;
    }
}
cout<<s;
}
