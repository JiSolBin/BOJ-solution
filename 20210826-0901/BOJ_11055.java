import java.util.Scanner;

public class BOJ_11055 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] arr = new int[N];
        for(int i=0; i<N; i++)
            arr[i] = scan.nextInt();

        int[] dp = new int[N];
        int max = 0;

        dp[0] = arr[0];

        for(int i=1; i<N; i++){
            dp[i] = arr[i];
            for(int j=0; j<i; j++){
                if(arr[i]>arr[j] && dp[i]<dp[j]+arr[i])
                    dp[i] = dp[j]+arr[i];
            }
        }

        for(int i=0; i<N; i++)
            max = dp[i]>max ? dp[i] : max;

        System.out.println(max);
    }
}
