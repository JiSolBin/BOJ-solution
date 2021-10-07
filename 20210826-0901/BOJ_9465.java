import java.util.Scanner;

import static java.lang.Math.max;

public class BOJ_9465 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();

        for(int i=0; i<T; i++){
            int n = scan.nextInt();
            int arr[][] = new int[2][n + 1];
            for(int k=0; k<=1; k++){
                for(int j=1; j<=n; j++)
                    arr[k][j] = scan.nextInt();
            }

            int[][] dp = new int[2][n + 1];
            dp[0][1] = arr[0][1];
            dp[1][1] = arr[1][1];

            for(int j=2; j<=n; j++){
                dp[0][j] = arr[0][j] + max(dp[1][j-2], dp[1][j-1]);
                dp[1][j] = arr[1][j] + max(dp[0][j-2], dp[0][j-1]);
            }

            System.out.println(max(dp[0][n], dp[1][n]));
        }
    }
}
