#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
string s;
while(n--){
        int k=0;
    cin>>s;
    for(int i=s.find('1');i<s.rfind('1');i++){
        if(s[i]=='0')
            k++;
    }
    cout<<k<<endl;
    }
return 0;
}
