/*

Q7. Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

*/

function moveAllZeros(arr){
    let i=0;
    let j=0;

    while(j<arr.length){
        if(arr[j] != 0){
            arr[i] = arr[j];
            arr[j] = 0;

            i++;
        }
        j++;
    }

    return arr;
}


console.log(moveAllZeros([0,1,0,3,12,0,2,3,4,0,0]));