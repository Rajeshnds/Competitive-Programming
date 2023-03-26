#include<bits/stdc++.h>
using namespace std;
int t,n,k;
main(){
for(cin>>t;t--;){
    cin>>n>>k;
    for(int i=0;i<n;i++)cout<<char(i%k+'a');cout<<endl;
}
}
