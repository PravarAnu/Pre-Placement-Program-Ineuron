/*

Q3. Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5

Output: 2

*/

/* 
    - the array is sorted
    - distinct elements in array
    

    arr: [1,2,3,5,6]    target: 4
    i = 0
    j = 5
    mid: (5+0)/2 = 2
    arr[mid] < target
    
    i = mid+1 = 3
    j = 5
    mid = (5+3)/2 = 4
    arr[mid] > target

    i = 3;
    j = mid-1 = 3;


*/

function findTheTarget(arr, target){
    let i=0; 
    let j = arr.length-1;

    while(i<=j){
        let mid = Math.floor((j+i)/2);

        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] > target){
            j = mid-1;
        }else{
            i = mid+1;
        }
    }

    return i;
}


console.log(findTheTarget([1,3,4,6], ));