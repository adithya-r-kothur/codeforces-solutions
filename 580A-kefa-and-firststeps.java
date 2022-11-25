import java.util.*;

public class sample{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        int[] a = new int[n];

        for(int i=0;i<n;i++){
            a[i]=in.nextInt();
        }
        
        
        int count=0;
        int maxcount=0;
        for(int j =0;j<n-1;j++){
            if(a[j]<=a[j+1]){
                count++;
                maxcount= Math.max(count, maxcount);
            }else{
                count=0;
            }
        }


        if(n==1){
            System.out.println('1');
        }else{

            System.out.println(maxcount+1);
        }
        in.close();
    }
}
