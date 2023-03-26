// #include<bits/stdc++.h>
// using namespace std;
// # define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// # define ll long long
// const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
// ll n,m,x,y,k,ans,sum,a[N],b[N];
// vector<vector<ll>>v;
// string s,t;
// void solve(){
//     int n=s.size();
//     s='.'+s;
//     int j=0;
//     vector<int>count(n+1,0);
//     for(int i=2;i<=n;i++){
//         while(j&&s[i]!=s[j+1])j=count[j];
//         if(s[i]==s[j+1])j++;
//         count[i]=j;
//     }
//     int num=0;
//     for(int i=2;i<n;i++){
//         num=max(num,count[i]);
//     }
//     int last_count=count[n];
//     while(last_count>num)last_count=count[last_count];
//     if(last_count){
//         for(int i=1;i<=last_count;i++)cout<<s[i];
//     }
//     else{
//         cout<<"Just a legend";
//     }
// }
// void read_file(){
//     freopen("traffic.in","r",stdin);
//     freopen("traffic.out","w",stdout);
// }
// int main(){
//     // read_file();
//     fast;
//     // for(cin>>_T;_T--;cout<<endl)
//     cin>>s;


//     ///
//     solve();
// }


#include <bits/stdc++.h>

using namespace std;

int countSubarrWithEqualZeroAndOne(int arr[], int n)
{
	unordered_map<int, int> mp;
	int sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		// Replacing 0's in array with -1
		if (arr[i] == 0)
			arr[i] = -1;

		sum += arr[i];

		// If sum = 0, it implies number of 0's and 1's are
		// equal from arr[0]..arr[i]
		if (sum == 0)
			count++;

		//if mp[sum] exists then add "frequency-1" to count
		if (mp[sum])
			count += mp[sum];
	
		//if frequency of "sum" is zero then we initialize that frequency to 1
		//if its not 0, we increment it
		if (mp[sum] == 0)
			mp[sum] = 1;
		else
			mp[sum]++;
	}
	return count;
}

int main()
{
	int arr[] = { 1, 0, 0, 1, 0, 1, 1 };

	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "count="
		<< countSubarrWithEqualZeroAndOne(arr, n);
}
