import java.util.Scanner;

public class BOJ_9095 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int T, n;
        int[] dp = new int[12];
        dp[0] = 0; dp[1] = 1; dp[2] = 2; dp[3] = 4;

        for(int j=4; j<=11; j++)
            dp[j] = dp[j-3] + dp[j-2] + dp[j-1];

        T = scan.nextInt();
        for(int i=0; i<T; i++){
            n = scan.nextInt();
            System.out.println(dp[n]);
        }
    }
}
