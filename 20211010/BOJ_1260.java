import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class BOJ_1260 {
    static int N;
    static int M;
    static int V;
    static int[][] check;
    static boolean[] checked;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        V = Integer.parseInt(st.nextToken());
        check = new int[1001][1001];
        checked = new boolean[1001]; //초기값 False

        //간선 연결상태 저장
        for(int i=0; i<M; i++) {
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());

            check[x][y] = check[y][x] = 1;
        }

        dfs(V);

        checked = new boolean[1001]; //확인상태 초기화
        System.out.println();

        bfs();
    }

    //시작점을 변수로 받아 확인, 출력 후 다음 연결점을 찾아 시작점을 변경하여 재호출
    public static void dfs(int i) {
        checked[i] = true;
        System.out.print(i + " ");

        for(int j=1; j<=N; j++) {
            if(check[i][j] == 1 && checked[j] == false) {
                dfs(j);
            }
        }
    }

    public static void bfs() {
        Queue<Integer> queue = new LinkedList<Integer>();
        queue.add(V); //시작점도 Queue에 넣어야 함
        checked[V] = true;
        System.out.print(V + " ");

        //Queue가 빌 때까지 반복. 방문 정점은 확인, 출력 후 Queue에 넣어 순서대로 확인
        while(!queue.isEmpty()) {
            int temp = queue.poll();

            for(int j=1; j<=N; j++) {
                if(check[temp][j]==1 && checked[j]==false) {
                    queue.add(j);
                    checked[j] = true;
                    System.out.print(j + " ");
                }
            }
        }
    }
}
