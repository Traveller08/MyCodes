import java.util.*;

public class volumeClass {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
       System.out.print("Enter the dimensions of the box (three spaced doubles) : ");
       double l,b,h;
       l=cin.nextDouble();
       b=cin.nextDouble();
       h=cin.nextDouble();
       cuboid cub1=new cuboid(l, b, h);
       System.out.println("The volume of the box is : "+cub1.calcVolume());
    }
    
}

 class cuboid{
     double l=0.0,b=0.0,h=0.0,vol=0.0;
     cuboid(double len,double br,double ht){
         l=len;
         b=br;
         h=ht;
         vol=l*b*h;
     }
     double calcVolume(){
         return vol;
     }
}
