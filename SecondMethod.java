// Implement a Rectangle class ( length,breath,area and perimeter, calculate the perimeter
import java.util.*;
public class SecondMethod{
    double length,breath;
    double area,perimeter;
    
    void getValues(double len,double br)
    {
       length=len;
       breath=br;
    }
        double calArea()
    {
        double ar=length*breath;
        area=ar;
        return ar;
    }
    double calP()
    {
        double perm=2*(length+breath);
        perimeter=perm;
        return perm;
    }
    public void FirstMethod()
    {
    double a,p;
   getValues(10,2);
   a=calArea();
   p=calP();
   System.out.print("Area is ");
   System.out.print(a);
     System.out.print("Preimeter is ");
   System.out.print(p);
}

}
