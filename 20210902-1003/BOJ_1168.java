import java.io.*;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class BOJ_1168 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        ArrayList<Integer> arrayList = new ArrayList<>();

        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken()) - 1;

        for(int i=1; i<=N; i++)
            arrayList.add(i);

        int cnt = 0;
        StringBuilder sb = new StringBuilder();
        sb.append("<");
        for(int i=0; i<N-1; i++){
            cnt += K;

            //자꾸 바뀌니까 N하면 안됨!!!!
            if(cnt >= arrayList.size())
                cnt %= arrayList.size();

            sb.append(arrayList.remove(cnt) + ", ");
        }
        sb.append(arrayList.remove(0) + ">");

        //System.out.println(sb);
        bw.write(sb.toString() + "\n");
        bw.flush();
        bw.close();
        br.close();
    }
}
