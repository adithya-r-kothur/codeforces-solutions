import java.util.*;
 
public class sample{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int count=1;
        String s=in.next();
        int n = s.length();
        for(int i=0;i<n-1;i++){
           if(s.charAt(i)==s.charAt(i+1)){
            count++;
           }
           else{
               count=1;
            }
            if(count>=7){
                System.out.println("YES");
                break;
 
            }
        }
 
        if(count<7){
            System.out.println("NO");
        }
 
       
        in.close();
    }
}