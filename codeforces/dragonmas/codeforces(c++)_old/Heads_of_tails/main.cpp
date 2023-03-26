#include<bits/stdc++.h>
using namespace std;
int x,y,a,b,k;
void possible_outcome(){
    cin>>x>>y>>a>>b;
    for(int i=a;i<=x;i++)for(int j=b;j<=y;j++)if(i>j)k++;
    cout<<k<<endl;
    for(int i=a;i<=x;i++)for(int j=b;j<=y;j++)if(i>j)cout<<i<<" "<<j<<endl;
}
int main(){
    possible_outcome();
}
