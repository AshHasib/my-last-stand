package com.company;

public class CountOnes {

    public static void main(String[] args) {
        int num=15;

        int sum = 0;

        while(num>0) {
            sum+=num&1;
            num=num>>1;
        }
        System.out.println("1s in the number: "+sum);
    }
}
