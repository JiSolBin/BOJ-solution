import java.util.Scanner;

public class BOJ_10992 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int blank;

        for(int i=1; i<N; i++){
            for(int j=0; j<N-i; j++)
                System.out.print(" ");
            System.out.print("*");

            blank = i*2-2;
            for(int k=1; k<blank; k++){
                System.out.print(" ");
                if(k == blank-1) System.out.print("*");
            }
            System.out.println();
        }

        for(int g=0; g<N*2-1; g++)
            System.out.print("*");
    }
}