/*
                       _oo0oo_
                      o8888888o
                      88" . "88
                      (| -_- |)
                      0\  =  /0
                    ___/`---'\___
                  .' \\|     |// '.
                 / \\|||  :  |||// \
                / _||||| -:- |||||- \
               |   | \\\  -  /// |   |
               | \_|  ''\---/''  |_/ |
               \  .-\__  '-'  ___/-. /
             ___'. .'  /--.--\  `. .'___
          ."" '<  `.___\_<|>_/___.' >' "".
         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
         \  \ `_.   \_ __\ /__ _/   .-` /  /
     =====`-.____`.___ \_____/___.-`___.-'=====
                       `=---='
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
 SHAMELESLLY COPIED TEMPLATE FROM MULTIPLE SOURCES - baba_yaga
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/  
// There is no God but flying spaghetti monster  - pray him or else we will kill you //

/* I'd like to also point out that the religious fascism we propagate is unnoticed because  every fucking piece of shit on this earth is kinda noob */

// You cant prove there is no flyin spaghetti monster , so beleive him or i will kill you.

/* once you come in , there is no leaving , we will kill you if you leave but of course 
 we will not say that while you accept our theology ..*/

// All hail flyign spaghetti monster. 

#pragma GCC optimize ("O3")
#define _CRT_SECURE_NO_WARNINGS
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")
#include<bits/stdc++.h>
 
#define ll                    long long int
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define eb                    emplace_back
#define ab(a)                 (a<0)?(-1*a):a
#define pc                    putchar_unlocked
#define gc                    getchar_unlocked
#define mset(a,b,c)           loop(i,0,b) a[i]=c
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define X                     first
#define Y                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define MAX                   1e9
#define MIN                   -1e9
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vvi                   vector<vi>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define mid(s,e)              (s+(e-s)/2)
#define mini                  INT_MIN
#define BUG(x) cout << '>' << #x << ':' << x << endl;
#define MOD 1000000007
#define sortX(n,x) 	    sort(n,n+x);
#define sortF(s)  	    sort(s.begin(), s.end());
#define sortR(s)  	    sort(s.rbegin(), s.rend());
#define sortG(n)	    sort(n.begin(), n.end(), greater<int>());
#define bsearch(n,k,i)    binary_search(n.begin()+i,n.end(),k);
const int MX=10010896;
const int lmt=3164;
const int N=10000001;
int flag[MX>>6];
#define ifc(i)                (flag[i>>6]&(1<<((i>>1)&31)))
#define isc(i)                (flag[i>>6]|=(1<<((i>>1)&31)))
#define chk(n)                (n==2||(n>2&&(n&1)&&!ifc(n)))
#define sv()                  int t; scanf("%d",&t); while(t--)
using namespace std;
ll extgcd(ll a,ll b,ll& x,ll& y){if(b==0){x=1;y=0;return a;}else{int g=extgcd(b,a%b,y,x);y-=a/b*x;return g;}}
ll modpow(ll a,ll b) {ll res=1;a%=MOD;for(;b;b>>=1){if(b&1)res=res*a%MOD;a=a*a%MOD;}return res;}
void sieve(){ int i,j,k; for(i=3;i<lmt;i+=2) if(!ifc(i)) for(j=i*i,k=i<<1;j<MX;j+=k) isc(j);}
     /* Fast Input-Output */
inline void rdi(int &n) { n=0; char c=gc(); while(c<'0' or c>'9') c=gc(); while(c>='0' and c<='9') { n=(n<<3)+(n<<1)+c-'0'; c=gc(); }}
inline void rdl(ll &n) { n=0; char c=gc(); while(c<'0' or c>'9') c=gc(); while(c>='0' and c<='9') { n=(n<<3)+(n<<1)+c-'0'; c=gc(); }}
inline void print(int a) { char s[20]; int i=0; do { s[i++]=a%10+'0'; a/=10; } while(a); i--; while(i>=0) pc(s[i--]); pc('\n'); }
inline void prlong(ll a) { char s[20]; int i=0; do { s[i++]=a%10+'0'; a/=10; } while(a); i--; while(i>=0) pc(s[i--]); pc('\n'); }
 
const static auto ioSpeedUp = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
class Solution {
public:
int romanToInt(string s)
{
    int sum = 0;
    char c;
    int inputSize = s.size();

    for (int i = 0; i < inputSize; i++)
    {
        c = s[i];

        if (c == 'I')
        {
            if(s[i+1] == 'V')
            {
                sum += 4;
                i++;
            }
            else if(s[i+1] == 'X')
            {
                sum += 9;
                i++;
            }
            else
            {
                sum += 1;
            }
        }
        else if (c == 'V')
        {
            sum += 5;
        }
        else if (c == 'X')
        {
            if(s[i+1] == 'L')
            {
                sum += 40;
                i++;
            }
            else if(s[i+1] == 'C')
            {
                sum += 90;
                i++;
            }
            else
            {
                sum += 10;
            }
        }
        else if (c == 'L')
        {
            sum += 50;
        }
        else if (c == 'C')
        {
            if(s[i+1] == 'D')
            {
                sum += 400;
                i++;
            }
            else if(s[i+1] == 'M')
            {
                sum += 900;
                i++;
            }
            else
            {
                sum += 100;
            }
        }
        else if (c == 'D')
        {
            sum += 500;
        }
        else if (c == 'M')
        {
            sum += 1000;
        }
    }

    return sum;
}
};