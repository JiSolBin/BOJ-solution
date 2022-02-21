import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class BOJ_10815 {
    static int N, M;
    static int[] arrN;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        N = Integer.parseInt(br.readLine());
        arrN = new int[N];
        st = new StringTokenizer(br.readLine());
        for(int i=0; i<N; ++i){
            arrN[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(arrN);

        M = Integer.parseInt(br.readLine());
        StringBuilder sb = new StringBuilder();
        st = new StringTokenizer(br.readLine());
        for(int i=0; i<M; ++i){
            int temp = Integer.parseInt(st.nextToken());
            sb.append(binarySearch(temp) + " ");
        }

        bw.write(sb.toString() + "\n");
        bw.flush();
        bw.close();
    }

    private static int binarySearch(int search) {
        int left = 0;
        int right = N-1;

        while(left <= right){
            int mid = (left+right)/2;

            if(search == arrN[mid])
                return 1;

            if(search > arrN[mid])
                left = mid+1;
            else
                right = mid-1;
        }

        return 0;
    }
}
