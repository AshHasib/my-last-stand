

public class SubString {
    public static void main(String[] args) {
        String s1= "Thisisgood";
        String s2 = "isga";

        System.out.println(isSubstring(s1.toCharArray(), s2.toCharArray()));
    }


    public static boolean isSubstring(char []a, char []b) {
        int m = a.length;
        int n = b.length;

        char fc = b[0];
        
        for(int i=0;i<=m-n;i++) {
            if(a[i]==fc) {
                int j;
                for(j= 0; j<n; j++) {
                    if(a[i+j]!=b[j]) {
                        break;
                    }
                }
                if (j==n) return true;
            }
        }
        return false;
    }
}