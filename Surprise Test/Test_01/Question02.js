var firstUniqChar = function (s) {
    let m = new Map();

    for (let i = 0; i < s.length; i++) {
        if (m.has(s[i])) {
            m.set(s[i], m.get(s[i]) + 1);
        } else {
            m.set(s[i], 1);
        }
    }

    for (let i = 0; i < s.length; i++) {
        if (m.get(s[i]) === 1) {
            return i;
        }
    }

    return -1;
};