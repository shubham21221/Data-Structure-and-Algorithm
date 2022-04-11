#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define vll vector<ll>
#define vii vector<int>
#define vvll vector< vll >
#define pll pair<ll ,ll >
#define MOD 1000000007
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
#define mpr make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
#define lint long long int
#define all(v) v.begin(),v.end()
#define scd second
#define rep(i,a,b) for(int i=a; i<b; i++)
#define for1(i,n) for(ll (i) = 1 ; (i) <= (n) ; ++(i))
#define forr(i,n) for(ll (i) = (n)-1 ; (i)>=0 ; --(i))
#define forn(i,n) for(ll (i) = 0 ; (i) < (n) ; ++(i))
#define forab(i,a,b,c) for(ll (i) = a ; (i) <= (b) ; (i)+=(c))
#define mst(A) memset( (A) , 0 , sizeof(A) );
#define tc() int t; cin >> t ; while (t--)
#define sp swap(arr(s),arr(e))
#define sortarr sort(arr,arr+n)
#define sortv sort(v.begin(),a.end())
#define re reverse(s.begin(),s.end())
#define mp map<pair<int,int> m
#define unmp unordered_map<pair<int,int> mp
using namespace std;
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    vector<int> subarraySum(int arr[], int n, long long s){
       vector<int> ans;
       long long sum=0;
       long long a=0;
       long long b=0;    

       while(a<=n){    
           if(sum==s){
              ans.push_back(a+1);
              ans.push_back(b);
              return ans;
           }
          if(sum<s){
              sum=sum+arr[b];
              b++;
          }
           if(sum>s){
               sum=sum-arr[a];
               a++;
           }
       }
       ans.push_back(-1);
       return ans;
    }
    
 
};
int main() {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
	return 0;
}  