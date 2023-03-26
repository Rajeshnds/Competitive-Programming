#include<bits/stdc++.h>
using namespace std;
int t,r,b,d;
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>r>>b>>d;
        if(r>b)swap(r,b);
        int k=b%(d+1);
        int l=b/(d+1);
        if(l>r||(l==r&&k>0))cout<<"NO";
        else cout<<"YES";
    }
}
