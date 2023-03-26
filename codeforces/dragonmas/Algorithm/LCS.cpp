// dp method

// #include<bits/stdc++.h>
// using namespace std;
// string s,t;
// int dp[101][101];
// void solve(){
//     for(int i=0;i<=s.size();i++){
//         for(int j=0;j<=t.size();j++){
//             if(i==0||j==0)dp[i][j]=0;
//             else if(s[i-1]==t[j-1]){
//                 dp[i][j]=1+dp[i-1][j-1];
//             }
//             else{
//                 dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
//             }
//         }
//     }
//     string u="";
//     int i=s.size(),j=t.size();
//     while(i>0&&j>0){
//         if(s[i-1]==t[j-1])u=s[i-1]+u,i--,j--;
//         else if(dp[i][j-1]>dp[i-1][j])j--;
//         else i--;
//     }
//     cout<<"Length of longest common subsequencce is: "<<dp[s.size()][t.size()]<<endl;
//     cout<<"longest common subsequence is: "<<u;
// }
// int main(){
//     cout<<"Enter first string: ";
//     cin>>s;
//     cout<<"Enter second string: ";
//     cin>>t;
//     solve();
// }


// recursive method

// #include<bits/stdc++.h>
// using namespace std;
// string s,t;
// int lcs(int l,int r){
//     if(l+r==0)return 0;
//     else if(s[l-1]==t[r-1])return 1+lcs(l-1,r-1);
//     else return max(lcs(l,r-1),lcs(l-1,r));
// }
// int main(){
//     cout<<"Enter the first string: ";
//     cin>>s;
//     cout<<"Enter the second string: ";
//     cin>>t;
//     int l=s.size();
//     int r=t.size();
//     cout<<"Length of longest common subsequence is: "<<lcs(l,r);
// }

// dp method practice

#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
string s,t;
void solve(){
    for(int i=0;i<=s.size();i++){
        for(int j=0;j<=t.size();j++){
            if(i==0||j==0)dp[i][j]=0;
            else if(s[i-1]==t[j-1])dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    int i=s.size();
    int j=t.size();
    string u="";
    while(i>0&&j>0){
        if(s[i-1]==t[j-1])u=s[i-1]+u,i--,j--;
        else if(dp[i][j-1]>dp[i-1][j])j--;
        else i--;
    }
    cout<<"Length of longest common substring is: "<<dp[s.size()][t.size()]<<endl;
    cout<<"Longest common substring is: "<<u;
}
int main(){
    cout<<"Enter first string: ";
    cin>>s;
    cout<<"Enter second string: ";
    cin>>t;
    solve();
}