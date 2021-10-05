import java.util.Scanner;

public class BOJ_11721 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();

        for(int i=1; i<=str.length(); i++){
            System.out.print(str.charAt(i-1));
            if(i%10 == 0) System.out.println();
        }
    }
}
