import java.io.*;
import java.util.StringTokenizer;

public class BOj_10816 {
    static int N, M;
    static int[] arrN;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        N = Integer.parseInt(br.readLine());
        arrN = new int[20000001];
        st = new StringTokenizer(br.readLine());
        for(int i=0; i<N; ++i){
            int input = Integer.parseInt(st.nextToken());
            arrN[10000000+input] += 1;
        }

        M = Integer.parseInt(br.readLine());
        StringBuilder sb = new StringBuilder();
        st = new StringTokenizer(br.readLine());
        for(int i=0; i<M; ++i){
            int target = Integer.parseInt(st.nextToken());
            sb.append(arrN[10000000 + target]).append(" ");
        }

        bw.write(sb.toString() + "\n");
        bw.flush();
        bw.close();
    }
}
