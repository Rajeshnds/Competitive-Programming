#include<bits/stdc++.h>
using namespace std;
int t,s,x;
main(){
cin>>t>>s>>x;
cout<<((x-t)%s<=2&&x!=t+1&&x>=t?"YES":"NO");
}
