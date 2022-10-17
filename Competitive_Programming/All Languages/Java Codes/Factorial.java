import java.util.*;
class Factorial{
    public static void main(String[] args){
        //Factorial of n is the product of all positive descending integers.
        System.out.println("Enter Integer:");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int f=1;
        for(int i=1; i<=num; i++){
            f = f*i;
        }
        System.out.println("Factirial of" + num + " is " + f);

    }
}