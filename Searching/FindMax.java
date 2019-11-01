import java.lang.*;

public class FindMax{
    public static void main(String[] args) {
        int []arr = new int[]{3,2,0,5,6};
        System.out.printf("The min is : %d\n", findMin(arr));
        System.out.printf("The second min is : %d\n", findSecondMin(arr));
    }

    private static int findMin(int []arr) {
        int min = arr[0];

        for(int i=1;i<arr.length;i++) {
            if (min>arr[i]) {
                min = arr[i];
            }
        }
        return min;
    }


    private static int findSecondMin(int []arr) {
        int min = Integer.MAX_VALUE;
        int m2 = Integer.MAX_VALUE;

        for(int i=0;i<arr.length;i++) {
            if (min>arr[i]) {
                m2= min;
                min = arr[i];
            }
            else if(m2>min && m2>arr[i]) {
                m2= arr[i];
            }
        }
        return m2;
    }

}