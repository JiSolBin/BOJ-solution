import java.util.Scanner;

public class BOJ_2522 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        //상단
        for(int i=1; i<=N; i++){
            for(int k=0; k<N-i; k++)
                System.out.print(" ");
            for(int j=0; j<i; j++)
                System.out.print("*");

            System.out.println();
        }

        //하단
        for(int i=N-1; i>=1; i--){
            for(int k=0; k<N-i; k++)
                System.out.print(" ");
            for(int j=0; j<i; j++)
                System.out.print("*");

            System.out.println();
        }
    }
}
