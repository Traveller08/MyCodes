
import java.util.*;
public class methodOverloading {
    public static void main(String[] args) {
        multiply mul = new multiply();
        System.out.println("5*9 = "+mul.multiply_no(5, 9));
        System.out.println("9.0*5.0 = "+mul.multiply_no(9.0, 5.0));
        System.out.println("5*9*8 = "+mul.multiply_no(5, 9, 8));
        System.out.println("5.0*9.0*8.0 = "+mul.multiply_no(5.0, 9.0,8.0));
    }
}
class multiply{
    int multiply_no(int a,int b){
        return a*b;
    }
    int multiply_no(int a,int b,int c){
        return a*b*c;
    }
    double multiply_no(double a,double b){
        return a*b;
    }
    double multiply_no(double a,double b,double c){
        return a*b*c;
    }
}