
/**
 * This Singly List will contain 
 * void add(data),
 * data delete(data),
 * boolean search(data),
 * void display()
 */


class Node {
    Node next = null;
    int data;

    public Node (int d) {
        this.data = d;
    }
}

class SinglyList {

    class Node {
        Node next = null;
        int data;
    
        public Node (int d) {
            this.data = d;
        }
    }

    Node HEAD = null;
    public SinglyList() {}


    void add(int data) {
        Node newNode = new Node(data);
        
        //this is the first node that is being added
        if(this.HEAD==null) {
            //System.out.println("First elem");
            this.HEAD = newNode;
            this.HEAD.next =null;
        }
        
        //There is only one element in the list
        else if (this.HEAD!= null && this.HEAD.next == null) {
            //System.out.println("Second elem");
            newNode.next=null;
            this.HEAD.next = newNode;
        }

        //regular case
        else {

            //System.out.println("Regular Case elem");
            Node n = this.HEAD;
            while(n.next != null) {
                n = n.next;
            }
            newNode.next=null;
            n.next= newNode;
            
        }

    }






    boolean search(int data) {
        Node n= this.HEAD;

        if (this.HEAD.data == data) return true;
        while(n.next!=null) {
            if(n.data == data) {
                return true;
            }
            n = n.next;
        }

        return false;
    }











    void display() {

        Node n = this.HEAD;
        System.out.println(this.HEAD.data);
        while(n.next!=null) {
            n=n.next;
            System.out.println(n.data);
        }
    }
    Node getHead() {
        return this.head;
    }

}


public class SinglyListTest {
    public static void main(String[] args) {
        SinglyList list = new SinglyList();
        list.add(5);
        list.add(4);
        list.add(7);
        list.add(9);
        list.add(11);
        list.add(10);
        list.display();

        System.out.println(list.search(2));

    }
}

