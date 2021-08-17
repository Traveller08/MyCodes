import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        
        setter s1= new setter();
        System.out.print("please enter a message : ");
        String s=cin.nextLine();
        s1.sets(s);
        getter g1= new getter();
        g1.gets();
    }
    
}
class setter{
    private String mess="This is the initial message ";
    setter(){
        System.out.println("Current message is : \""+mess+"\"");
    }
    void sets(String s){
        String ss=this.mess;
        this.mess=s;
        System.out.println("Message successfully updated from \""+ss+"\" to \""+this.mess+"\".");
    }
}
class getter{
   private String mess="This can be read only! ";
   void gets(){
       System.out.println("The message is : "+this.mess);
   }
}