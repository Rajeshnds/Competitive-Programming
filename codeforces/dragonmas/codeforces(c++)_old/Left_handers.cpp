#include<bits/stdc++.h>
using namespace std;
int l,r,a,i,j,k;
main(){
cin>>l>>r>>a;
i=min(l,r);
j=abs(l-r);
    i+=min(a,j);
    a-=min(a,j);
    cout<<(a>=0&&a%2==0?2*i+a:2*i+a-1);
}
