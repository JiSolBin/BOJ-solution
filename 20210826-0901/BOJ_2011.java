import java.util.Scanner;

public class BOJ_2011 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = "0" + scan.next();
        long[] dp = new long[str.length()];

        dp[0] = 1;
        for(int i=1; i<str.length(); i++){
            //한자리
            if(str.charAt(i) != '0')
                dp[i] = (dp[i-1] + dp[i]) % 1000000;

            //두자리
            int temp = Integer.parseInt(str.substring(i-1, i+1));
            if(10 <= temp && temp <= 26)
                dp[i] = (dp[i-2] + dp[i]) % 1000000;
        }

        System.out.println(dp[str.length()-1] % 1000000);
    }
}
