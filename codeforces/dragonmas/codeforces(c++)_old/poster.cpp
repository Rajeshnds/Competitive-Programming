#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
main(){
    cin>>n>>k>>s;
    if(k<=n/2){
    while(k>1)cout<<"LEFT"<<endl,k--;
    for(int i=0;i<n-1;i++)cout<<"PRINT "<<s[i]<<endl<<"RIGHT"<<endl;
    cout<<"PRINT "<<s[n-1];
    }
    else{
        k=n-k;
    while(k--)cout<<"RIGHT"<<endl;
    for(int i=n-1;i>0;i--)cout<<"PRINT "<<s[i]<<endl<<"LEFT"<<endl;
    cout<<"PRINT "<<s[0];
    }
}
