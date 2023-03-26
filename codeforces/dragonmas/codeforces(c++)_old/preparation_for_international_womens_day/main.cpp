#include<bits/stdc++.h>
using namespace std;
int boxes,girls,candies[100],k;
void read(){
    int b=0;
    cin>>boxes>>girls;
    for(int i=0;i<boxes;i++){
        cin>>b;
        if(b%girls==0)k++;
        else{
            candies[b%girls]++;
        }
    }
}
void solve(){
    for(int i=1;i<=girls/2;i++){
        if(i==girls/2&&i==(girls+1)/2)
            k+=(candies[i]-(candies[i]%2));
        else
            k+=(min(candies[i],candies[girls-i])*2);
    }
    cout<<k-(k%2);
}
int main(){
    read();
    solve();
}
