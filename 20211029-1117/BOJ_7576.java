import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class BOJ_7576 {
    static final int[] dx= {0,0,1,-1};
    static final int[] dy = {1,-1,0,0};
    static int M, N;
    static int cnt;
    static Queue<int[]> que;
    static int[][] box;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        M = Integer.parseInt(st.nextToken());
        N = Integer.parseInt(st.nextToken());

        box = new int[N][M];
        que = new LinkedList<>();
        for(int i=0; i<N; i++) {
            st = new StringTokenizer(br.readLine());
            for(int j=0; j<M; j++) {
                box[i][j] = Integer.parseInt(st.nextToken());
                if(box[i][j]==1) //익은 토마토면 큐에 넣기
                    que.add(new int[] {i, j});
            }
        }

        System.out.println(bfs());
    }

    public static int bfs() {
        while(!que.isEmpty()) {
            int[] now = que.poll();
            int nowX = now[0];
            int nowY = now[1];

            for(int i=0; i<4; i++) {
                int nextX = nowX + dx[i];
                int nextY = nowY + dy[i];

                //상자 안에 안 익은 토마토
                if(nextX>=0 && nextY>=0 && nextX<N && nextY<M){
                    if(box[nextX][nextY]==0){
                        que.add(new int[] {nextX,nextY});
                        box[nextX][nextY] = box[nowX][nowY]+1;
                    }
                }
            }
        }

        for(int i=0; i<N; ++i){
            for(int j=0; j<M; j++) {
                if(box[i][j]==0)
                    return -1;

                cnt = Math.max(cnt, box[i][j]);
            }
        }

        if(cnt==1) return 0;
        else return cnt-1;
    }
}
