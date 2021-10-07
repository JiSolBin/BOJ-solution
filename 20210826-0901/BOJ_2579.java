import java.util.Scanner;

public class BOJ_2579 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] arr = new int[N+1];
        for(int i=1; i<=N; i++)
            arr[i] = scan.nextInt();

        int[] dp = new int[N+1];
        dp[0] = 0;
        dp[1] = arr[1];
        if(N>=2) dp[2] = arr[1] + arr[2];

        for(int i=3; i<=N; i++){
            //항상 마지막 값은 게산에 포함되어야 한다..?
            //if(i==N) dp[i] = Math.max(dp[i-3]+arr[i-1]+arr[i], dp[i-2]+arr[i]);
            //else dp[i] = Math.max(Math.max(dp[i-3]+arr[i-1]+arr[i], dp[i-2]+arr[i]), dp[i-1]);
            dp[i] = Math.max(dp[i-3]+arr[i-1], dp[i-2]) + arr[i];


        }

        System.out.println(dp[N]);
    }
}
