class Node{
    constructor(data){
        this.data = data;
        this.next = null;
    }
}

function print(head){
    while(head!==null){
        console.log(head.data);

        head = head.next;
    }
}


function addTwoNumbers(head1, head2){
    let carry = 0;

    let h1 = head1;
    let h2 = head2;

    let newHead = new Node(-1);
    let newTemp = newHead;

    while(h1 !== null && h2 !== null){
        let sum = h1.data + h2.data + carry;

        let temp = new Node(Math.floor(sum%10));

        carry = Math.floor(sum / 10);

        newHead.next = temp;
        newHead = newHead.next;

        h1 = h1.next;
        h2 = h2.next;
    }

    while(h1!==null){
        let sum = h1.data + carry;

        let temp = new Node(Math.floor(sum%10));

        carry = Math.floor(sum / 10);

        newHead.next = temp;
        newHead = newHead.next;

        h1 = h1.next;
    }

    while(h2!==null){
        let sum = h2.data + carry;

        let temp = new Node(Math.floor(sum%10));

        carry = Math.floor(sum / 10);

        newHead.next = temp;
        newHead = newHead.next;

        h2 = h2.next;
    }

    if(carry>0){
        let temp = new Node(carry);

        newHead.next = temp;
    }

    return newTemp.next;
}


// Test Case 1

// let head1 = new Node(2);
// let temp11 = new Node(4);
// let temp12 = new Node(3);
// head1.next = temp11;
// temp11.next = temp12;

// let head2 = new Node(5);
// let temp21 = new Node(6);
// let temp22 = new Node(4);
// head2.next = temp21;
// temp21.next = temp22;

// print(addTwoNumbers(head1, head2));



// Test Case 2

// let head1 = new Node(0);
// let head2 = new Node(0);

// print(addTwoNumbers(head1, head2));



// Test Case 3
let head1 = new Node(9);
let temp11 = new Node(9);
let temp12 = new Node(9);
let temp13 = new Node(9);
let temp14 = new Node(9);
let temp15 = new Node(9);
let temp16 = new Node(9);

head1.next = temp11;
temp11.next = temp12;
temp12.next = temp13;
temp13.next = temp14;
temp14.next = temp15;
temp15.next = temp16;




let head2 = new Node(9);
let temp21 = new Node(9);
let temp22 = new Node(9);
let temp23 = new Node(9);


head2.next = temp21;
temp21.next = temp22;
temp22.next = temp23;

print(addTwoNumbers(head1, head2));