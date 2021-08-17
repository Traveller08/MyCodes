import java.util.*;
public class operations {
 public static void main(String[] args) {
     int z,a,b,c,d,e,f;
     z=8;
     a=z++ + ++z;
     b=z-- + --z;
     c=z++;
     d=++z;
     e=z--;
     f=--z;
     System.out.println("a = "+a);
     System.out.println("b = "+b);
     System.out.println("c = "+c);
     System.out.println("d = "+d);
     System.out.println("e = "+e);
     System.out.println("f = "+f);
     System.out.println("z = "+z);
 }    
}
