#include<bits/stdc++.h>
using namespace std;
#define lo long long
#define ff(i,a,b) for(int i=a;i<b;i++)
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define charToInt(c) (c-'0')
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void eb(){
 lo n,x;
 cin>>n;
 vector<lo>a1;
 vector<lo>a0;
lo a[n],s[n];
 for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
   {
    cin>>x;
    if(a[i]==0)
      a0.push_back(x);
    else
      a1.push_back(x);
   }
   
   lo sum=0;
   sort(a0.begin(),a0.end(),greater<int>());
    sort(a1.begin(),a1.end(),greater<int>());
   
    if(a0.size()==a1.size())
      {
        if(a0[a0.size()-1]>=a1[a0.size()-1])
           sum=a1[a0.size()-1]+2*a0[a0.size()-1];
        else 
            sum=a0[a1.size()-1]+2*a1[a0.size()-1];
        for(int i=0;i<a1.size()-1;i++)
            sum+=2*a1[i]+2*a0[i];
            cout<<sum<<endl;
      }
      
      else
      {
        
        int i=0,j=0;
        
        while(i<a0.size() && j<a1.size())
          {  sum+=2*a1[j]+2*a0[i];
        
          i++;
          j++;}
         
             while(i<a0.size())
           { sum+=a0[i];
           i++;}
             while(j<a1.size())
            {sum+=a1[j];
            j++;}
cout<<sum<<endl;
      }
      



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