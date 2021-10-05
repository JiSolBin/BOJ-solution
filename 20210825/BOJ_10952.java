import java.util.Scanner;

public class BOJ_10952 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int A, B;

        while(true){
            A = scan.nextInt();
            B = scan.nextInt();

            if(A==0 && B==0) break;

            System.out.println(A+B);
        }
    }
}
