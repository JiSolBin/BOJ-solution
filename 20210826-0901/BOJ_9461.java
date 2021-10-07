import java.util.Scanner;

public class BOJ_9461 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        int N;
        long[] dp = new long[101];

        dp[1] = dp[2] = dp[3] = 1;
        for(int j=3; j<=101; j++)
            dp[j] = dp[j-3] + dp[j-2];

        for(int i=0; i<T; i++){
            N = scan.nextInt();
            System.out.println(dp[N]);
        }
    }
}
