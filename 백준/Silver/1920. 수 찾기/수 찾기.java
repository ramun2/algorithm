import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 첫 번째 배열 입력
        int N = sc.nextInt();
        int[] arr1 = new int[N];
        for (int i = 0; i < N; i++) {
            arr1[i] = sc.nextInt();
        }

        // 두 번째 배열 입력
        int K = sc.nextInt();
        int[] arr2 = new int[K];
        for (int i = 0; i < K; i++) {
            arr2[i] = sc.nextInt();
        }

        // arr1 정렬
        Arrays.sort(arr1);

        // arr2의 각 값에 대해 이진 탐색
        for (int num : arr2) {
            if (binarySearch(arr1, num)) {
                System.out.println("1");
            } else {
                System.out.println("0");
            }
        }
    }

    // 이진 탐색 함수
    private static boolean binarySearch(int[] arr, int target) {
        int left = 0;
        int right = arr.length - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (arr[mid] == target) {
                return true;
            } else if (arr[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return false;
    }
}
