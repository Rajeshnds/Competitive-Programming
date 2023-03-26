#include<bits/stdc++.h>
using namespace std;
int t,n,a[10001],x,s,l,f;
int main(){
    for(cin>>t;t--;cout<<endl){
        s=0;l=0;f=1;
        cin>>n>>x;
        for(int i=0;i<n;i++)cin>>a[i],l+=a[i];
        if(l==x)f=0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            s+=a[i];
            if(s==x){
                swap(a[i],a[i+1]);
                break;
            }
        }
        if(f){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        }
        else cout<<"NO";
    }
}
