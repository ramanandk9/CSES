#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	vector<ll> arr;
	ll sum=(n*(n+1))/2;
	ll temp=0;
	if(sum%2==1) cout<<"NO";
	else{
		cout<<"YES"<<endl;
		sum=sum/2;
		for(ll i=n;i>0;i--){
			if(temp+i<=sum) {
				arr.push_back(i);
				temp+=i;
			}
		}
		sort(arr.begin(),arr.end());
		cout<<arr.size()<<endl;
		for(auto i:arr) cout<<i<<' ';
		cout<<endl;
		cout<<n-arr.size()<<endl;
		ll j=0;
		for(ll i=1;i<n;i++){
			if(j<arr.size() && arr[j]==i) j++;
			else{
				cout<<i<<' ';
			}
		}
	}
		
 
	return 0;
}
