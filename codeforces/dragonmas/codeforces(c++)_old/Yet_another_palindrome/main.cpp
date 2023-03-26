#include<bits/stdc++.h>
using namespace std;
int t,n,b;
string pallindrome(int n){
    int a[5001]={0},k=0;
    for(int i=0;i<n;i++){
        cin>>b;
        if(a[b]==0)a[b]=i+1;
        else if(a[b]!=i)k=1;
    }
    return k?"YES":"NO";
}
int main(){
    for(cin>>t;t--;)cin>>n,cout<<pallindrome(n)<<endl;
}
