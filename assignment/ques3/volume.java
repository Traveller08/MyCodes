import java.util.*;
public class volume {
    public static void main(String[] args) {
        Scanner cin=new Scanner(System.in);
        System.out.print("Please enter the height,width and depth of the box : ");
        int b,h,d;
        b=cin.nextInt();
        h=cin.nextInt();
        d=cin.nextInt();
        System.out.println("The volume of the box is : "+b*h*d);
    }
}
