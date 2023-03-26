#include<bits/stdc++.h>
using namespace std;
int n,k,a[101],j,m,l=101;
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m=max(m,a[i]);
        l=min(l,a[i]);
    }
    if(m>l+k)cout<<"NO";
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++,cout<<endl){
            j=1;
            while(a[i]--){
                cout<<j++<<" ";
                if(j>k)j=1;
            }
        }
    }
}