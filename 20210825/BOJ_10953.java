import java.util.Scanner;
import java.util.StringTokenizer;

public class BOJ_10953 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int T, A, B;
        String str;
        StringTokenizer st;

        T = scan.nextInt();
        for(int i=0; i<T; i++){
            str = scan.next();
            st = new StringTokenizer(str, ",");
            A = Integer.parseInt(st.nextToken());
            B = Integer.parseInt(st.nextToken());

            System.out.println(A+B);
        }
    }
}
