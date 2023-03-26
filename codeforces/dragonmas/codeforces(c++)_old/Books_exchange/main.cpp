#include<bits/stdc++.h>
using namespace std;
int q,n,x;
int main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n;
        vector<int>v1(n+1),v2(n+1,1);
        for(int i=1;i<=n;i++)cin>>v1[i];
        for(int i=1;i<=n;i++){
            if(v2[i]==1){
                for(x=v1[i];x!=i;x=v1[x])v2[i]++;
                for(x=v1[i];x!=i;x=v1[x])v2[x]=v2[i];
            }
        }
        for(int i=1;i<=n;i++)cout<<v2[i]<<" ";
    }
}
