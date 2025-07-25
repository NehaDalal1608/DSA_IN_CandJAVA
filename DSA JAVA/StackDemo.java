public class stack {
    private int size;          //size of stack
    private int[] intArray;   //stack storage
    private int top;          //top of the stack

    //constructor
    public stack(int size){
        this.size=size;
        intArray=new int[size];      //initialize array
        top=-1;                      
    }
//operation:Push
//push item on the top of the stack
public void push(int data){
    if(!isFull()){
        //increment top by 1 and insert data
        intArray[++top]=data;
    }
    else{
        System.out.println("Cannot add data.stack is full.");
    }
}
//operation:pop
//pop item from the top of the stack
public int pop(){
    //retrive data and decrement the top by 1
    return intArray[top--]; 
}
//operation:peak
//view the data at the top of the stack
public int peek(){
    //retrive data from the top
    return intArray[top];
}
//operation:isFull
//return true if stack is full
public boolean isFull(){
    return(top==size-1);
}
//operation:isEmpty
//return true if stack is empty
public boolean isEmpty(){
    return[top==-1];
}

}
public class StackDemo{
    public static void main(String args[]){
//make a new stack
stack stack=new stack(10);

//push items on the stack
stack.push(3);
stack.push(13);
stack.push(23);
stack.push(33);

System.out.println("Element at top of the stack:"+stack.peek());
    }
}



