#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll l,r,k,t,i,f;
string s;
ll lucky_sum(){
  cin>>l>>r;
  for(i=l;i<=r;i++){
      f=1;
      s=to_string(i);
      for(int j=0;j<s.size();j++)if(s[j]!='4'&&s[j]!='7')f=0;
      if(f==0)k++;
      else if(f==1)t+=(k+1)*i,k=0;
  }
  if(f==0){
      l=0;
      while(l==0){
          f=1;
          s=to_string(i);
          for(int j=0;j<s.size();j++){
              if(s[j]!='4'&&s[j]!='7')f=0,i++;
          }
          if(f)return t+k*i;
      }
  }
  return t;
}
int main(){
    cout<<lucky_sum();
}
