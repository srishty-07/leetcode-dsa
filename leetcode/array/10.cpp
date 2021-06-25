// https://leetcode.com/problems/find-the-duplicate-number/
// https://leetcode.com/problems/find-the-duplicate-number/discuss/1280737/SHORT-and-SIMPLE-oror-O(N)-LINEAR-TIME-oror-O(1)-SPACE-oror-SINGLE-PASS-oror-DRY-RUN-ororC%2B%2B
// /* Traverse the array from start to end.
// For every element,take its absolute value and if the abs(array[i])‘th element is positive, the element has not encountered before, 
// else if negative the element has been encountered before print the absolute value of the current element. */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[abs(nums[i])] >= 0){
                nums[abs(nums[i])] = -nums[abs(nums[i])];
            }
            else{
                ans = abs(nums[i]);
                break;
            }
        }
        return  ans;
    }
};

// TIME COMPLEXITY : O(N), where N: total number of elements
// SPACE COMPLEXITY :O(1), (constant Aux. space)

// if you find any mistakes pls, drop a comment
// if it makes any sense don't forget to Upvote

/*The idea is to traverse the array and mark the visited elements.

While traversing the array, we will use the absolute value of every element as an index and make the value at this index as negative to mark it visited. 
For example, for element 3, we will make the value at index 2 as negative ( since the array is 0-indexed ). For any element in the array, 
if the element at the index {element - 1} is already marked negative, then this is the repeating element. 

To find the missing number, we will traverse the array again and look for a positive value. The index at which we find the positive value
is our missing number because that index is not present in the array as an element.  

 

For Example: Consider the array Arr = { 1, 5, 2, 2, 3 }. 

Now we will traverse the array and mark the visited numbers as follows: 

At index 0, we encounter 1. To mark this element as visited, Arr[1 - 1] = - Arr[1 - 1].
Current array Arr: {-1, 5, 2, 2, 3}. 

At index 1, we encounter 5. To mark this element as visited, Arr[5 - 1] = - Arr[5 - 1].
Current array Arr: {-1, 5, 2, 2, -3}. 

At index 2, we encounter 2. To mark this element as visited, Arr[2 - 1] = - Arr[2 - 1].
Current array Arr: {-1, -5, 2, 2, -3}. 

At index 3, again we encounter 2.
Here, the element at index 1 (2 - 1), is already negative. It means we have already visited it. Thus, we have found our repeating number ‘R’ which is 2. 

Current array Arr: {-1, -5, 2, 2, -3}. 

At index 4, we encounter 3. To mark this element as visited, Arr[3 - 1] = - Arr[3 - 1].
Current array Arr: {-1, -5, -2, 2, -3}. 

To find the missing number ‘M’, we will again traverse the array.
We will find that the element at index 3 is the only positive element. It means that the missing number is 3 + 1 = 4.
So, our missing number ‘M’ is 4 and the repeating number ‘R’ is 2. 
*/




// 2. SOLUTION WITH CONSTANT ARRAY (WITHOUT MODIFICATIONS):
/*We maintain two pointers fast and slow
For each step fast will move to the index that is equal to arr[arr[fast]](two jumps at a time) 
and slow will move to the index arr[slow](one step at a time)
When fast==slow that means now we are in a cycle.
Fast and slow will meet in a circle and the entry point of that circle will be the duplicate element.
Now we need to find entry point so we will start with fast=0 and visit one step at a time for both fast and slow.
When fast==slow that will be entry point.
Return the entry point.
*/

class Solution {
public:
int findDuplicate(vector<int> &arr) {
        int n = arr.size();
        if (n <= 1)
        return -1;
 
        // initialize fast and slow
        int slow = arr[0];
        int fast = arr[arr[0]];

        // loop to enter in the cycle
        while (fast != slow) {

            // move one step for slow
            slow = arr[slow];

            // move two step for fast
            fast = arr[arr[fast]];
        }

        // loop to find entry point of the cycle
        fast = 0;
        while (slow != fast) {
            slow = arr[slow];
            fast = arr[fast];
        }
        return slow;
    }
};

// TIME COMPLEXITY : O(N), where N: total number of elements
// SPACE COMPLEXITY :O(1), (constant Aux. space)


// for understandung absolute
// https://www.programiz.com/cpp-programming/library-function/cstdlib/abs#:~:text=The%20abs()%20function%20in,in%20header%20file.&text=The%20abs()%20function%20is,header%20for%20valarrays.

// https://www.youtube.com/watch?v=32Ll35mhWg0&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2
// using linked list 
// TC:O(N)
int findDuplicates(vector<int> &nums){
    // inintilaise both slow and fast pointer to index 0
    int slow = nums[0];
    int fast = nums[0];
    // now we will create a do while loop untill we see that the two pointer collide 
    // we are using do while because we want work to get done first and then get checked by the while condition
    do{
        slow=nums[slow];
        // slow pointer will move by 1 step
        fast = nums[nums[fast]];
        // fast will move by 2 steps thats why nums[nums[fast]];
    }while(slow!=fast);
    // now if slow==fast
    // we will shift the fast pointer to the starting of the array 
    // and will not shift slow pointer anywhere
    fast=nums[0];
    while(slow!=fast){
        // jab tak slow fast ke equal nahi ho jata dubara se 
        // we will move both fast and slow pointer by 1 now 
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
    // as both pointer are at same index it does not depend whether you are returninv slow or fast it will return same value
}