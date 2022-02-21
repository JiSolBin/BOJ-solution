import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class BOJ_2110 {
    static int N, C;
    static int[] home;
    static long min, max; // 공유기 최소, 최대 거리
    static long res;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        N = Integer.parseInt(st.nextToken());
        C = Integer.parseInt(st.nextToken());
        home = new int[N];

        for(int i=0; i<N; ++i){
            st = new StringTokenizer(br.readLine());
            home[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(home);

        min = 1;
        max = home[N-1] - home[0];

        binarySearch();

        System.out.println(res);
    }

    private static void binarySearch() {
        while (min <= max){
            long middle = (max+min)/2;
            int prev = home[0]; // 무조건 처음 집에 설치
            long cnt = 1;        // 설치된 공유기 count

            for(int i=0; i<N; ++i){
                int distance = home[i] - prev;

                if(distance >= middle){ // 이전 공유기와의 거리가 middle 보다 크거나 같음
                    ++cnt;
                    prev = home[i];
                }
            }

            // 설치된 공유기 개수가 C보다 많으면 간격을 넓힘
            if(cnt >= C){
                min = middle + 1;
                res = Math.max(res, middle);
            } else{
                max = middle - 1;
            }
        }
    }
}
