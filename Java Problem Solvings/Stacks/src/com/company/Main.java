package com.company;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Stack<Integer> stack=new Stack<>();
        stack.push(1);
        stack.push(2);
        stack.push(3);

        System.out.println("MAX: "+stack.getMax());
        System.out.println(stack.pop());
        System.out.println("MAX: "+stack.getMax());
        System.out.println(stack.pop());
        System.out.println("MAX: "+stack.getMax());
        System.out.println(stack.pop());
        
    }
}
