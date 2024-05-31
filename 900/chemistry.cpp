/* Sai Dhakshan Y(Rajinikanth) Author*/
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define pb push_back
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!
bool findSubarraySum(const vector<int>& v, int k) { unordered_set<int> prefixSums; int sum = 0; for (int num : v) if ((sum += num) == k || prefixSums.count(sum - k)) return true, prefixSums.insert(sum), false; return false; }
void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
void solve(){
    int n,k;
    cin >> n>>k;
    
   // cout << n << k;
    string s;
    cin >> s;
   // cout <<s;
   if(n==1)
    {
        cout <<"YES"<<endl;
    }
    else if((n-k)%2==0)
    {
        map<char,int>map;
        fr(i,n)
        {
           map[s[i]]++;
        }
        int oddc=0;
        for(auto i:map)
        {
            if(i.second%2!=0)
            {
                oddc++;
            }
        }
        if(k<oddc)
        {
            cout << "NO"<<endl;
        }
        else if(oddc==k)
        {
            cout << "YES"<<endl;
        }
        else
        {
            // k > oddc
            k = k-oddc;
            if(k%2==0)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
           // cout <<endl;
        }
    }
    else
    {
        map<char,int>map;
        fr(i,n)
        {
           map[s[i]]++;
        }
        int oddc=0;
        for(auto i:map)
        {
            if(i.second%2!=0)
            {
                oddc++;
            }
        }
        if(k<(oddc-1))
        {
            cout << "NO"<<endl;
        }
        else if((oddc-1)==k)
        {
            cout << "YES"<<endl;
        }
        else
        {
            // k > oddc
            k = k-oddc-1;
            if(k%2==0)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
           // cout <<endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T =1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

        // map<char,int> map;
        // fr(i,n)
        // {
        //     // if even length palindrome occurences must be even 
        //     map[s[i]]++;
        // }
        // int i =0;
        // while(k!=0||i<n)
        // {
        //     if(map[s[i]]%2!=0)
        //     {
        //         map[s[i]]--;
        //         k--;
        //     }
        //     i++;
        // }
        // if(k!=0) // means all odd occurences elements has been erased
        // {
        //     if(k%2==0)
        //     {
        //         cout << "YES"<<endl;
        //     }
        //     else
        //     {
        //         cout << "NO"<<endl;
        //     }
        // }
        // else
        // {
        //     int flag = 1;
        //     fr(i,n)
        //     {
        //         if(map[s[i]]%2!=0)
        //         {
        //             flag=0;
        //             break;
        //         }
        //     }
        //     if(flag==1) cout << "YES"<<endl;
        //     else cout << "NO"<<endl;
        // }