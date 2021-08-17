

import java.util.*;
public class fibonacci {
   static int fibo(int v){
        if(v==0 || v==1)return 1;
        return fibo(v-1)+fibo(v-2);
    }
    public static void main(String[] args) {
        System.out.print("Fibonacci numbers upto 100 are : ");
        for(int i=0;i<=100;i++){
            int temp=fibo(i);
            if(temp>100)break;
            System.out.print(temp+", ");
        }
    }
}
