import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_2225 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        int[][] dp = new int[N][K];

        //1행 1열
        for(int i=1; i<=K; i++){
            dp[0][i-1] += i;
        }

        for(int i=1; i<N; i++){
            for(int j=0; j<K; j++){
                if(j==0)
                    dp[i][j] = 1;
                else
                    dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 1000000000;
            }
        }

        System.out.println(dp[N-1][K-1]);
    }
}
