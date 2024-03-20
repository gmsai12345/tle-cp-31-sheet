/* Sai Dhakshan Y(RajniKanth) Author*/
#include "bits/stdc++.h"
using namespace std;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rf(i, n) for (int i = n - 1; i >= 0; i--)
#define ffr(j,m) for(int i=0; i<(m); i++)
#define rfs(i, n, k) for (int i = n - 1; i >= 0; i -= k)
#define frs(i, n, k) for (int i = 0; i < n; i += k)
#define rep(i,a,n) for(int i=(a); i<(n); i++)
#define endl "\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define rsrt(A) std::sort(A.rbegin(), A.rend());
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define rev(v)  reverse(v.begin(),v.end())         // sort 
#define bin(x,y)  bitset<y>(x) 
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// using namespace __gnu_pbds; //pbds A; // declaration
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
void readv(vector<int> &v, int n){ for(int i=0; i<n; i++){ int x; cin>>x; v.push_back(x); } }
void readm(vector<vector<int>> &v, int n, int m){ for(int i=0; i<n; i++){ vector<int> row; for(int j=0; j<m; j++){ int x; cin>>x; row.push_back(x); } v.push_back(row); } }
void printm(vector<vector<int>> &v){ for(int i=0; i<v.size(); i++){ for(int j=0; j<v[i].size(); j++){ cout << v[i][j]<<" ";}cout <<endl; } }

int32_t main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> q;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            ++q[x];
        }
        int am = 0;
        for (auto &[x, y] : q) {
            am = max(am, y);
        }
        int ans = 0;
        while (am < n) {
            int d = min(n - am, am);
            ans += 1 + d;
            am += d;
        }
        cout << ans << '\n';
    }
    return 0;
}

    