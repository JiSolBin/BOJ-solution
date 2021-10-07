import java.util.Scanner;

public class BOJ_2133 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int [] dp = new int[N+1];

        dp[0] = 1;
        for(int i=2; i<=N; i++) {
            dp[i] = 3*dp[i-2];
            for(int j=i-4; j>=0; j-=2)
                //2 = 특별한 모양 2가지
                dp[i] += dp[j]*2;
        }

        System.out.println(dp[N]);
    }
}
