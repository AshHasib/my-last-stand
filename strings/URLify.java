
import java.lang.StringBuffer;

public class URLify {
    public static void main(String[] args) {
        char []arr = "This is a good work".toCharArray();
        System.out.println(urlify(arr));
    }

    public static char[] urlify(char arr[]) {
        
        int sz = arr.length;

        //count the total number of spaces
        int count = 0;
        for(int i=0;i<sz;i++) {
            System.out.print(arr[i]);
            if(arr[i]==' ') {
                count++;
            }
        }

        System.out.println(arr.length);

        //declaring new array with sufficient storage
        System.out.println(sz+count*2);
        char []newarr = new char[sz+count*2];
        int j=0;

        //restoring it into the new array with urlify
        for (int i= 0; i<sz;i++) {
            if(arr[i]==' ') {
              
                newarr[j]='%';
                newarr[j+1]='2';
                newarr[j+2]='9';
                j+=2;
            }
            else {
                newarr[j]=arr[i];
                j++;
            }
        }

        return arr;
    }
}