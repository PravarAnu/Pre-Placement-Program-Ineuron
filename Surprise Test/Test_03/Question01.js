class Stack {
    constructor() {
        this.arr = [];
    }

    push(x) {
        this.arr.push(x);
        console.log("Stack after pushing")
        return this.print()
    }

    pop() {

        let val = this.arr[this.arr.length-1];
        this.arr.pop();

        console.log("Stack after popping");
        return this.print();
    }

    isEmpty() {
        console.log(`The stack is empty: ${this.arr.length ? false : true}`);
    }

    print() {
        for (let i = 0; i < this.arr.length; i++) {
            console.log(this.arr[i]);
        }
    }
}


function main() {
    const s = new Stack();

    s.isEmpty();
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.isEmpty();

}


main();
