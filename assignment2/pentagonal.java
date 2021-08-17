

import java.util.*;
public class pentagonal {
    public static void main(String[] args) {
        System.out.println("First 50 pentagonal numbers are : ");
        for(int i=0;i<50;i++){
            int temp=i*(3*i-1)/2;
            System.out.print(temp+", ");
        }
    }
    
}
