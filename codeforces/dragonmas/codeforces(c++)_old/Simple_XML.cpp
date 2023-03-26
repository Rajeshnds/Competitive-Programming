#include<bits/stdc++.h>
using namespace std;
string s;
int n;
void pattern(string s){
    for(int i=0;i<s.size();){
        if(s[i+1]!='/'){
            for(int j=0;j<n/2;j++)cout<<"  ";
            cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
            n+=2;
            i+=3;
        }
        else{
            n-=2;
            for(int j=0;j<n/2;j++)cout<<"  ";
            cout<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<<endl;
            i+=4;
        }
    }
}
int main(){
    cin>>s;
    pattern(s);
}
