#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
struct id
{
    long long int sb;
};
int main()
{
   long long int b=0,n,i,c=0,o,x;

   stack <long long int> s;
   cin>>n;
   id j[n];
   long long int arr[n];
   //vector <long long int> arr;
   for(i=0;i<n;i++)
   {
       cin>>o;
       if(o==1)
       {
          cin>>x;
          s.push(x);
          arr[c]=x;
          c++;
       }
       else
       {
           j[s.top()].sb=b;
           b++;
           s.pop();
       }
   }
   sort(arr,arr+c);
   for(i=0;i<c;i++)
   {
       cout<<j[arr[i]].sb<<" ";
   }
   return 0;
}
