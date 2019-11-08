import java.util.*;

public class StringCompression {
    public static void main(String[] args) {
        System.out.println(compress("aab"));
    }

    public static String compress(String s1) {
        StringBuilder res= new StringBuilder();
        HashMap<Character, Integer> map= new HashMap<>();

        for(int i=0;i<s1.length();i++) {
            map.put(s1.charAt(i), map.getOrDefault(s1.charAt(i), 0)+1);
        }

        for(Character c: map.keySet()) {
            res.append(c+map.get(c).toString());
        }
        //return res;
        return (res.length()< s1.length()? res.toString():s1);
     }
}