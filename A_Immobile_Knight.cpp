#include<bits/stdc++.h>
using namespace std;
#define lo long long
#define ff(i,a,b) for(int i=a;i<b;i++)
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define charToInt(c) (c-'0')
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void eb(){
  lo a,b;
  cin>>a>>b;
  lo m1=min(a,b);
  lo m2=max(a,b);
 
 if(a==1 || b==1)
  {
    cout<<1<<" "<<1<<endl;
  }
 else if(a==3 && b==3)
  {
    cout<<2<<" "<<2<<endl;
  }
  else
   cout<<(a/2)+1<<" "<<(b/2)+1<<endl;
}
int main() 
{
        // #ifndef ONLINE_JUDGE
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
        // #endif
        ios::sync_with_stdio(0);
        cin.tie(0);
   
     int k;
     cin>>k;
  
   ff(i,0,k)
       {
          eb();
       }
return 0;
}