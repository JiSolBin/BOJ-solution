import java.util.Scanner;

public class BOJ_11722 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N];
        for(int i=0; i<N; i++)
            A[i] = scan.nextInt();

        int max = 0;
        int[] dp = new int[N];
        dp[0] = 1;

        for(int i=1; i<N; i++){
            dp[i] = 1;
            for(int j=0; j<i; j++){
                if(A[i]<A[j] && dp[i]<dp[j]+1)
                    dp[i] = dp[j]+1;
            }
        }

        for(int i=0; i<N; i++)
            max = dp[i]>max ? dp[i] : max;

        System.out.println(max);
    }
}
