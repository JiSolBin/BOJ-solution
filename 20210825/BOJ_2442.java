import java.util.Scanner;

public class BOJ_2442 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int cnt = 1;

        for(int i=1; i<=N; i++){
            for(int k=0; k<N-i; k++)
                System.out.print(" ");
            for(int j=0; j<cnt; j++)
                System.out.print("*");
            System.out.println();
            cnt += 2;
        }
    }
}
