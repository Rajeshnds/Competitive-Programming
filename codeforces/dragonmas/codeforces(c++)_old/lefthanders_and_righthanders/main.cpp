#include<bits/stdc++.h>
using namespace std;
int n,b[101],k;
string s;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>s;
    for(int i=n/2-1;i>=0;i--){
        if(s[i]=='L'){
            cout<<i+1<<" "<<n-k<<endl;
        }
        else{
            cout<<n-k<<" "<<i+1
               <<endl;
        }
        k++;
    }
}
