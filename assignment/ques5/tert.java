import java.util.*;
public class tert {
 public static void main(String[] args) {
     Scanner cin = new Scanner(System.in);
     int a,b,c,d;
     System.out.print("Enter four spaced integers to find their maximum and minimum : ");
     a=cin.nextInt();
     b=cin.nextInt();
     c=cin.nextInt();
     d=cin.nextInt();
    {
        int temp=a>b?a:b;
        temp=temp>c?temp:c;
        temp=temp>d?temp:d;
        System.out.println("The maximum of the entered numbers is  : "+temp);
     }
     {
        int temp=a<b?a:b;
        temp=temp<c?temp:c;
        temp=temp<d?temp:d;
        System.out.println("The minimum of the entered numbers is  : "+temp);
     }
    
 }    
}
