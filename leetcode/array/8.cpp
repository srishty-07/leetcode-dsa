// use of kadane's algo
// max subarray
// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#
// tc is o(n)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxsum=INT_MIN;
    int currentsum=0;
    for(int i=0;i<n;i++){
        currentsum+=a[i];
        if(currentsum<0)//i.e if it will be negative then we will update it to zero 
        {
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    
    cout<<maxsum<<endl;
    return 0;
}

// brute force approach

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxsum=INT_MIN;
    
//     for(int i=0;i<n;i++){
//        for(int j=i;j<n;j++){
//            int sum=0;//isko loop ke andar he initialise karna hai varna it will give error
//            for(int k=i;k<=j;k++){
//             //   cout<<a[k]; it will print all the subarrays
//                sum=sum+a[k];
//            }
//            maxsum=max(maxsum,sum);
//        }
//     }
    
//     cout<<maxsum<<endl;
//     return 0;
// }
