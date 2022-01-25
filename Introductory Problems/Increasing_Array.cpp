#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	ll sum=0,max_val=0;
	ll temp; 
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp>max_val){
			max_val=temp;
		}
		sum+=max_val-temp; // cost to make the current element equal to maximum on its left.
	}
	cout<<sum;
	return 0;
 
}
