import java.util.*;
public class ThirdMethod{
    
    public static void main(String [] args)
    {
    String a="King";
    String b="two";
    String c="queen";
    String two ="five";
    sent(a,b,c);
    sent("Hello!",a,b);
    sent("Hi! ",c,a);
    sent(two,a,b);
}
public static void sent(String b,String c,String a)
{
    System.out.println("   "+b+"  "+a+"   "+c);
}
  
}
