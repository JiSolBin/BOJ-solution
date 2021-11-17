import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class BOJ_2178 {
    static final int[] dx= {0,0,1,-1};
    static final int[] dy = {1,-1,0,0};
    static int N;
    static int M;
    static boolean[][] visited;
    static int[][] map;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        map = new int[N][M];
        for(int i=0; i<N; i++) {
            String s = br.readLine();
            for(int j=0; j<M; j++) {
                map[i][j] = s.charAt(j) - '0';
            }
        }

        visited = new boolean[N][M];
        visited[0][0] = true;
        bfs(0, 0);
        System.out.println(map[N-1][M-1]);
    }

    public static void bfs(int x, int y) {
        Queue<int[]> que = new LinkedList<>();
        que.add(new int[] {x,y});

        while(!que.isEmpty()) {
            int[] now = que.poll();
            int nowX = now[0];
            int nowY = now[1];

            for(int i=0; i<4; i++) {
                int nextX = nowX + dx[i];
                int nextY = nowY + dy[i];

                if(nextX>=0 && nextY>=0 && nextX<N && nextY<M){
                    if(map[nextX][nextY]==1 && !visited[nextX][nextY]){
                        que.add(new int[] {nextX,nextY});
                        map[nextX][nextY] = map[nowX][nowY] + 1;
                        visited[nextX][nextY] = true;
                    }
                }
            }
        }
    }
}
