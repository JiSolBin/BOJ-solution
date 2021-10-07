import java.util.Scanner;

public class BOJ_11057 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        long[][] dp = new long[N+1][10];
        long res = 0;

        for(int i=0; i<=9; i++)
            dp[1][i] = 1;

        for(int i=2; i<=N; i++){
            for(int j=0; j<=9; j++){
                if(j==0) dp[i][j] = 1;
                else dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 10007;
            }
        }

        for(int i=0; i<=9; i++)
            res += dp[N][i];

        System.out.print(res % 10007);
    }
}
