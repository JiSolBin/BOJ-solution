import java.io.*;

public class BOJ_1992 {
    static int N;
    static boolean[][] arr;
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        N = Integer.parseInt(br.readLine());
        arr = new boolean[N][N];

        for(int i=0; i<N; ++i){
            String temp = br.readLine();
            for(int j=0; j<N; ++j){
                arr[i][j] = temp.charAt(j)=='1'?true:false;
            }
        }

        partition(0, 0, N);

        bw.write(sb.toString());
        bw.flush();
        bw.close();
    }

    private static void partition(int row, int col, int n) {
        int cnt = 0;

        for (int i=row; i<row+n; i++) {
            for (int j=col; j<col+n; j++) {
                if (arr[i][j] == true){
                    ++cnt;
                }
            }
        }

        // 0과 1이 섞여 있어서 한 번 더 나눠야 함
        if(cnt!=0 && cnt!=n*n){
            sb.append("(");
        }

        // 전부 0
        if (cnt == 0) {
            sb.append(0);
            return;
        }

        // 전부 1
        if (cnt == n*n) {
            sb.append(1);
            return;
        }

        partition(row, col, (n/2));							    	// 왼쪽 위
        partition(row, col + (n/2), (n/2));						// 오른쪽 위
        partition(row + (n/2), col, (n/2));					// 왼쪽 아래
        partition(row + (n/2), col + (n/2), (n/2));		// 오른쪽 아래

        sb.append(")");
    }
}
