#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int k;
  int arr[n];
  for (int i = 1; i <= n; ++i)
        cin>>arr[i] ;
        
   cin>>k;     
   sort(arr, arr + n+1);
  
    for (int i = 1; i <= n; ++i)
        {
            if(i==k){
                cout<<arr[i]<<endl;
            }
        }
  
    return 0;
}
