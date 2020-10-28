#include <bits/stdc++.h>

using namespace std;

int go(int i, int p){
	int ans = (i+p)%12;
	return ans;
}


int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	
	int t;
	cin>>t;

	while(t--){
		int i, p;
		cin>>i>>p;

		cout << go(i, p) << '\n';
	}


	return 0 ; 



}
