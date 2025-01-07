import java.util.*;

class Main{
      public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
          
        Queue<Integer> queue = new LinkedList<>();
        
        for (int i = 1; i <= N; i++) {
             queue.add(i);
        }
        
        System.out.print("<");
        while (!queue.isEmpty()){
            for (int i = 0; i < K-1; i++) {
                int val = queue.poll();
                queue.add(val);
            }
            System.out.print(queue.poll());
            if (!queue.isEmpty()) {
                System.out.print(", ");
            }
        }
        System.out.print(">");
    }
}