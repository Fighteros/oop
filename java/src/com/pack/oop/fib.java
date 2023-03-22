package com.pack.oop;

public class fib {

    public static void main(String[] args) {
        int x = 5;
        System.out.println("Number" + x  + "fib" + fib(x));
    }


    public static int fib(int n){
        if(n < 2){
            return n;
        }
        return fib(n -1)+ fib(n -2 );
    }
}
