import java.util.*;
public class twinPrimes {
    public static void main(String[] args) {
       Vector<twin> val  = new Vector<twin>();
       Vector<Integer>prime = new Vector<Integer>();
       for(int i=2;i<=100;i++){
           boolean flag=false;
           for(int j=2;j<i;j++){
              if(i%j==0){
                  flag=true;
                  break;
              }
           }
           if(!flag)prime.add(i);
       }
       for(int i=1;i<prime.size();i++){
           if((prime.elementAt(i)-prime.elementAt(i-1))==2){val.add(new twin(prime.elementAt(i-1),prime.elementAt(i)));}
       }
       System.out.println("Twin primes between 0 and 100 are : ");
       for(int i=0;i<val.size();i++){
           System.out.println("( "+val.elementAt(i).x+", "+val.elementAt(i).y+" )");
       }
    }
}
class twin{
    int x,y;
    twin(int f,int s){
        this.x=f;
        this.y=s;
    }
}