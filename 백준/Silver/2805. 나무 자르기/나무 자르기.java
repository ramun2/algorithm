
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int min = 0;
        int max = 0;

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();

        int[] arr = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();

            if(arr[i] > max){
                max = arr[i];
            }
        }

        while (min <= max) {
            int mid = (min+max)/2;
            long sum = 0;

            for(int a : arr){
                if(a > mid){
                    sum += a - mid;
                }
            }
            if(sum >= M){
                min = mid + 1;
            }else {
                max = mid - 1;
            }
        }
        System.out.println(min - 1);
    }
}
