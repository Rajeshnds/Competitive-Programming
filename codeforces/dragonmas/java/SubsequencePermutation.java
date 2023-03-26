import java.util.Scanner;

import java.util.*;
public class SubsequencePermutation {
    public static void main(String args[]){
        Scanner ss=new Scanner(System.in);
        int t=ss.nextInt();
        for(int i=1;i<=t;i++){
            int n=ss.nextInt();
            String s=ss.next();
            char ch[]=s.toCharArray();
            Arrays.sort(ch);
            int count=0;
            for(int j=0;j<n;j++){
                if(ch[j]!=s.charAt(j))count++;
            }
            System.out.println(count);
        }
    }
}
