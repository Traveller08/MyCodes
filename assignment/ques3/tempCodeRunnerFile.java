import java.util.*;

public class areaClass {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.print("Select the type of figure 'rectangle' or 'circle' : ");
        String fig=cin.next();
        String figr=fig.toLowerCase();
        if(figr.equals("rectangle")){
            System.out.print("Enter the sides of the rectangle : ");
            double l,b;
            l=cin.nextDouble();
            b=cin.nextDouble();
            rectangle r1= new rectangle(l, b);
           System.out.print("The area of the rectangle is : "+r1.calcArea());
        }
        else if(fig.equals("circle")){
           System.out.print("Enter the radius of the circle : ");
           double r=cin.nextDouble();
           circle c1=new circle(r);
           System.out.println("The area of thhe circle is : "+c1.calcArea());
        }
        else{
            System.out.println("Invalid figure type entered..please choose any of the following figure types 'rectangle' or 'circle' ");
        }
    }
}
/**
 * InnerareaClass
 */
class circle {
    double radius=0.0;
    double area=0.0;
    circle(double r){
        radius=r;
        area=Math.PI*r*r;
    }    
    double calcArea(){
        return area;
    }
}
/**
 * rectangle
 */   
class rectangle {
   double l=0.0;
   double b=0.0;
   double area=0.0;
   rectangle(double len,double br){
       l=len;
       b=br;
       area=l*b;
   }
    double calcArea(){
        return area;
    }
}