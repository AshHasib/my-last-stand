/*If a string with an even length is a palindrome, every character in the string must always occur an even number of times. 
* If the string with an odd length is a palindrome, every character except one of the characters must always occur an even number of times. */



import java.util.HashMap;

public class PalindromePermutation {
    public static void main(String[] args) {
        String str= "tacocat";
        System.out.println(isPalindrome(str));
    }
    
    
    public static boolean isPalindrome(String str) {

        HashMap<Character, Integer> map  =new HashMap<>();
        for(int i=0;i<str.length();i++) {
            map.put(str.charAt(i), map.getOrDefault(str.charAt(i), 0) + 1);
        }

        int count = 0;

        for(Character c : map.keySet()) {
            //System.out.println(c+" = " +map.get(c));
            count += map.get(c)%2;
        }

        return (count<=1);
    }
}