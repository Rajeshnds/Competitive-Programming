#include<bits/stdc++.h>
using namespace std;
int n,k,l,m,f=1,a[101];
string s;
int correct_password(int n,int k){
    l=n;
    for(int i=0;i<n;i++)cin>>s,a[i]=s.size();
    cin>>s;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==s.size()&&f==1)m=i+1,f=0;
        if(a[i]>s.size()&&f==0)l=i,f=1;
    }
    cout<<m+(m-1)/k*5<<" "<<l+(l-1)/k*5;
}
int main(){
    cin>>n>>k;correct_password(n,k);
}
