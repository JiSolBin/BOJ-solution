import java.util.Scanner;

public class BOJ_10844 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[][] dp = new int[N+1][10];
        int res = 0;

        for(int i=1; i<=9; i++)
            dp[1][i] = 1;

        for(int i=2; i<=N; i++){
            for(int j=0; j<=9; j++){
                if(j==0) dp[i][j] = dp[i-1][j+1];
                else if(j==9) dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];
            }
        }

        for(int i=0; i<=9; i++)
            res += dp[N][i];

        System.out.println(res);
    }
}
