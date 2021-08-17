import java.util.*;

public class alter {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int a,b,c,d;
        System.out.print("Enter four spaced integers to find their maximum and minimum: ");
        a=cin.nextInt();
        b=cin.nextInt();
        c=cin.nextInt();
        d=cin.nextInt();
          {
           int temp=a;
           if(a>b)temp=a;
           else temp=b;
           if(c>temp)temp=c;
           if(d>temp)temp=d;
           System.out.println("The maximum of the entered numbers is  : "+temp);
        }
        {
           int temp=a;
           if(b<temp)temp=b;
           if(c<temp)temp=c;
           if(d<temp)temp=d;
          
           System.out.println("The minimum of the entered numbers is  : "+temp);
        }
    }
}
