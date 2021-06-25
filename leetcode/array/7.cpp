//Initial Template for C++

#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], i;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}

void rotate(int arr[], int n)
{
    int x = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    // isme hum ek ek karke i ki position ko aage kar rahe hai
    // in example n=8 a[]=9,8,7,6,4,2,1,3
    // jaise a[7]=a[6]matlab jo elemnt ab 7 main tha usko humne store karliya x main
    // fir humne 7th position main 6th position vala element dala aur fir
    // 6th main 5th vala and so on jab tak i>0
    // as soon as i==0 then humne jo x main store kari thi
    // that value i.e a[0]=x voh x ke equal kardenge resulting in
    // one circular rotation
}


// ***************my approach*************************************



// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     if(n==1){
//        for(int i=0;i<n;i++){
//         cout<<a[i];
//     } 
//     return 0;
//     }
//     cout<<a[n-1]<<" ";
//     for(int i=0;i<n-1;i++){
//         cout<<a[i]<<" ";
//     }

//     return 0;
// }
  