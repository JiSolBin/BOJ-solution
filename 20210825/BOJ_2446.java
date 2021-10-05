import java.util.Scanner;

public class BOJ_2446 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        N = 2*N-1;

        //상단
        for(int i=N; i>=1; i-=2){
            for(int j=0; j<(N-i)/2; j++)
                System.out.print(" ");
            for(int k=0; k<i; k++)
                System.out.print("*");
            System.out.println();
        }

        //하단
        for(int i=3; i<=N; i+=2){
            for(int j=0; j<(N-i)/2; j++)
                System.out.print(" ");
            for(int k=0; k<i; k++)
                System.out.print("*");
            System.out.println();
        }
    }
}
