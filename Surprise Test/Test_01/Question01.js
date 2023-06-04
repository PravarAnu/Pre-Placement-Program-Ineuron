function moveAllZeros(arr) {
    let i = 0;
    let j = 0;

    while (j < arr.length) {
        if (arr[j] != 0) {
            arr[i] = arr[j];
            arr[j] = 0;

            i++;
        }
        j++;
    }

    return arr;
}