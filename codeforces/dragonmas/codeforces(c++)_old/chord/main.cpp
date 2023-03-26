#include<bits/stdc++.h>
using namespace std;
string s[12]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
int main(){
    int x[12]={0};
    string a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<12;i++)if(s[i]==a||s[i]==b||s[i]==c)x[i]=1;
    for(int i=0;i<12;i++){
        if(x[i]){
            if(x[(i+4)%12]&&x[(i+7)%12])return cout<<"major",0;
            if(x[(i+3)%12]&&x[(i+7)%12])return cout<<"minor",0;
        }
    }
    cout<<"strange";
}
