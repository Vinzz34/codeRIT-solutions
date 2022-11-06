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
	int x,i=1,sum=0;
	cin>>x;
	while(true){
		sum+=i;
		if(sum>x){
			if(((sum-x)%2!=0) && sum>x && (sum-x)>1){
				cout<<(sum-x)/2<<endl;
				break;
			}
		}
		i++;
	}
	return 0;
}

// 153 14 29 124
// 1275 25 51
