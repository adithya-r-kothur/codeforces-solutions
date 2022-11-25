import java.util.*;
 
public class sample{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        
        String s=in.nextLine();
        int n = s.length();
        int flag=0;
        for(int i=0;i<n;i++){
           if(s.charAt(i)=='H' || s.charAt(i)=='Q' || s.charAt(i)=='9'){
            System.out.println("YES");
            flag=1;
            break;
           }
        }
         if(flag==0){
            System.out.println("NO");
         }
 
        
 
       
        in.close();
    }
}