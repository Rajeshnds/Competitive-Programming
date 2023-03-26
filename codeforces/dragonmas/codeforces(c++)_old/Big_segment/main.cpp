#include<bits/stdc++.h>
using namespace std;
int n,l,r,m=INT_MAX,k,I,d;
int longest_segment(int n){
    for(int i=1;i<=n;i++){
        cin>>l>>r;
        if(l<m)k=r,m=l,I=i;
        else if(l==m&&r>k)k=r,m=l,I=i;
        d=max(d,r);
    }
    return d<=k?I:-1;
}
int main(){
    cin>>n;cout<<longest_segment(n);
}
