#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int a[n];
    int cnt0=0;
    int cnt1=0;
	int cnt2=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt0++;
        }
        if(a[i]==1){
            cnt1++;
        }
        if(a[i]==2){
            cnt2++;
        }
    }
    while(cnt0--){
		   	
		   	cout<<"0"<<" ";
		   }
		   
		   while(cnt1--){
		   	
		   	cout<<"1"<<" ";
		   }
		   
		   while(cnt2--){
		   	
		   	cout<<"2"<<" ";
		   }

	
	
	cout<<endl;
  
    return 0;
}
// optimised approach
// dutch algorithm
// O(N)
void sortColors(vector<int>& nums){
    // create three pointers low mid and high
    // low and mid will be pointing to 1st index i.e 0
    // high pointer will be pointing th end of array
    int low = 0;
    int high = nums.size()-1;
    int mid = 0;
    while(mid <= high){
            // jab tak mid jo hai voh high se chota hoga tab tak
           
            switch(nums[mid]){
            // ab hum array ke andar vale value check kar arhe hai ki nums[mid] kya hai aur mid ki value tab tak badti rahegi jab tak voh high se kam hai 
            
            // if the element is 0
            case 0:
            // then we will swap low vali value ko aur mid vali value ko aur fir low++ and mid++ karenge
              swap(nums[low++],nums[mid++]);
              break;
            
            // if the element is 1
            case 1:
            // agar 1 aya us element ki value to sidha mid ++ karenge 
              mid++;
              break;
            
            // if the element is 2
            case 2:
            // aur agar 2 aya to hum mid vali value ko swap kardenge high vale se aur high-- karenge 
              swap(nums[mid],nums[high--]);
              break;
        }
    }
}


