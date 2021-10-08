import java.io.*;
import java.util.Arrays;

public class BOJ_11652 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());
        long[] card = new long[N];
        for(int i=0; i<N; ++i)
            card[i] = Long.parseLong(br.readLine());

        Arrays.sort(card);

        int cnt = 1, max = 1;
        long res = card[0];
        for(int i=1; i<N; i++){
            if(card[i-1] == card[i])
                ++cnt;
            else
                cnt = 1;

            if(max<cnt) {
                max = cnt;
                res = card[i];
            }
        }

        //System.out.println(res);
        bw.write(res + "\n");
        br.close(); bw.flush(); bw.close();
    }
}
