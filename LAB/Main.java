import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.print("Enter the two numbers : ");
        int n = cin.nextInt();
        int m=cin.nextInt();
      //  System.out.print("Enter operator : ");
         String s=cin.nextLine();
       //  System.out.println(s);
        if(s.equals('+'))System.out.println(n+m);
        else if(s.equals('-'))System.out.println(n-m);
        else if(s.equals('*'))System.out.println(n*m);
        else if(s.equals('/'))System.out.println(n/m);
        else if(s.equals('%'))System.out.println(n%m);
    }
}
