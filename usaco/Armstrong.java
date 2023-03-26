import java.util.Scanner;
import java.util.Arrays;
public class Armstrong {
	
	public static void main(String[] args){
	Scanner s = new Scanner(System.in);
	int N = s.nextInt();
	int k = s.nextInt();
	int [] a = new int[N];
	for(int i =0;i<N;i++) {
		a[i]=s.nextInt();
    }
	int res = mulitisetSolve(a,k);
	System.out.println(res);
}

	public static int mulitisetSolve(int[]a,int k){
        int[]arr=new int[100008];
        Arrays.fill(arr,0);
        for(int i=0;i<a.length;i++){
            arr[a[i]]++;
        }
        Arrays.sort(arr);
        int cnt=0,sum=0,c=0;
        for(int i=arr.length-1;i>=0;i++){
            if(arr[i]>=k)
                cnt++;
            if(arr[i]<k){
                for(int j=0;j<=i;j++){
                    if(arr[j]>0)
                        c++;
                    sum+=arr[j];
                }
                if(sum>k)
                return cnt+(sum%k)==0?sum/k:(int)(Math.floor(sum/(float)(k)))+1;
                else
                    return cnt+c;
            }
        }
        return cnt;
}
}