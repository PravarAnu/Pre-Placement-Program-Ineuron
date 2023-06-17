function sqRoot(x) {
    let s = 0;
    let e = x;

    let ans = -1;
    while (s <= e) {
        let mid = Math.floor((e + s) / 2);
        let midMul = mid * mid;

        if (midMul === x) {
            return mid;
        } else if (midMul < x) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

console.log(sqRoot(9))
console.log(sqRoot(12))
console.log(sqRoot(8))
