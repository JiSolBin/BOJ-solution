import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class BOJ_11728 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder sb = new StringBuilder();
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        int[] arrN = new int[N];
        int[] arrM = new int[M];

        st = new StringTokenizer(br.readLine());
        for(int i=0; i<N; ++i){
            arrN[i] = Integer.parseInt(st.nextToken());
        }

        st = new StringTokenizer(br.readLine());
        for(int i=0; i<M; ++i){
            arrM[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(arrN);
        Arrays.sort(arrM);

        int i = 0, j = 0, k = 0;
        while(i<N && j<M){
            if(arrN[i] > arrM[j]){
                sb.append(arrM[j++] + " ");
            }
            else{
                sb.append(arrN[i++] + " ");
            }
        }

        while(i<N) {
            sb.append(arrN[i++]+" ");
        }
        while(j<M) {
            sb.append(arrM[j++]+" ");
        }

        System.out.println(sb);
    }
}
