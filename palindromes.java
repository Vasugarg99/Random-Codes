import java.io.*;
import java.util.*;
class palindromes{
    public static String Gps(String inputStr)
    {
        int j = 0; int k = 0; String palindrome = "";
        String longestPalindrome = "";
        for(int i = 1; i < inputStr.length(); i++)
        {
            k =	i + 1;
            j = i - 1;
            while(j >= 0 && k < inputStr.length()){
                if(inputStr.charAt(j)!=inputStr.charAt(k)){
                    break;
                } 
                else{
                    j--; 
                    k++;
                }
                palindrome = inputStr.substring(j + 1, k - j - 1);
                if(palindrome.length() > longestPalindrome.length())
                {
                    longestPalindrome = palindrome;
                }
            }
        }
        return longestPalindrome;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.print(Gps(s));
    } 
}