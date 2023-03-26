#include<bits/stdc++.h>
using namespace std;
int no_of_teams(int n,int a[]){
    int s=0,t=0;
    for(int i=1;i<=n;i++){
        t++;
        if(t>=a[i])t=0,s++;
        }
    return s;
}
int main(){
    int t,n;
    for(cin>>t;t--;){
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        cout<<no_of_teams(n,a)<<endl;
    }
}
