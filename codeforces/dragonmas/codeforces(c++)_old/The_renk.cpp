#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,a,b,c,d,l=1,v[1001];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a>>b>>c>>d;
    v[i]=a+b+c+d;
    if(v[0]<v[i])
    l++;
}
    cout<<l;
    return 0;
}
