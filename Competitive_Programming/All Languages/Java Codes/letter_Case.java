/*While checking the English papers of the board exams ,the professor often gets frustated by the writing format of words of the student in the examination paper. The words were a net mix of upper case and the lower case letters in every words. An idea struck into the mind of the professor to develop an extension that would change the letters' register in every word so that it either only consisted of lower case letters or, vice cersa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. 

If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.  

Input Description:-
- First line of input consists of t, the number of test cases
- Next t lines each consists of:
String: string comprising both upper and lower case letters

Input variables:
int t: No. of test cases
String : string comprising both upper and lower case letters

Output Description:
Print the corrected word. If the given word has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

Constraints:
1<=t<=4
A,a<=value of each character<=Z,z

Sample Input:
3
HoUse
ViP
maTRIx


Sample Output:
house
VIP
matrix */
import java.util.*;
public class siba {
    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);
        int x = ob.nextInt();
        while (x != 0)
        {
            String line = ob.next();
            int count1 = 0, count2 = 0;
            for (int i = 0; i < line.length(); i++) {
                if (Character.isUpperCase(line.charAt(i))) {
                    count1++;
                } else if (Character.isLowerCase(line.charAt(i))) {
                    count2++;
                }
            }
            if (count2 >= count1) {
                System.out.println(line.toLowerCase());
            } else {
                System.out.println(line.toUpperCase());
            }

                x--;

        }

    }
}
