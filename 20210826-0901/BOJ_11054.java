import java.util.Scanner;

public class BOJ_11054 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int[] A = new int[N];
        for(int i=0; i<N; i++)
            A[i] = scan.nextInt();

        int max = 0;
        int[] dp1 = new int[N];
        int[] dp2 = new int[N];
        dp1[0] = 1;
        dp2[N-1] = 1;

        //증가
        for(int i=1; i<N; i++){
            dp1[i] = 1;
            for(int j=0; j<i; j++){
                if(A[i]>A[j] && dp1[i]<dp1[j]+1)
                    dp1[i] = dp1[j]+1;
            }
        }

        //감소
        for(int i=N-2; i>=0; i--){
            dp2[i] = 1;
            for(int j=N-1; j>i; j--){
                if(A[i]>A[j] && dp2[i]<dp2[j]+1)
                    dp2[i] = dp2[j]+1;
            }
        }

        for(int i=0; i<N; i++)
            max = Math.max(dp1[i] + dp2[i], max);

        System.out.println(max-1);
    }
}
