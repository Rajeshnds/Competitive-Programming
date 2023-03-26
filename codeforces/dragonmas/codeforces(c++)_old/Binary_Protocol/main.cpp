#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
void decode_numbers(){
    cin>>n>>s;
    for(int i=0;i<n;i++){
        k=0;
        if(s[i]=='0')cout<<0;
        else{
            while(s[i]!='0'&&i<n)k++,i++;
            cout<<k;
        }
    }
    if(s[n-1]=='0')cout<<0;
}
int main(){
    decode_numbers();
}
