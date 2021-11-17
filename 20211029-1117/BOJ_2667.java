import java.io.IOException;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class BOJ_2667 {
    static final int[] dx= {0,0,1,-1};
    static final int[] dy = {1,-1,0,0};
    static final int[] aparts = new int[25*25];
    static int N;
    static int apartNum = 0; //아파트 단지 번호의 수
    static boolean[][] visited = new boolean[25][25]; //방문여부
    static int[][] map = new int[25][25]; //지도

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();

        for(int i=0; i<N; ++i){
            String input = sc.next();
            for(int j=0; j<N; ++j){
                map[i][j] = input.charAt(j)-'0';
            }
        }

        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(map[i][j]==1 && !visited[i][j]){
                    ++apartNum;
                    bfs(i,j);
                }
            }
        }

        Arrays.sort(aparts);
        System.out.println(apartNum);

        for (int apart : aparts) {
            if (apart == 0) continue;
            System.out.println(apart);
        }
    }

    private static void bfs(int x, int y) {
        //2차원 LinkedList를 가진 큐 선언
        Queue<int[]> que = new LinkedList<>();
        que.add(new int[]{x,y});
        visited[x][y] = true;
        aparts[apartNum]++;

        while(!que.isEmpty()){
            //x, y 값을 받아오기 위한 방법
            int curX = que.peek()[0];
            int curY = que.peek()[1];
            que.poll();

            for(int i=0; i<4; i++){
                int nx = curX + dx[i];
                int ny = curY + dy[i];

                if(nx>=0 && ny>=0 && nx<N && ny<N){
                    if(map[nx][ny]==1 && !visited[nx][ny]){
                        que.add(new int[]{nx,ny});
                        visited[nx][ny] = true;
                        aparts[apartNum]++;
                    }
                }
            }
        }
    }

//    private static void dfs(int x, int y) {
//        visited[x][y] = true;
//        aparts[apartNum]++;
//
//        for(int i=0; i<4; i++){
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//
//            if(nx>=0 && ny>=0 && nx<N && ny<N){
//                if(map[nx][ny] == 1 && !visited[nx][ny]){
//                    dfs(nx,ny);
//                }
//            }
//        }
//    }
}
