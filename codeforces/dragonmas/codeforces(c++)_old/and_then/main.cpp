#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        int k=1,l=0;
        while(k<n)k*=2,l++;
        if(k>=n)l--;
        if(n==2)cout<<1<<endl;
        else cout<<(1<<l)-1<<endl;
    }
}
