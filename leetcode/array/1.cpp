#include <iostream>
using namespace std;
void reverseArray(int a[],int s,int e){
    // base condn
    if(s>=e)
     return;
     
    int temp=a[s];
    a[s]=a[e];
    a[e]=temp;
    
    // again calling recursion
    reverseArray(a,s+1,e-1);
    
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        // cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int start=0;
    int end=n-1;
    reverseArray(a,start,end);
    printArray(a,n);

    return 0;
}
