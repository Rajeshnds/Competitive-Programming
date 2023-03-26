#include<bits/stdc++.h>
using namespace std;
int n,a,j,k;
main(){
for(cin>>n;n--;)cin>>a,a&1?j++:k++;
cout<<(j&1?j:k);
}
