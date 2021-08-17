import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        if (n == 1) {
               int cnt1=0,cnt2=0;
               for(int j=0;j<4;j++){
                   int temp=cin.nextInt();
                   if(temp==0)cnt1++;
                   else cnt2++;
               }
               int ans=Math.abs(cnt1-cnt2);
               System.out.println(ans/2);
           } 
        else {
            int [] fir=new int[4];
            int [] sec=new int[4];
            char[][] mat1 = new char[n][n];
            char[][] mat2 = new char[n][n];
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {
                    if ((j % 2 == 0 && k % 2 == 0) || (j % 2 != 0 && k % 2 != 0)) {
                        mat1[j][k] = '1';
                        mat2[j][k] = '0';
                    } else {
                        mat1[j][k] = '0';
                        mat2[j][k] = '1';
                    }
                }
            }
            int ans = Integer.MAX_VALUE;
            for (int i = 0; i < 4; i++) {
                char[][] val = new char[n][n];
                int cnt1 = 0, cnt2 = 0;
                for (int j = 0; j < n; j++) {
                    String ss = cin.next();
                    for (int k = 0; k < n; k++) {
                        val[j][k] = ss.charAt(k);
                    }
                }
                for (int j = 0; j < n; j++) {
                    for (int k = 0; k < n; k++) {
                        if (val[j][k] != mat1[j][k])
                            cnt1++;
                        if (val[j][k] != mat2[j][k])
                            cnt2++;
                    }
                }
                fir[i]=cnt1;
                sec[i]=cnt2;
            }
            ans=Math.min(ans, fir[0]+fir[1]+sec[2]+sec[3]);
            ans=Math.min(ans, fir[0]+fir[2]+sec[1]+sec[3]);
            ans=Math.min(ans, fir[0]+fir[3]+sec[2]+sec[1]);
            ans=Math.min(ans, fir[2]+fir[1]+sec[0]+sec[3]);
            ans=Math.min(ans, fir[3]+fir[1]+sec[2]+sec[0]);
            ans=Math.min(ans, fir[2]+fir[3]+sec[0]+sec[1]);

            System.out.println(ans);
        }

    }
}
