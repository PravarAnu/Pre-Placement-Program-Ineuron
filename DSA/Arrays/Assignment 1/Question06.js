/*

Q6. Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]

Output: true

*/

function isDistinct(arr){
    let ans = new Set(arr);
    return ans.size === arr.length;

    // return new Set(arr).size === arr.length;
}


console.log(isDistinct([1,2,3]));
console.log(isDistinct([1,2,3,1]));
