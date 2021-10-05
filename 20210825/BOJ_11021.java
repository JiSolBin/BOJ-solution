import java.util.Scanner;

public class BOJ_11021 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int T, A, B;

        T = scan.nextInt();
        for(int i=0; i<T; i++){
            A = scan.nextInt();
            B = scan.nextInt();
            System.out.println("Case #" + (i+1) + ": " + (A+B));
        }
    }
}
