import java.util.Scanner;

public class BOJ_1912 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] arr = new int[N];
        for(int i=0; i<N; i++)
            arr[i] = scan.nextInt();

        int max = arr[0];
        int[] dp = new int[N];
        dp[0] = arr[0];

        //연속합 구하기
        for(int i=1; i<N; i++){
            dp[i] = Math.max(dp[i-1] + arr[i], arr[i]);
            max = Math.max(dp[i], max);
        }

        System.out.println(max);
    }
}
