package com.ashhasib;

public class SinglyList {
    class Node {
        public int data;
        public Node next;

        public Node(int data) {
            this.data = data;
        }
    }

    private int count=0;

    public Node HEAD=null;

    public void insert(int data) {
        Node newNode = new Node(data);

        //this is the first node that is being added
        if(this.HEAD==null) {
            this.HEAD=newNode;
            this.HEAD.next=null;
        }

        //this is the second element
        else if(this.HEAD.next==null) {
            this.HEAD.next=newNode;
            newNode.next=null;
        }

        //for all other cases
        else {
            Node n = this.HEAD;

            while(n.next!=null) {
                n = n.next;
            }
            n.next=newNode;
            newNode.next=null;
        }
        count++;
    }

    public void display() {
        Node n=this.HEAD;

        if(n.next==null) {
            System.out.println(n.data);
        }
        else {
            while(n.next!=null) {
                System.out.print(n.data+"->");
                n=n.next;
            }
            System.out.println(n.data);
        }
    }

    public int getCount() {
        return count;
    }

    public int getNthToLast(int n) {
        Node cur=this.HEAD;
        Node fol = this.HEAD;

        for(int i=0;i<n;i++) {
            cur=cur.next;
        }

        while(cur.next!=null) {
            cur=cur.next;
            fol=fol.next;
        }
        return fol.data;
    }

}
