/*
Q1. Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example:
Input: nums = [2,7,11,15], target = 9
Output0 [0,1]

Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]
*/

/*
Rough Work
    - I have to return the indices of the two numbers
    - there is exactly one solution
    - Not sorted

    {
        2: 0,
        7: 1,
        11: 2,
        15: 3
    }

    9-2 = 7
    is this 7 is present in the hashmap
    if yes then return [0,1]


    [1,2,4,3,5] target: 8

    {
        1:0,
        2:1,
        4:2,
        3:3,
        5:4
    }

    8-1 = 7
    8-2 = 6
    8-4 = 4 val[4] == i
    8-3 = 5


    fn(arr, target):
        let map = {};

        for i:0 to size(arr):
            map[arr[i]] = i;

        for i:0 to size(arr):
            let found = map.hasOwnProperty(target-arr[i])

            if(found === true){
                if( i != map[target-arr[i]]){
                    return [i,map[target-arr[i]]]
                }
            }
        
*/

function targetSum(arr, target){
    let map = {};

    for(let i=0; i<arr.length; i++){
        map[arr[i]] = i;
    }

    for(let i=0; i<arr.length; i++){
        let val = target - arr[i];

        if(map.hasOwnProperty(val)){
            if(i !== map[val]){
                return [i, map[val]]
            }
        }
    }
}


let arr = [1,2,4,3,5];
let target = 8;

console.log(targetSum(arr, target));