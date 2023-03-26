#include<bits/stdc++.h>
using namespace std;
int t,n,k;
char c;
int main(){
   for(cin>>t;t--;){
       cin>>n>>k;
       int s=k,d=0;
       for(int i=0;i<n;i++){
           cin>>c;
           if(c=='0')s++;
           else{
               s-=k;
               d+=s/(k+1);
               s=0;
           }
       }
       cout<<d+s/(k+1)<<endl;
   }
}
