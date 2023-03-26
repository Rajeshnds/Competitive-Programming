#include<iostream>
using namespace std;
int main(){
int n,m,a,b,v[101]={0},k=0;
cin>>n>>m;
for(int i=0;i<n;i++){
    cin>>a>>b;
    for(int j=a;j<=b;j++){
        if(v[j]==0)
            k++;
        v[j]=1;
    }
}
cout<<m-k<<endl;
for(int i=1;i<=m;i++)
    if(v[i]==0)
    cout<<i<<" ";
return 0;
}
