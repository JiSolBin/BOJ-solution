import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_1934 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        String str;
        StringTokenizer st;
        int N, M;
        for(int i=0; i<T; i++){
            str = br.readLine();
            st = new StringTokenizer(str);
            N = Integer.parseInt(st.nextToken());
            M = Integer.parseInt(st.nextToken());

            System.out.println(N*M/gcd(N,M));
        }
    }

    private static int gcd(int n, int m) {
        if (m == 0) return n;
        return gcd(m, n % m);
    }
}
