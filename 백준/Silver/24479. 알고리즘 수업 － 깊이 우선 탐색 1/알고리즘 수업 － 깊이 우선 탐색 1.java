import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {
    final static int MAX = 1000000 + 10;
    static ArrayList<Integer>[] graph;
    static boolean[] visited;
    static int N,M,R;
    static int[] answer;
    static int order;

    public static void dfs(int idx) {
       visited[idx] = true;
       answer[idx] = order;
       order ++;

       for (int i = 0; i < graph[idx].size(); i++) {
            int next = graph[idx].get(i);
            if(visited[next] == false) {
                dfs(next);
            }
        }
    }

    public static void main(String[] args) throws IOException {

        // 0.입력 및 초기화
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
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
        dfs(R);

        // 4.출력
        for (int i = 1; i <= N; i++) {
            System.out.println(answer[i]);
        }
    }
}