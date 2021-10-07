import java.util.Scanner;

public class BOJ_2193 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        long[] dp = new long[N+1];

        dp[0] = 0;
        dp[1] = 1;

        for(int i=2; i<=N; i++)
            dp[i] = dp[i-2] + dp[i-1];

        System.out.print(dp[N]);
    }
}
