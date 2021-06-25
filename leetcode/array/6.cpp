// #include <bits/stdc++.h>
// using namespace std;
// void remove_duplicate_elements(int arr[], int n)
// {
//     int cnt=0;
// // Hash map which will store the elements which has appeared previously.
// 	unordered_map<int, bool> mp;

// 	for (int i = 0; i < n; ++i) {

// // Print the element if it is there in the hash map
// 	if (mp.find(arr[i]) == mp.end()) {
// // 		cout << arr[i] << " ";
//          cnt++;
// 	}
     
// // Insert the element in the hash map
// 	mp[arr[i]] = true;
// 	}
// 	cout<<cnt;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int x;
//     cin>>x;
//     int a[n];
//     int b[x];
    
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<x;i++){
//         cin>>b[i];
//     }
    
//     // to find union 
//     int c[n + x];
//     merge(a, (a + n), b, (b + x), c);
    
//     // for (int i = 0; i < (n + x); i++){
//     //     cout << c[i] << " ";
//     // }
   
//     remove_duplicate_elements(c, n+x);
    
//     return 0;
// }



// optimised method
// using unordered set

#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
		int tc;
	cin>>tc;
	while(tc--){
	    int a,b;
	    cin>>a>>b;
	    int arr1[a],arr2[b];
	    for(int i=0;i<a;i++){
	        cin>>arr1[i];
	    }
	    for(int i=0;i<b;i++){
	        cin>>arr2[i];
	    }
	    unordered_set<int> s;
	    for(int i=0;i<a;i++){
	        s.insert(arr1[i]);
	    }
	    for(int i=0;i<b;i++){
	        s.insert(arr2[i]);
	    }
	    cout<<s.size()<<endl;
	    

}
	return 0;
}


// to find union 
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;

/* Function prints union of arr1[] and arr2[]
m is the number of elements in arr1[]
n is the number of elements in arr2[] */
void printUnion(int arr1[], int arr2[], int m, int n)
{
    int cnt=0;
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j]){
			cout << arr1[i] << " ";
			i++;
			cnt++;}

		else if (arr2[j] < arr1[i]){
			cout << arr2[j] << " ";
			j++;
			cnt++;}

		else {
			cout << arr2[j] << " ";
			j++;
			i++;
			cnt++;
		}
	}

	/* Print remaining elements of the larger array */
	while (i < m){
	    cnt++;
		cout << arr1[i++] << " ";}

	while (j < n){
	    cnt++;
		cout << arr2[j++] << " ";}
		cout<<endl<<cnt;
		//it will give the no of elements in intersection
}

/* Driver program to test above function */
int main()
{
	int arr1[] = { 1, 2, 4, 5, 6 };
	int arr2[] = { 2, 3, 5, 7 };

	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	// Function calling
	printUnion(arr1, arr2, m, n);

	return 0;
}

// for intersection

// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;

/* Function prints union of arr1[] and arr2[]
m is the number of elements in arr1[]
n is the number of elements in arr2[] */
void printUnion(int arr1[], int arr2[], int m, int n)
{
    int cnt=0;
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j]){
			i++;
}

		else if (arr2[j] < arr1[i]){
			j++;
		}

		else {
			cout << arr2[j] << " ";
			j++;
			i++;
			cnt++;
		}
	}
		cout<<endl<<cnt;
}

/* Driver program to test above function */
int main()
{
	int arr1[] = { 1, 2, 4, 5, 6 };
	int arr2[] = { 2, 3, 5, 7 };

	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);

	// Function calling
	printUnion(arr1, arr2, m, n);

	return 0;
}
