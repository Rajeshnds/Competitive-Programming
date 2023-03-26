#include<bits/stdc++.h>
using namespace std;
int n;
void chess(int n){
    cout<<(n+2)/2<<endl;
    for(int i=1;i<=n;i++)cout<<(i+1)/2<<" "<<i/2+1<<endl;
}
int main(){
    cin>>n;chess(n);
}
