import java.util.Scanner;

class vowel{

    public static void main(String[] args) {
	boolean bool=false;
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the character ");
	char c=scan.next().charAt(0);
	 switch(c) {
         case 'A' :
         case 'E' :
         case 'I' :
         case 'O' :
         case 'U' :
         case 'a' :
         case 'e' :
         case 'i' :
         case 'o' :
         case 'u' : bool = true;
      }
      if(bool == true){
         System.out.println("Given character is an vowel ");
      }else{
         System.out.println("Given character is a consonant ");
      }
   }
}