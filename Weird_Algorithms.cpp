#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n; // length of array
	vector<ll> arr;
	while(true){
		arr.push_back(n);
		if(n==1) break;
		else if(n%2==0) n=n/2; // devide n by 2 if n is even else multiply by 3 and add 1
		else n=3*n+1;
	}
	for(auto i:arr){
		cout<<i<<' '; // print all the numbers recieved
	}
 
	return 0;
 
}
