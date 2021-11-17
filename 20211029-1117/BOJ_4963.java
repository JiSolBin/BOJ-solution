import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_4963 {
    static int w, h;
    static int[][] check;
    static boolean[][] visited;
    static int res;

    static int[] dx = {0, 0, 1, -1, -1, 1, -1, 1};
    static int[] dy = {1, -1, 0, 0, -1, 1, 1, -1};

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        while(true){
            st = new StringTokenizer(br.readLine());
            w = Integer.parseInt(st.nextToken());
            h = Integer.parseInt(st.nextToken());

            if(w==0 && h==0) break;

            check = new int[51][51];
            visited = new boolean[51][51];
            res = 0;

            for(int i=0; i<h; i++){
                st = new StringTokenizer(br.readLine());
                for(int j=0; j<w; ++j){
                    int val = Integer.parseInt(st.nextToken());
                    check[i][j] = val;
                }
            }

            for(int i=0; i<h; i++){
                for(int j=0; j<w; ++j){
                    if(check[i][j]==1 && !visited[i][j]){
                        search(i, j);
                        ++res;
                    }
                }
            }

            System.out.println(res);
        }
    }

    private static void search(int i, int j) {
        visited[i][j] = true;

        //8방향 확인
        for(int k=0; k<8; ++k){
            int nx = j+dx[k];
            int ny = i+dy[k];

            if(nx>=0 && ny>=0 && nx<w && ny<h){
                if(check[ny][nx]==1 && !visited[ny][nx]){
                    search(ny, nx);
                }
            }
        }
    }
}
