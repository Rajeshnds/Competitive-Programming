#include<bits/stdc++.h>
using namespace std;
int n,a;
set<int> s;
main(){
cin>>n;
for(int i=0;i<n;i++){cin>>a;if(a!=0)s.insert(a);}cout<<s.size();
}
