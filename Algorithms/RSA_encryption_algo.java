package com.core.java;
import java.util.*;
import java.math.*;
public class RSA_algo {
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 2 prime numbers : ");
		int p = sc.nextInt();
		int q = sc.nextInt();
		
		int n = p * q;
		int phi = (p-1) * (q-1);
		int e = 0;
		for(e=2; e<phi; e++)
		{
			int i = gcd(e, phi);
			if(i==1)
				break;
		}
		System.out.println("Coprime to phi is : " + e);
		System.out.println("Enter string t be encrypted");
		String msg = sc.next();
		int  C = encryption(e, n, msg);
		int P = decryption(e, phi, C, n);
		System.out.println("Encryption is : " + C);
		System.out.println("Decryption is : " + P);
	}
	public static int gcd(int e, int phi)
	{
		int max=0;
		for(int i=1; i<=e; i++)
		{
			if(e%i==0 && phi%i==0)
				max = i;
		}
		return max;
	}
	public static int encryption(int e,int n, String msg)
	{
		int m = 0;
		for(int i=0; i<msg.length(); i++)
		{
			char ch = msg.charAt(i);
			m = m*10 + ((int)ch-96);
		}
		System.out.println("String eq. is : " +m);
		int C = (int)Math.pow(m, e) % n;
		System.out.println("Encrypted String eq. is : " +C);
		return C;
	}
	public static int decryption(int e,int phi, int C, int n)
	{
		int k = 1;
		double d = 0;
		do{
			d = ((k * phi)+1)/e;
			k++;
			System.out.println("Value of k : " +k);
		}while(d%1!=0);
		System.out.println("Value of d : " +d);
		int P =  (int)Math.pow(C, d) % n;
		System.out.println("Decrypted String eq. is : " + P);
		return P;
	}
}
