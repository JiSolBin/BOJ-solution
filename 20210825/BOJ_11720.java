import java.util.Scanner;

public class BOJ_11720 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N;
        String str;
        int res = 0;

        N = scan.nextInt();
        str = scan.next();

        for(int i=0; i<N; i++){
            res += str.charAt(i)-'0';
        }

        System.out.print(res);
    }
}
