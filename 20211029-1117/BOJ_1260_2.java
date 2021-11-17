import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class BOJ_1260_2 {
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
        checked = new boolean[1001];

        //check 채우기
        for(int i=0; i<M; i++){
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());

            check[x][y] = check[y][x] = 1;
        }

        dfs(V);

        checked = new boolean[1001];
        System.out.println();

        bfs();
    }

    private static void dfs(int i) {
        checked[i] = true;
        System.out.print(i + " ");

        for(int j=1; j<=N; j++){
            if(check[i][j]==1 && !checked[j])
                dfs(j);
        }
    }

    private static void bfs() {
        Queue<Integer> que = new LinkedList<>();
        que.add(V);
        checked[V] = true;
        System.out.print(V + " ");

        while(!que.isEmpty()){
            int temp = que.poll();

            for(int j=1; j<=N; j++){
                if(check[temp][j]==1 && !checked[j]){
                    que.add(j);
                    checked[j] = true;
                    System.out.print(j + " ");
                }
            }
        }
    }
}
