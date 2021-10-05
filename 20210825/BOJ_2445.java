import java.util.Scanner;

public class BOJ_2445 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        //상단
        for(int i=1; i<=N; i++){
            for(int j=1; j<=i; j++)
                System.out.print("*");
            for(int k=0; k<(N*2-i*2); k++)
                System.out.print(" ");
            for(int j=1; j<=i; j++)
                System.out.print("*");

            System.out.println();
        }

        //하단
        for(int i=N-1; i>=1; i--){
            for(int j=1; j<=i; j++)
                System.out.print("*");
            for(int k=0; k<(N*2-i*2); k++)
                System.out.print(" ");
            for(int j=1; j<=i; j++)
                System.out.print("*");

            System.out.println();
        }
    }
}
