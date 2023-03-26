#include<bits/stdc++.h>
using namespace std;
int longest_sequence(int a[],int n,int x,int s){
    int m=0,t=s;
    if(s%x)return n;
    for(int i=0;i<n;i++){
        s-=a[i];
        if(s%x){m=n-i-1;break;}
    }
    for(int i=n-1;i>=0;i--){
        t-=a[i];
        if(t%x){m=max(m,i);break;}
    }
    return m?m:-1;
}
int main(){
    int t,n,x;
    for(cin>>t;t--;){
        cin>>n>>x;
        int a[n],s=0;
        for(int i=0;i<n;i++)cin>>a[i],s+=a[i];
        cout<<longest_sequence(a,n,x,s)<<endl;
    }
}
