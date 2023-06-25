class Queue {
    constructor() {
        this.arr = [];
    }

    enqueue(x) {
        this.arr.push(x);
        console.log("Queue after enqueuing")
        return this.print()
    }

    dequeue() {
        this.arr.shift();

        console.log("Queue after dequeuing");
        return this.print();
    }

    isEmpty() {
        console.log(`The queue is empty: ${this.arr.length ? false : true}`);
    }

    print() {
        for (let i = 0; i < this.arr.length; i++) {
            console.log(this.arr[i]);
        }
    }
}

function main(){
    const q = new Queue();

    q.isEmpty();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.dequeue();
    q.isEmpty();
}

main();