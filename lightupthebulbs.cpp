#include <bits/stdc++.h>

using namespace std;
long long go(long long* arr, long long n, long long x ,long long y){
	long long breaks = 0;
	if (arr[0]==0)
	{
		breaks++;
	}
	for (long long i = 0; i < n-1; ++i)
	{
		// cout <<arr[i]  << '\n';
		// cout << arr[i+1] << '\n';
		if (arr[i+1] == 0 && arr[i] == 1)
		{
			breaks++;
		}
	}

	//cout << breaks << '\n';
	if (breaks == 0)
	{
		return 0;
	}
	long long operation = breaks-1;

	long long ans = operation*min(x,y)+y;
	return ans;
}

int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	
	long long n, x, y;
	cin>>n>>x>>y;
	
	string str;
	cin>>str;


	long long* arr = new long long[n];

	for (long long i = 0; i < n; ++i)
	{
		arr[i] = str[i]-'0';
	}

	cout << go(arr, n, x, y) << '\n';

	delete [] arr;

	return 0 ; 



}
