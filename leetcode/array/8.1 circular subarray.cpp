// maxsubarray=total sum of subarray-(-sum of non contributing element) 
// wrapsum=totalsum+kadane(arr,n);
// - andar isliye lagay kyunki humne -ve kiye they saare element ko to vapis positive karne ke liye (-sum)
// we will be suing kadane algorith here also 
//we are given a circular array 

// https://www.youtube.com/watch?v=0JYgnhnZFcE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=25































// Pair target sum problem 
// to find whether there exist 2 number that sum to k
// important :the array must be sorted for two pointer appriach 
// idea:keep a low and a hogh pointer decide which pointer to move on the basis of a[low]+a[high]
// TC:O(N)
// Space complexity:O(1)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int low=0;
    int high=n-1;
    
    while(low<high){
      if(a[low]+a[high]==k){
          cout<<low<<" "<<high;
          return 0;
      }
      else if(a[low]+a[high]<k){
          low++;
      }
      else{
          high--;
      }
    }
    return 0;
}
// similar question brute force approach will be using two loop which leads to complecity of O(n*2)
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int n,k;
//      cin>>n>>k;
//      int a[n];
//      for(int i=0;i<n;i++){
//          cin>>a[i];

//      }
//      for(int i=0;i<n;i++){
//          for(int j=i;j<n;j++){
//               if(a[i]+a[j]==k){
//                   cout<<i<<" "<<j<<endl;
//               }
//          }
//      }
//      return 0;
// }