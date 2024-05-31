// /* Sai Dhakshan Y(RajniKanth) Author*/
// #include <algorithm>
// #include <bitset>
// #include <complex>
// #include <deque>
// #include <exception>
// #include <fstream>
// #include <functional>
// #include <iomanip>
// #include <ios>
// #include <iosfwd>
// #include <iostream>
// #include <istream>
// #include <iterator>
// #include <limits>
// #include <list>
// #include <locale>
// #include <map>
// #include <memory>
// #include <new>
// #include <numeric>
// #include <ostream>
// #include <queue>
// #include <set>
// #include <sstream>
// #include <stack>
// #include <stdexcept>
// #include <streambuf>
// #include <string>
// #include <typeinfo>
// #include <utility>
// #include <valarray>
// #include <vector>
// #include <array>
// #include <atomic>
// #include <chrono>
// #include <condition_variable>
// #include <forward_list>
// #include <future>
// #include <initializer_list>
// #include <mutex>
// #include <random>
// #include <ratio>
// #include <regex>
// #include <scoped_allocator>
// #include <system_error>
// #include <thread>
// #include <tuple>
// #include <typeindex>
// #include <type_traits>
// #include <unordered_map>
// #include <unordered_set>
// using namespace std;
// // #include<ext/pb_ds/assoc_container.hpp>
// // #include<ext/pb_ds/tree_policy.hpp>
// // hi sg
// #define int long long
// #define uint unsigned long long
// #define vi vector<int>
// #define vvi vector<vi >
// #define vb vector<bool>
// #define vvb vector<vb >
// #define fr(i,n) for(int i=0; i<(n); i++)
// #define rf(i, n) for (int i = n - 1; i >= 0; i--)
// #define ffr(j,m) for(int i=0; i<(m); i++)
// #define rfs(i, n, k) for (int i = n - 1; i >= 0; i -= k)
// #define frs(i, n, k) for (int i = 0; i < n; i += k)
// #define rep(i,a,n) for(int i=(a); i<(n); i++)
// #define endl "\n"
// #define dbg(var) cout<<#var<<"="<<var<<" "
// #define all(v) v.begin(),v.end()
// #define sz(v) (int)(v.size())
// #define srt(v)  sort(v.begin(),v.end())         // sort 
// #define rsrt(A) std::sort(A.rbegin(), A.rend());
// #define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
// #define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
// #define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// // make sure to sort before applying unique // else only consecutive duplicates would be removed 
// #define rev(v)  reverse(v.begin(),v.end())         // sort 
// #define bin(x,y)  bitset<y>(x) 
// int MOD=1e9+7;      // Hardcoded, directly change from here for functions!
// void _print(int t) {cout << t;}
// void _print(string t) {cout << t;}
// void _print(char t) {cout << t;}
// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}
// template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
// template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
// template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
// template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
// void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
// void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
// void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// // using namespace __gnu_pbds; //pbds A; // declaration
// // typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
// void readv(vector<int> &v, int n){ for(int i=0; i<n; i++){ int x; cin>>x; v.push_back(x); } }
// void readm(vector<vector<int>> &v, int n, int m){ for(int i=0; i<n; i++){ vector<int> row; for(int j=0; j<m; j++){ int x; cin>>x; row.push_back(x); } v.push_back(row); } }
// void printm(vector<vector<int>> &v){ for(int i=0; i<v.size(); i++){ for(int j=0; j<v[i].size(); j++){ cout << v[i][j]<<" ";}cout <<endl; } }
// int pick(vector<int>& v1, vector<int>& v2, int n,int a) {
//     int mini = INT_MAX;
//     int minindex = -1;

//     for (int i = 0; i < n; i++) {
//         int diff = abs(v1[i] - v2[n]);
//         if (diff <= mini) {
//             mini = diff;
//             minindex = i;
//         }
//     }
//     if(abs(a-v2[n])<abs(v1[minindex]-v2[n]))
//     {
//         return a;
//     }
//     else
//     {
//         return v1[minindex];
//     }
//     return 0;
// }
// void solve(){
//    int n;
//    cin >> n;
//    vector<int>v1;
//    vector<int>v2;
//    readv(v1,n);
//    readv(v2,n+1);
//  //  _print(v1);
//    //_print(v2);
//    int cnt=0;
//    int a=pick(v1,v2,n,a);
//    for(int i=0;i<n;i++)
//    {
//      a=pick(v1,v2,n,a);
//      if(v1[i]-v2[i]>0)
//      {
//         cnt += abs(v1[i]-v2[i]);
//         v1[i] = v2[i];
//         a=pick(v1,v2,n,a);
//      //   cout << cnt<<endl;
//       //  cout <<cnt<<endl;
//      }
//      else if(v1[i]-v2[i]<0)
//      {
//         cnt += abs(v1[i]-v2[i]);
//         v1[i] = v2[i];
//         a=pick(v1,v2,n,a);
//       //  cout <<cnt<<endl;
//         //cout <<cnt<<endl;
//      }
//    }
//     a=pick(v1,v2,n,a);
//     v1[n] = a;
//     cnt++;
//     cnt += abs(a-v2[n]);
//     cout << cnt<<endl;
// }

// int32_t main()
// {
//  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);

//     int T = 1;
//     cin >> T;
//     while (T--)
//     {
//         solve();
//     }
//     return 0;
// }

    
    #include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <cstdint>
using namespace std;

#define int long long
#define vi vector<int>
#define readv(v, n) for(int i = 0; i < n; i++) { int x; cin >> x; v.push_back(x); }

int pick(const vector<int>& v1, const vector<int>& v2, int n, int a) {
    int mini = LLONG_MAX;
    int minindex = -1;

    for (int i = 0; i < n; i++) {
        int diff = abs(v1[i] - v2[n]);
        if (diff <= mini) {
            mini = diff;
            minindex = i;
        }
    }
    if (abs(a - v2[n]) < abs(v1[minindex] - v2[n])) {
        return a;
    } else {
        return v1[minindex];
    }
}

void solve() {
    int n;
    cin >> n;
    vi v1;
    vi v2;
    readv(v1, n);
    readv(v2, n + 1);

    int cnt = 0;
    int a = v1[0]; // Initialize `a` with the first element of v1
    a = pick(v1, v2, n, a);
    for (int i = 0; i < n; i++) {
        a = pick(v1, v2, n, a);
        cnt += abs(v1[i] - v2[i]);
        v1[i] = v2[i];
    }

    a = pick(v1, v2, n, a);
    v1.push_back(a); // Use push_back to add element to the end of v1
    cnt++;
    cnt += abs(a - v2[n]);

    cout << cnt << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
