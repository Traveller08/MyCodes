import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.print("Enter the no of operands : ");
        int t=cin.nextInt();
        if(t==2){
            System.out.print("Enter two spaced integers : ");
             int a,b;
             a=cin.nextInt();
             b=cin.nextInt();
             addition ans =new addition(a,b);
             System.out.println("The sum of the no's  is : " + ans.add());
        }
        else if(t==3){
            int a,b,c;
            System.out.print("Enter three spaced integers : ");
            a=cin.nextInt();
            b=cin.nextInt();
            c=cin.nextInt();
            addition ans =new addition(a,b,c);
            System.out.println("The sum of the no's is : " + ans.add());
        }
        else {
            System.out.println("Invalid number of operands..Please provide a valid input ..");
        }
    }
}
class addition{
    int a=0;
    int b=0;
    int c=0;
    addition(int operand1,int operand2){
       a=operand1;
       b=operand2;
    }
    addition(int operand1,int operand2,int operand3){
        a=operand1;
        b=operand2;
        c=operand3;
    }
    public int add() {
        return a+b+c;
    }
}

