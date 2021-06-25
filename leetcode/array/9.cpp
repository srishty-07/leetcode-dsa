// Initial template for C++
// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
// main crux of this question is to get minimum distance between two towers so what we are doing is we are first sorting the array and then we are fixing two positions one for the max height and one for min and comparingeach amd every elemnt after altreration and then at end printing the differnce
// https://www.youtube.com/watch?v=29uyA4F9t5I
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int min1=0,max1=0,r=0;
        r=arr[n-1]-arr[0];//result=maximum element-min element ,as array is sorted therefore max=a[0] and min=a[n-1]
        // we have started loop through 1 and till n not <=  bcoz we are fixing those values for comparison kyunki
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=k)
            {
            max1=max(arr[i-1]+k,arr[n-1]-k);//usko bana sakte hai jisko hum decrement na kar paye i.e arr[i-1]+k choti value hai isliye +k aur isko compare karo max value se jo hai arr[n-1] aur yeh badi value to isliye subtract k from it  matlab hum comparison and -+k ek saath kar rahehai
            min1=min(arr[i]-k,arr[0]+k);//same for min par ab isme hum peeche vala element lenge
            r=min(r,max1-min1);//as we want minimum height so humne r main min value store kari thi ab hum usko jo new ati rahegi usme hum r ki value dalte rahenge
            }
            else
            {
                continue;
            }
        }
        return r;
}
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends