#include<bits/stdc++.h>
using namespace std;
int a,b,c;
main(){
cin>>a>>b>>c;
cout<<max(max(a,b),c)-min(min(a,b),c);
return 0;
}
