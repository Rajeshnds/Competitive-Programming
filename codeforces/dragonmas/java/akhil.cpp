#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    string s;
    int flag[200005],count,f[200005];
    cin>>t;
    while(t--){
        count=0;
        string s1="";
        cin>>n>>k>>s;
        fill(flag,flag+n,0);
        fill(f,f+n,0);
            for(int j=0;j<n;j++){
                if(s[j]=='0'){
                    flag[j]=1;
                    count++;
                }
            }
            if(k%2==0){
                for(int j=0;j<n;j++){
                    if(s[j]=='0'){
                        if(k>0) {
                            k--;
                            // s1 = s1 + "1";
                            s[j]='1';
                            f[j]++;
                        }
                        else{
                            // s1=s1+"0";
                            s[j]='0';
                        }
                    }
                    else{
                        // s1=s1+"1";
                        s[j]='1';
                    }
                }
                if(k>0){
                    f[n-1]=f[n-1]+k;
                    if(k%2!=0){
                        // s1.erase(n-1,1);
                        // s1=s1.substring(0,n-1);
                        s[n-1]='0';
                    }
                }
            }
            else{
                for(int j=0;j<n;j++){
                    if(s[j]=='1'){
                        if(k>0){
                            k--;
                            // s1=s1+"1";
                            s[j]='1';
                            f[j]++;
                        }
                        else{
                            // s1=s1+"0";
                            s[j]='0';
                        }
                    }
                    else{
                        // s1=s1+"1";
                        s[j]='1';
                    }
                }
                if(k>0){
                    f[n-1]=f[n-1]+k;
                    if(k%2!=0){
                        // s1.erase(n-1,1);
                        // s1=s1.substring(0,n-1);
                        s[n-1]='0';
                    }
                }
            }
            cout<<s<<endl;
            for(int i=0;i<n;i++)cout<<f[i]<<" ";
            cout<<endl;
        }
    }
            