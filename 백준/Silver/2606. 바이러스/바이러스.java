
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

    static boolean[][] graph;
    static boolean[] visited;
    static int N,M;
    static int answer = 0;

    public static void dfs(int idx) {

        visited[idx] = true;
        answer ++;

        for (int i = 0; i <= N; i++) {
            if(visited[i] == false && graph[idx][i]) {
                dfs(i);
            }
        }
    }

    public static void main(String[] args) throws IOException {

        // 0.입력 및 초기화
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        N = Integer.parseInt(br.readLine().trim());
        M = Integer.parseInt(br.readLine().trim());

        graph = new boolean[N+1][N+1];
        visited = new boolean[N+1];
        
        // 1.graph에 연결 정보 채우기

        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());

            graph[x][y] = true;
            graph[y][x] = true;
        }

        // 2.dfs(재귀함수) 호출
        dfs(1);

        // 3.출력
        System.out.println(answer-1); // 1번 컴퓨터와 연결된 컴퓨터 수
    }
}