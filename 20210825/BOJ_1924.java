import java.util.Scanner;

public class BOJ_1924 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int x, y;
        int days = 0;

        int[] month = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        String[] week = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

        x = scan.nextInt();
        y = scan.nextInt();

        for(int i=0; i<x; i++) days += month[i];
        days += y;

        System.out.println(week[days%7]);
    }
}
