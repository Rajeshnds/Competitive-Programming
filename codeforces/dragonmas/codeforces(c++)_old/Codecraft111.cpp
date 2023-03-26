#include<bits/stdc++.h>
using namespace std;
string s[12]={"January","February","March","April","May","June","July","August","September","October","November","December"},t;
int n,k;
main(){
    cin>>t>>n;
    for(int i=0;i<12;i++)if(s[i]==t)k=i;
    cout<<s[(k+n)%12];
}
