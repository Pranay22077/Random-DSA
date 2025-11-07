import java.util.*;
public class ArrayStack{
    private int[] array;
    private int top;
    private int cap;

    ArrayStack(int size){
        array = new int[size];
        cap = size;
        top = -1;

    }

    public void push(int item){
        if (top == cap - 1){
            System.out.println("Stack is full, can't push " + item);
            return;
        }
        top ++ ;
        array[top] = item;
        System.out.println("pushed " + item);
    }

    public int pop(){
        if (isEmpty()) {
            System.out.println("Stack is empty, Cannot pop");
            return -1; // Return a value indicating an error
        }
        int topElement = array[top];
        top--; // Move the top index down
        return topElement;
    }
    
    }