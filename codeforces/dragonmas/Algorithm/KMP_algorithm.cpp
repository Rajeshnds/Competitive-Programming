// codeforces
// https://codeforces.com/contest/126/problem/B


#include<bits/stdc++.h>
using namespace std;
bool mark[1000010];
int f[1000010],k=0;
string s;
void KMP(){
    // to find longest prefix matching a string
    cin>>s;
	int n=s.size();
	for (int i=1;i<n;i++)
	{
		while (k&&s[i]!=s[k]) k=f[k-1];
		if (s[i]==s[k]) k++;
		if (i<n-1) mark[k]=true;
		f[i]=k;
	}
	mark[0]=true,k=f[n-1];
	while (k&&!mark[k]) k=f[k-1];
	if (k) cout<<s.substr(0,k);
	else printf("Just a legend\n");
    return 0;   
}
int main()
{
    ;;;;;
	cin>>s;
	int n=s.size();
	for (int i=1;i<n;i++)
	{
		while (k&&s[i]!=s[k]) k=f[k-1];
		if (s[i]==s[k]) k++;
		if (i<n-1) mark[k]=true;
		f[i]=k;
	}
	mark[0]=true,k=f[n-1];
	while (k&&!mark[k]) k=f[k-1];
	if (k) cout<<s.substr(0,k);
	else printf("Just a legend\n");
    return 0;	
}
