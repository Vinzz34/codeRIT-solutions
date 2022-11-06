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
	int t;
	cin>>t;
	while(t--){
		int n,mx=0;
		cin>>n;
		int a[n];
		FOR(i,0,n){
			cin>>a[i];
			if(a[i]==30){
				mx=a[i];
			}
		}
		vi b,d;
		int c=0;
		FOR(i,0,n){
			if(a[i]==-1){
				if(c==0){
					d.PB(i);
				}
				c++;
			}
			else{
				if(c>0){
					b.PB(c);
					c=0;
				}
			}
		}
		b.PB(c);
		for(int i=0;i<sz(d);i++){
			for(int j=d[i]-1;j>=d[i]-b[i];j--){
				a[j]=-1;
			}
		}
		FOR(i,0,n){
			mx=max(mx,a[i]);
		}
		cout<<mx<<endl;
	}
	return 0;
}
