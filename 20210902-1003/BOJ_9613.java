import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_9613 {
    private static int getGcd(int n, int m) {
        if (m == 0) return n;
        return getGcd(m, n % m);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        StringTokenizer st;
        while(--t >= 0){
            st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int[] arr = new int[n];

            for(int cnt=0; cnt<n; cnt++)
                arr[cnt] = Integer.parseInt(st.nextToken());

            long res = 0;
            for(int i=0; i<n-1; i++){
                for(int j=i+1; j<n; j++)
                    res += getGcd(arr[i], arr[j]);
            }

            System.out.println(res);
        }
    }
}
