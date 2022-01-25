#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(int argc, char const *argv[])
{
	ll n; // length of array
	cin>>n;
	ll sum=0;
	ll temp;
	for(int i=1;i<(int)n;i++){ // take input of n-1 numbers.
		cin>>temp;
		sum+=temp;  // add all elements to sum
	}
	cout<<(n*(n+1))/2-sum; // finding missing number by: subtract recieved sum from expected sum with missing number.
 
	return 0;
 
}
