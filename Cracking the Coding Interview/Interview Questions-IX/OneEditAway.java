

public class OneEditAway {
    public static void main(String[] args) {
        String s1 = "this";
        String s2 = "thgs";
        System.out.println(oneEditAway(s1, s2));
    }


    public static boolean oneEditAway(String s1, String s2) {
        
        char []st1 = s1.toCharArray();
        char []st2 = s2.toCharArray();

        int l1 = s1.length();
        int l2 = s2.length();

        int count = 0;

        int i=0,j=0;

        while (i<l1 && j<l2) {
            
            if(st1[i]!=st2[j]) {
                if(count==1) {
                    break;
                }

                if(l1>l2) {
                    i++;
                }
                else if(l1<l2) {
                    j++;
                }
                else {
                    i++;
                    j++;
                }
                count++;
            }
            else {
                i++;
                j++;
            }
        }

        if(i<l1 || j<l2) {
            count++;
        }

        return (count==1);
    }
}