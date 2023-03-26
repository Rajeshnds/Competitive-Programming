#include<bits/stdc++.h>
using namespace std;
int n,a,b,k;
int no_of_bottles(){
    cin>>n>>a>>b;
    for(int i=0;i*a<=n;i++)if((n-i*a)%b==0)return cout<<"YES"<<endl<<i<<" "<<(n-i*a)/b,0;
    cout<<"NO";
}
int main(){
    no_of_bottles();
}
