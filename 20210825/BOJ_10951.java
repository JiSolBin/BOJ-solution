import java.util.Scanner;

public class BOJ_10951 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int A, B;

        while(scan.hasNextInt()){
            A = scan.nextInt();
            B = scan.nextInt();
            System.out.println(A+B);
        }
    }
}
