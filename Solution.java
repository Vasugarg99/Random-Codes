import java.io.*;
import java.util.*;
class Solution {
    public static String lcp(String[] strs) 
    {
        if (strs.length == 0) return "";
        String prefix = strs[0];
        for (int i = 1; i < strs.length; i++)
            while (strs[i].indexOf(prefix) != 0) {
                prefix = prefix.substring(0, prefix.length() - 1);
                if (prefix.isEmpty()) return "";
            }        
        return prefix;  
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String[] strs = null;
        strs = s.split(" ");
        System.out.print(lcp(strs));
    }
}