package com.company;

public class Stack <T>{
    public static class Node <T>{
        public T data;
        public Node next;
        public Node oldMax;

        public Node (T data) {
            this.data= data;
        }
    }

    public Node HEAD;
    public Node max;
    // 3 <- 2 <- 1
    public void push(T data) {
        Node node = new Node(data);
        if(this.HEAD==null) {
            HEAD=node;
        } else {
            node.next=HEAD;
            HEAD=node;
        }

        if(this.max==null || (int)node.data>(int)this.max.data){
            node.oldMax=max;
            max=node;
        }
    }

    public T pop() {
        if(HEAD==null) {
            return null;
        }
        Node node=this.HEAD;
        HEAD=node.next;
        if(node.oldMax!=null) {
            this.max=node.oldMax;
        }
        return (T)node.data;
    }


    public T getMax() {
        return (T)this.max.data;
    }
}
