#include<bits/stdc++.h>
using namespace std;
int t,n,a[200001];
int main(){
  cin>>t;
  while(t--){
      cin>>n;
      for(int i=1;i<=n;i++)cin>>a[i];
      while(k<=n){
          for(int i=1;i<=k;i++)d=d&a[i];
          for(int i=k+1;i<=n;i++)e=e&a[i];
          if(d==e)m++;
          k++;
      }
      cout<<m<<endl;
  }
}
