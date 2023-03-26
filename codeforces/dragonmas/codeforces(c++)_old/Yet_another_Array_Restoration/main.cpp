#include<bits/stdc++.h>
using namespace std;
void restore_array(int n,int x,int y){
    int i,j,l;
        l=y-x;
        for(i=1;i<=l;i++){if(l%i==0&&l/i<n)break;}
            int d=n-1-(l/i);
            for(j=x;d>0;d--)if(j-i>0)j-=i;
            for(int k=1;k<=n;k++)cout<<j<<" ",j+=i;
}
int main(){
    int t,n,x,y;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>x>>y;
        restore_array(n,x,y);
    }
}
