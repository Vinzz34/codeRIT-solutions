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
    ll n;
    cin>>n;
    if(n%3==0){
        cout<<(n/3)*2<<endl;
    }
    else{
        n=n/3;
        n*=2;
        cout<<++n<<endl;
    }
    return 0;
}
