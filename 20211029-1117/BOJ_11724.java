import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_11724 {
    static int N;
    static int M;
    static int[][] check;
    static boolean[] checked;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken()); // 정점 개수
        M = Integer.parseInt(st.nextToken()); // 간선 개수
        check = new int[1001][1001];
        checked = new boolean[1001];

        //check 채우기
        for(int i=0; i<M; i++){
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());

            check[x][y] = check[y][x] = 1;
        }

        int cnt = 0;
        for(int i=1; i<=N; i++) {
            if (!checked[i]) {
                dfs(i);
                ++cnt;
            }
        }

        System.out.println(cnt);
    }

    private static void dfs(int i) {
        checked[i] = true;

        for(int j=1; j<=N; j++){
            if(check[i][j]==1 && checked[j]==false)
                dfs(j);
        }
    }
}
