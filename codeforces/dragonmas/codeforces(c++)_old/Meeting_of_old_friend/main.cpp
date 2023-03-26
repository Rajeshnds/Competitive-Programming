#include<bits/stdc++.h>
using namespace std;
long long l1,r1,l2,r2,k;
long long meeting_time(){
    cin>>l1>>r1>>l2>>r2>>k;
    l1=max(l1,l2);
    r1=min(r1,r2);
    return l1<=r1?r1-l1+1-(k>=l1&&k<=r1):0;
}
int main(){
    cout<<meeting_time();
}
