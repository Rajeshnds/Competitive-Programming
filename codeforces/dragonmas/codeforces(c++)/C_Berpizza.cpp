#include<bits/stdc++.h>
using namespace std;
int q,j=1,k=1,a,b,c[500001];
priority_queue<pair<int,int>>pq;
void solve(){
    while(q--){
        cin>>a;
        if(a==1){
            cin>>b;
            pq.push({b,-j});
            j++;
        }
        else if(a==2){
            while(c[k])k++;
            cout<<k<<" ";
            c[k++]=1;
        }
        else{
            while(c[-pq.top().second])pq.pop();
            cout<<-pq.top().second<<" ";
            c[-pq.top().second]=1;
        }
    }
}
int main(){
    cin>>q;
    solve();
}