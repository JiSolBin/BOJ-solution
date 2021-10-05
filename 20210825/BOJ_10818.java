import java.util.Scanner;

public class BOJ_10818 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int min = 1000001;
        int max = -1000001;
        int num;

        int N = scan.nextInt();
        for(int i=0; i<N; i++){
            num = scan.nextInt();

            if(num < min) min = num;
            if(num > max) max = num;
        }

        System.out.print(min + " " + max);
    }
}
