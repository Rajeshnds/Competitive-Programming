#include<bits/stdc++.h>
using namespace std;
int a,n,k,j;
queue<int>q1,q2;
int main(){
    cin>>n>>k;
    n=107;
    for(int i=0;i<k;i++)cin>>a,q1.push(a);
    cin>>k;
    for(int i=0;i<k;i++)cin>>a,q2.push(a);
    for(;!q1.empty()&&!q2.empty()&&n--;j++){
        if(q1.front()>q2.front()){
            q1.push(q2.front());
            q1.push(q1.front());
        }
        else{
            q2.push(q1.front());
            q2.push(q2.front());
        }
        q1.pop();
        q2.pop();
    }
    n+1?cout<<j<<" "<<(q1.empty()?2:1):cout<<n;
}