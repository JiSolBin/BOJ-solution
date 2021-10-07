import java.util.Scanner;

public class BOJ_11052 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] P = new int[N+1];
        int[] dp = new int[N+1];

        for(int i=1; i<=N; i++)
            P[i] = scan.nextInt();

        dp[1] = P[1];
        for(int i=2; i<=N; i++){
            for (int j=1; j<=i; j++)
                dp[i] = Math.max(dp[i], dp[i-j]+P[j]);
        }

        System.out.println(dp[N]);
    }
}
