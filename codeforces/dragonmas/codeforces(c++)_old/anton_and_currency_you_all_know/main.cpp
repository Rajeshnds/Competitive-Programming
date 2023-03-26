#include<bits/stdc++.h>
using namespace std;
string s;
int k,l=-1,f;
int main(){
   cin>>s;
   for(int i=s.size()-1;i>=0;i--){
       k=s[i]-48;
       if(k%2==0){
           if(l!=-1){
               if(k<(s[s.size()-1]-48))l=k,f=i;
           }
           else l=k,f=i;
       }
   }
       if(l!=-1){
       swap(s[f],s[s.size()-1]);
       cout<<s;
       }
       else{
           cout<<-1;
       }
}
