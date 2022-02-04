#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define map_it(it) map<int , vi > :: iterator it;
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin>>s;
        int minn = 0 ;
        
        for(int i = 0 ; i<(n/2) ;i++ ){
            if(s[i] != s[n-1-i]){
                minn++;
            }
            
        }
        if(minn==k or n%2==1 or (n%2==0 and (k-minn)%2==0) ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}