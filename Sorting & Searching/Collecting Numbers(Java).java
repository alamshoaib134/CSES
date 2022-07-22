import java.util.*;
public class Main
{
	public static void main(String[] args) {
		HashMap<Integer,Integer> hash = new HashMap<>();
		Scanner scan = new Scanner(System.in);
		int n=scan.nextInt();
		int[] a = new int[n];
		for(int i=0;i<n;i++)
		    a[i]=scan.nextInt();
		for(int i=0;i<n;i++)
		    hash.put(a[i],i);
		int count=1,tmp=0,tmp1=0;
		tmp=hash.get(1);
		for(int i=1;i<=n;i++)
		{
		    tmp1=hash.get(i);
		    if(tmp>tmp1)
		        count++;
		    tmp=tmp1;
		}
		System.out.println(count);
	}
}
