import java.util.*;
 
public class sample{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
 
        for(int l=0;l<n;l++){
            a[l]=in.nextInt();
        }
        for(int i =0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    int temp = a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
 
        for(int k=0;k<n;k++){
            System.out.print(a[k]+" ");
        }
        in.close();
    }
}
