/**
 *   author: Vinzz34
**/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
#define ld long double
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define PB push_back
#define MP make_pair
#define fi first
#define se second
#define sz(a) int((a).size())
#define FOR(a,b,c) for(int a=b;a<(int)(c);a++)
#define MOD 1e9+7
#define EACH(x,a) for(auto& x : a)
#define VINZZ

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x,p,c,m;
  	cin>>x>>p>>c>>m;
	int y=x/3;
  	if(((float)p/y >= 0.5) && ((float)m/y >= 0.5) && ((float)c/y >= 0.01)){
	 	cout<<p+c+m<<endl;
  	}
  	else{
	  	if(((float)p/y>=0.1) && ((float)m/y>=0.1) && ((float)c/y>=0.1) && ((float)(p+c+m)/x >= 0.3)){
		  	cout<<p+c+m<<endl;
	  	}
		else{
		  	cout<<-1<<endl;
	  	}
  	}
	return 0;
}

