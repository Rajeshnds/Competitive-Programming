#include<bits/stdc++.h>
using namespace std;
int t,n,k,m;
string s;
int no_of_ways(){
    k=0;m=0;
    cin>>n>>s;
    if(s.find('<')==-1||s.find('>')==-1)return n;
    else{
        for(int i=0;i<n;i++){
                if(s[i]=='-')k++;
                else if(k)m+=k+1,k=0;
        }
        if(k)m+=k+1;
        return m-(s[0]=='-'&&s[n-1]=='-');
    }
}
int main(){
    for(cin>>t;t--;)cout<<no_of_ways()<<endl;
}
