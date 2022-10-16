//String pallindrome code in
import java.util.*;
public class Pallindrome
{
	public static void main(String[] args) {
	     Scanner sc =new Scanner(System.in);
	     String s=sc.next();
	     String rev="";
		for(int i=s.length()-1;i>=0;i--){
		     rev+=s.charAt(i);
		     
		}
		if(s.equals(rev)){
		     System.out.println("Pallindrome String");
		}
		else{
		     System.out.println("Not Pallindrome");
		}
	}
}

