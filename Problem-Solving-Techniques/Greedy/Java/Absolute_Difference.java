import java.util.*;

public class Absolute_Difference{
    public static void main(String[] args){
        int[] a = {4,1,8,7};
        int b[] = {2,3,6,5};

        Arrays.sort(a);
        Arrays.sort(b);
        int minDiff = 0 ;

        for(int i= 0; i < a.length; i++){
              minDiff += Math.abs(a[i] - b[i]);
        }

        System.out.println("min absolute value is : " + minDiff);

    }
}