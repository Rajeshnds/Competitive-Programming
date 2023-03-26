#include<bits/stdc++.h>
using namespace std;
int n;
void read(){
    cin>>n;
}
void solve(){
    string s="VIBGYOR";
    for(int i=1;i<=n/7;i++)cout<<s;
    if(n%7<=3){
        int k=n%7+3;
         for(int i=3;i<k;i++)cout<<s[i];
    }
    else{
        for(int i=0;i<n%7;i++)cout<<s[i];
    }

}
int main(){
    read();
    solve();
}
