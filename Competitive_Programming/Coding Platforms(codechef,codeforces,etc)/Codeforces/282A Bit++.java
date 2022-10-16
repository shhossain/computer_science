/**
*Link for the Problem : https://codeforces.com/problemset/problem/282/A
*Description :
*Given the initial value as 0 and applying only increment and decrement operators on it, we are to
*calculate its final value.
*/

import java.util.*;
public class _282A
{
	public static void main(String args[])
	{
		Scanner num = new Scanner(System.in);
		String str;
		int n = num.nextInt();
		num.nextLine();
		int x = 0;
		for(int i = 0; i < n; i++)
		{
			str = num.nextLine();
			if(str.contains("++"))
				++x;
			if(str.contains("--"))
				--x;
		}
		System.out.println(x);
	}
}
