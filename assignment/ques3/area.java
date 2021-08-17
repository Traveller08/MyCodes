import java.util.*;
public class area {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.print("Select the type of figure 'rectangle' or 'circle' : ");
        String fig=cin.next();
        String figr=fig.toLowerCase();
        if(figr.equals("rectangle")){
            System.out.print("Enter the sides of the rectangle : ");
           int l,b;
           l=cin.nextInt();
           b=cin.nextInt();
           System.out.print("The area of the rectangle is : "+l*b);
        }
        else if(fig.equals("circle")){
           System.out.print("Enter the radius of the circle : ");
           double r=cin.nextDouble();
           double area=Math.PI*r*r;
           System.out.println("The area of thhe circle is : "+area);
        }
        else{
            System.out.println("Invalid figure type entered..please choose any of the following figure types 'rectangle' or 'circle' ");
        }
    }
    
}
