
import java.util.*;
public class constructorOverloading {
    public static void main(String[] args) {
        _multiply m1= new _multiply(4,5);
        _multiply m2= new _multiply(4,5,6); 
        _multiply m4= new _multiply(4.0,5.0);
        _multiply m3= new _multiply(4.0,5.0,6.0); 
    }
}
class _multiply{
     _multiply(int a,int b){
        System.out.println(a+" * "+b+" = "+a*b);
    }
     _multiply(int a,int b,int c){
        System.out.println(a+" * "+b+" * "+c+" = "+a*b*c);
    }
     _multiply(double a,double b){
        System.out.println(a+" * "+b+" = "+a*b);
    }
     _multiply(double a,double b,double c){
        System.out.println(a+" * "+b+" * "+c+" = "+a*b*c);
    }
}
