package com.ashhasib;

public class Main {
    public static void main(String[] args) {
        SinglyList list =new SinglyList();

        list.insert(1);
        list.insert(2);
        list.insert(3);
        list.insert(4);
        list.insert(5);

        list.display();
        System.out.println(list.getCount());

        System.out.println(list.getNthToLast(1));
        System.out.println(list.getNthToLast(2));
        System.out.println(list.getNthToLast(3));
    }
}
