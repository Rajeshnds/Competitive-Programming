#include<bits/stdc++.h>
using namespace std;
int exclusive_or(int n){
    int k=-1,a;
    set<int>s1;
    for(int i=0;i<n;i++)cin>>a,s1.insert(a);
    for(int i=1;i<=1024;i++){
        set<int>s2;
        for(auto j:s1)s2.insert(j^i);
        if(s1==s2){k=i;break;}
    }
    return k;
}
int main(){
    int t,n;
    for(cin>>t;t--;){
        cin>>n;
        cout<<exclusive_or(n)<<endl;
    }
}
