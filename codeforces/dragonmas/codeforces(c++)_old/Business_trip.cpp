#include<bits/stdc++.h>
using namespace std;
int k;
main(){
cin>>k;if(k==0){cout<<0;return 0;}
vector<int>a(12);
for(int i=0;i<12;i++)cin>>a[i];
sort(a.rbegin(),a.rend());
for(int i=0;i<12;i++){
    k-=a[i];
    if(k<=0){cout<<i+1;return 0;}
}
cout<<-1;
}
