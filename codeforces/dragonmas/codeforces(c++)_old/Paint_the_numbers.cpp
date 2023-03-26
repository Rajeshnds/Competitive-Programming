#include<bits/stdc++.h>
using namespace std;
int n,a,k,b[107];
main(){
for(cin>>n;n--;)cin>>a,b[a]++;
for(int i=1;i<101;i++){
    if(b[i]){k++;
      for(int j=i;j<101;j+=i)b[j]=0;
}
}
cout<<k;
}
