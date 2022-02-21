import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class BOJ_2805 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int[] tree = new int[N];

        st = new StringTokenizer(br.readLine());
        for(int i=0; i<N; ++i){
            tree[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(tree);

        System.out.println(binerySearch(M, tree));
    }

    private static long binerySearch(int m, int[] tree) {
        long left = 1;
        long right = tree[tree.length - 1];
        long mid = 0, cnt = 0, res = 0;

        while(left <= right) {
            mid = (left + right) / 2;
            cnt = cutTree(mid, tree);


            if(cnt == m){
                return mid;
            }

            // M 미터 이상일 때
            if(cnt >= m) {
                // M 미터 이상을 만드는 길이중 최댓값을 구한다.
                res = Math.max(mid, res);
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return res;
    }

    private static long cutTree(long length, int[] tree) {
        long cnt = 0;

        for(int w : tree) {
            cnt += w-length>=0 ? w-length : 0;
        }

        return cnt;
    }
}
