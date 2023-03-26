#include<bits/stdc++.h>
using namespace std;
long long l,r;
void pairs(){
    cin>>l>>r;
    if(l%2)l++;
    if(r-l>=2)cout<<l<<" "<<l+1<<" "<<l+2;
    else cout<<-1;
}
int main(){
    pairs();
}
