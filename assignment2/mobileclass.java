
import java.util.*;
public class mobileclass {
  public static void main(String[] args) {
    mobile m1 = new mobile("User1",25000,40);
    mobile m2 = new mobile("User2",30000,45);
    mobile m3= new mobile("User3",50000,60);
    m1.printDetails();
    m2.printDetails();
    m3.printDetails();
  }    
}
class mobile{
    private int cost=0;
    private int camera=0;
    public String username;
    mobile(String usrname,int x,int y){
        this.cost=x;
        this.camera=y;
        this.username=usrname;
    }
   void printDetails(){
      System.out.println("Details of "+this.username+" : ");
      System.out.println("       Cost   : Rs. "+this.cost);
      System.out.println("       Camera : "+this.camera+" MP");
      System.out.println("");
    }
}