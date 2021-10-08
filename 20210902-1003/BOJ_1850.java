import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_1850 {
    private static long getGcd(long n, long m) {
        if (m == 0) return n;
        return getGcd(m, n % m);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        long A = Long.parseLong(st.nextToken());
        long B = Long.parseLong(st.nextToken());

        int gcd = (int) getGcd(A, B);

        StringBuilder sb = new StringBuilder();
        for(int i=0; i<gcd; i++)
            sb.append(1);

        System.out.println(sb);
    }
}