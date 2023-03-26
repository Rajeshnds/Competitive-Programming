#include<bits/stdc++.h>
using namespace std;
int n,a,b;
void shuffle(int &n,int a,int b){
   if(n==a)n=b;else if(n==b)n=a;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    for(int i=0;i<3;i++)cin>>a>>b,shuffle(n,a,b);
    cout<<n;
}

