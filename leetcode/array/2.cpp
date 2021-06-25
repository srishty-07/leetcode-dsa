#include <iostream>
using namespace std;
struct Pair{
    int min;
    int max;
};
struct Pair getMinMax(int a[],int n){
    struct Pair minmax;
    int i;
    
    
    if(n==1){
        minmax.min=a[0];
        minmax.max=a[0];
        return minmax;
    }
    // initialise element as min and max and then use that elements to compare other integres as min and max compared to them
    if(a[0]>a[1]){
        minmax.max=a[0];
        minmax.min=a[1];
    }
    else if(a[0]<a[1]){
        minmax.max=a[1];
        minmax.min=a[0];
    }
    
    for(i=2;i<n;i++){
        if(a[i]>minmax.max){
            minmax.max=a[i];
        }
        else if(a[i]<minmax.min){
            minmax.min=a[i];
        }
    }
    
    return minmax;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    struct Pair minmax=getMinMax(a,n);
    
    cout<<"Minimum element"<<minmax.min<<endl<<"Maximum element"<<minmax.max;
    return 0;
}




// // 2nd approach that takes less time complexity
// // C++ program of above implementation



// #include<iostream>
// using namespace std;

// // Structure is used to return
// // two values from minMax()
// struct Pair
// {
// 	int min;
// 	int max;
// };

// struct Pair getMinMax(int arr[], int n)
// {
// 	struct Pair minmax;	
// 	int i;
	
// 	// If array has even number of elements
// 	// then initialize the first two elements
// 	// as minimum and maximum
// 	if (n % 2 == 0)
// 	{
// 		if (arr[0] > arr[1])	
// 		{
// 			minmax.max = arr[0];
// 			minmax.min = arr[1];
// 		}
// 		else
// 		{
// 			minmax.min = arr[0];
// 			minmax.max = arr[1];
// 		}
		
// 		// Set the starting index for loop
// 		i = 2;
// 	}
	
// 	// If array has odd number of elements
// 	// then initialize the first element as
// 	// minimum and maximum
// 	else
// 	{
// 		minmax.min = arr[0];
// 		minmax.max = arr[0];
		
// 		// Set the starting index for loop
// 		i = 1;
// 	}
	
// 	// In the while loop, pick elements in
// 	// pair and compare the pair with max
// 	// and min so far
// 	while (i < n - 1)
// 	{		
// 		if (arr[i] > arr[i + 1])		
// 		{
// 			if(arr[i] > minmax.max)	
// 				minmax.max = arr[i];
				
// 			if(arr[i + 1] < minmax.min)		
// 				minmax.min = arr[i + 1];	
// 		}
// 		else	
// 		{
// 			if (arr[i + 1] > minmax.max)	
// 				minmax.max = arr[i + 1];
				
// 			if (arr[i] < minmax.min)		
// 				minmax.min = arr[i];	
// 		}
		
// 		// Increment the index by 2 as
// 		// two elements are processed in loop
// 		i += 2;
// 	}		
// 	return minmax;
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 1000, 11, 445,
// 				1, 330, 3000 };
// 	int arr_size = 6;
	
// 	Pair minmax = getMinMax(arr, arr_size);
	
// 	cout << "nMinimum element is "
// 		<< minmax.min << endl;
// 	cout << "nMaximum element is "
// 		<< minmax.max;
		
// 	return 0;
// }

// // This code is contributed by nik_3112
