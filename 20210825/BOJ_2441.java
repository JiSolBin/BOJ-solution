import java.util.Scanner;

public class BOJ_2441 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        for(int i=N; i>=1; i--){
            for(int k=0; k<N-i; k++)
                System.out.print(" ");
            for(int j=0; j<i; j++)
                System.out.print("*");
            System.out.println();
        }
    }
}
