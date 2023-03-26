import java.util.*;
public class one
{
public static void main(String args[])
{
Scanner ss=new Scanner(System.in);
int t=ss.nextInt();
for(int i1=1;i1<=t;i1++)
{ int n=ss.nextInt();
String s=ss.next();
char ch[]=s.toCharArray();
Arrays.sort(ch);
int c=0;
for(int i=0;i<n;i++)
{
    if(ch[i]!=s.charAt(i))
    c++;
}
System.out.println(c);
}
}
}