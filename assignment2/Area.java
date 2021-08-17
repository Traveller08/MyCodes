import java.util.*;
public class Area {
    public static void main(String[] args) {
        System.out.println("Please select any of the following options : ");
        System.out.println("Enter \"C\" for circle (without quotes) ");
        System.out.println("Enter \"P\" for regular pentagon (without quotes) ");
        System.out.println("Enter \"S\" for square (without quotes) ");
        System.out.println("Enter \"R\" for rectangle (without quotes) ");
        System.out.println("Enter \"T\" for triangle (without quotes) ");
        Scanner cin = new Scanner(System.in);
        String op=cin.nextLine();
        op = op.toLowerCase();
        switch (op) {
            case "c":{
                System.out.print("Enter the radius of the circle : ");
                double r= cin.nextDouble();
                double area=Math.PI*r*r;
                System.out.println("The area of the circle is : "+area);
                break;
            }
            case "p":{
                System.out.print("Enter the side of the regular pentagon : ");
                double r= cin.nextDouble();
                double area=(Math.sqrt(5*(5+2*Math.sqrt(5.0)))*r*r)/4;
                System.out.println("The area of the pentagon is : "+area);
                break;
            }
            case "s":{
                System.out.print("Enter the side of the square : ");
                double r= cin.nextDouble();
                double area=r*r;
                System.out.println("The area of the square is : "+area);
                break;
            }
            case "r":{
                System.out.print("Enter the sides of the rectangle : ");
                double l= cin.nextDouble();
                double b= cin.nextDouble();
                double area = l*b;
                System.out.println("The area of the rectangle is : "+area);
                break;
            }
            case "t":{
                System.out.print("Enter the sides of the triangle : ");
                double a= cin.nextDouble();
                double b= cin.nextDouble();
                double c= cin.nextDouble();
                Double s = (a+b+c)/2;
                double area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
                System.out.println("The area of the triangle is : "+area);
                break;
            }
            default:
                System.out.println("Please provide a valid input");
                break;
        }
    }
}
