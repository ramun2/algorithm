import java.io.*;
import java.util.*;

public class Main {
    final static int MAX = 1000000 + 10;
    static ArrayList<Integer>[] graph;
    static boolean[] visited;
    static int N,M,R;
    static int[] answer;
    static int order;

    public static void dfs(int idx, BufferedWriter bw) throws IOException {
        visited[idx] = true;
        bw.write(idx + " ");

        for (int next : graph[idx]) {
            if (!visited[next]) {
                dfs(next, bw);
            }
        }
    }

    public static void bfs(BufferedWriter bw) throws IOException {
        Queue<Integer> queue = new LinkedList<>();
        visited = new boolean[MAX];

        queue.add(R);
        visited[R] = true;

        while(!queue.isEmpty()){
            int idx = queue.poll();
            bw.write(idx + " ");

            for (int next : graph[idx]) {
                if (!visited[next]) {
                    queue.add(next);
                    visited[next] = true;
                }
            }
        }
    }

    public static void main(String[] args) throws IOException {

        // 0.입력 및 초기화
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        R = Integer.parseInt(st.nextToken());

        graph = new ArrayList[MAX];
        for (int i = 1; i <= N; i++) {
            graph[i] = new ArrayList<>();
        }
        visited = new boolean[MAX];
        answer = new int[MAX];
        order = 1;

        // 1.graph에 연결 정보 채우기
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());

            graph[x].add(y);
            graph[y].add(x);
        }

        // 2.오름차순 정렬
        for (int i = 1; i <= N; i++) {
            Collections.sort(graph[i]);
        }

        // 3.dfs(재귀함수) 호출
        dfs(R,bw);
        bw.newLine();

        //4.bfs(재귀함수) 호출
        bfs(bw);
        bw.newLine();

        bw.flush();
        bw.close();
        br.close();
    }
}