#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
    cin>>n;
    for(int i=0;i<n;i++,cout<<endl){
        int l=0,k=0;
        cin>>s;
        set<char>st;
        for(int i=0;i<s.size();i++)st.insert(s[i]);
        if(st.size()==1){
            for(auto i :st){
                if(i=='a')cout<<"NO";
                else cout<<"YES"<<endl<<s+'a';
        }
        }
        else{
            cout<<"YES"<<endl;
            string t=s;
            reverse(t.begin(),t.end());
            if(s==t){
                s+='a';
                cout<<s;
            }
            else{
                for(int i=0;i<s.size();i++){
                    if(s[i]=='a')k++;
                    else break;
                }
                for(int i=s.size()-1;i>=0;i--){
                    if(s[i]=='a')l++;
                    else break;
                }
                if(k>l)s='a'+s,cout<<s;
                else s+='a',cout<<s;
            }

        }

    }
}
