import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class BOJ_1654 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        int[] wire = new int[N];

        for(int i=0; i<N; ++i){
            wire[i] = Integer.parseInt(br.readLine());
        }

        Arrays.sort(wire);

        System.out.println(binerySearch(K, wire));
    }

    private static long binerySearch(int k, int[] wire) {
        long left = 1;
        long right = wire[wire.length - 1];
        long mid = 0, cnt = 0, res = 0;

        while(left <= right) {
            mid = (left + right) / 2;
            cnt = cutWire(mid, wire);

            // K 개 이상일 때
            if(cnt >= k) {
                // K개 이상을 만드는 길이중 최댓값을 구한다.
                res = Math.max(mid, res);
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return res;
    }

    private static int cutWire(long length, int[] wire) {
        int cnt = 0;

        for(int w : wire) {
            cnt += w / length;
        }

        return cnt;
    }
}
