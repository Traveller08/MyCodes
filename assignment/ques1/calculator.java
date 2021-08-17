import java.util.*;

public class calculator {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.print("Enter the first number : ");
        int a=cin.nextInt();
        System.out.print("Select any of the following operations to perform '+' or '-' or '*' or '\' or '%' or '&&' or '|' or '!' : ");
        String op=cin.next();      
        int b=0;
        if(!op.equals("!")){
            System.out.print("Enter the second no : ");
            b=cin.nextInt();
        }
        int ans=0;
        switch (op) {
            case "+":
                {
                    ans=a+b;
                    System.out.println("ans : " + ans);
                    break;
            }
            case "-":
                {
                    ans=a-b;
                    System.out.println("ans : " + ans);
                    break;
                }
            case "*":
                {
                    ans=a*b;
                    System.out.println("ans : " + ans);
                    break;
                }
            case "/":
                {
                    ans=a/b;
                    System.out.println("ans : " + ans);
                    break;
                }
            case "%":
                {
                    ans=a%b;
                    System.out.println("ans : " + ans);
                    break;
                }
            case "&&":
               {
                   boolean check=false;
                if (a != 0) {
                    if (b != 0) {
                        check = true;
                        System.out.println("The result is : " + check);
                        System.out.println("Both of the numbers are non-zero!");
                    } else {
                        check = false;
                        System.out.println("The result is : " + check);
                        System.out.println("The first number is non-zero but the second number is zero!");
                    }
                } else {
                    if (b != 0) {
                        check = false;
                        System.out.println("The result is : " + check);
                        System.out.println("The first number is zero but the second number is non-zero!!");
                    } else {
                        check = false;
                        System.out.println("The result is : " + check);
                        System.out.println("Both of the numbers are zero!");
                    }
                }
                break;
               }
            case "|":
                {
                    boolean check=false;
                    {
                        if (a == 0) {
                            if (b == 0) {
                                check = false;
                                System.out.println("The result is : " + check);
                                System.out.println("Both of the numbers are zero!");
                            } else {
                                check = true;
                                System.out.println("The result is : " + check);
                                System.out.println("The first number is zero but the second number is non-zero!!");
                            }
                        } else {
                            if (b == 0) {
                                check = true;
                                System.out.println("The result is : " + check);
                                System.out.println("The first number is non-zero but the second number is zero!");
                            } else {
                                check = true;
                                System.out.println("The result is : " + check);
                                System.out.println("Both of the numbers are non-zero!");
                            }
                        }
                        break;
                    }
                }
            case "!":
              {
                  
                    if (a == 0) {
                        if (b == 0) {
                            System.out.print("The result is : ");
                            System.out.println("Both of the numbers are zero!");
                            System.out.print("Not of first number (!" + a + ") and not of second number (!"
                                    + b + ") = ");
                            a = 1;
                            b = 1;
                            System.out.println(a + " and " + b);
                        } else {
                            System.out.print("The result is : ");
                            System.out.println("The first number is zero but the second number is non-zero!!");
                            System.out.print("Not of first number (!" + a + ") and not of second number (!"
                                    + b + ") = ");
                            a = 1;
                            b = 0;
                            System.out.println(a + " and " + b);
                        }
                    } else {
                        if (b == 0) {
                            System.out.print("The result is : ");
                            System.out.println("The first number is non-zero but the second number is zero!");
                            System.out.print("Not of first number (!" + a + ") and not of second number (!"
                                    + b + ") = ");
                            a = 0;
                            b = 1;
                            System.out.println(a + " and " + b);
                        } else {
                            System.out.print("The result is : ");
                            System.out.println("Both of the numbers are non-zero!");
                            System.out.print("Not of first number (!" + a + ") and not of second number (!"
                                    + b + ") = ");
                            a = 0;
                            b = 0;
                            System.out.println(a + " and " + b);
                        }
                   
                }
                break;
              }
            default:
            System.out.println("Please select a valid operations and try again..");
                break;
        }
       cin.close();
    }
}
