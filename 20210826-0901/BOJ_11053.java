import java.util.Scanner;

public class BOJ_11053 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N];
        int[] dp = new int[N];
        int max = 0;

        for(int i=0; i<N; i++){
            A[i] = scan.nextInt();
            dp[i] = 1;

            for(int j=0; j<i; j++){
                if(A[j] < A[i] && dp[i] < dp[j]+1)
                    dp[i] = dp[j] + 1;
            }

            //248ms
            //if(dp[i] > max) max = dp[i];
            //196ms
            //max = Math.max(dp[i], max);
            //172ms
            max = dp[i]>max ? dp[i] : max;
        }

        //188ms
//        for(int i=0; i<N; i++){
//            max = dp[i]>max ? dp[i] : max;
//        }
        System.out.println(max);
    }
}
