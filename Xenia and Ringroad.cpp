#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() 
{ 
  
  int n,m;
   sd(n);
   sd(m);
  int a[m];
 
  for(int i=0;i<m;i++) sd(a[i]);
  int curr = 1;
  long long int c = 0;
  
  for(int i = 0;i < m; i++)
  {
      if(a[i] == curr) continue;
      
      else if (a[i]-curr >0)
        {c+=a[i] - curr; 
         curr = a[i];
        }
      
      else 
        {c+=(n - curr) + a[i];  
        curr = a[i];
        }
  
  }
  cout << c;
  return 0;
   
}