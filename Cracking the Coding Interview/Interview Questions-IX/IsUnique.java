import java.util.HashMap;
import java.util.Arrays;
import java.util.Collections;
public class IsUnique{
    public static void main(String[] args) {
        char []arr= "abcdefa".toCharArray();
        System.out.println(isUnique(arr));
    }

    private static boolean isUnique(char []str) {
        Arrays.sort(str);
        char fl=str[0];

        for(int i = 1; i<str.length;i++) {
            if(str[i]==fl) {
                return false;
            }
            else {
                fl=str[i];
            }
        }

        return true;
    }
}