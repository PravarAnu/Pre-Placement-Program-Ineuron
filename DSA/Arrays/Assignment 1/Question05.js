/*

Q5. You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

*/

function mergeTwoArrays(arr1, m, arr2, n){
    let arr1Start = 0;
    let arr2Start = 0;

    let arr1End = m;
    let arr2End = n;

    while(arr1Start<arr1End && arr2Start<arr2End){

        if(arr1[arr1Start] > arr2[arr2Start]){
            let temp = arr1[arr1Start];
            arr1[arr1Start] = arr2[arr2Start];
            arr2[arr2Start] = temp;
        }

        arr1Start++;
    }

    while(arr2Start < arr2End){
        arr1[arr1Start] = arr2[arr2Start];

        arr1Start++;
        arr2Start++;
    }

    return arr1;
}


console.log(mergeTwoArrays([1,2,3,0,0,0], 3, [2,5,6], 3));