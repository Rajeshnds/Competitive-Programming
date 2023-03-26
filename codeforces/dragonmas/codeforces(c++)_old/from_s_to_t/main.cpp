#include<bits/stdc++.h>
using namespace std;
int q;
string s,t,p;
int main(){
    cin>>q;
        stop:
        while(q--){
            int i=0,k=0;
            int a[128]={0};
        cin>>s>>t>>p;
        for(char c:p)a[c]++;
        for(char c:t){
            if(s[i]!=c)a[c]--,k++;
            else i++;
            if(a[c]<0){cout<<"NO"<<endl;goto stop;}
        }
        if(s.size()+k==t.size())cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
