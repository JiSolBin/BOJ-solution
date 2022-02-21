import java.io.*;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class BOJ_11725 {
    static int N;
    static int[] parents;
    static ArrayList<Integer>[] list;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;

        N = Integer.parseInt(br.readLine());
        list = new ArrayList[N+1];
        parents = new int[N+1];
        
        for(int i=1; i<=N; i++){
            list[i] = new ArrayList<Integer>();
        }

        // list에 연결 정보 저장
        for(int i=1; i<N; i++){
            st = new StringTokenizer(br.readLine());
            int temp1 = Integer.parseInt(st.nextToken());
            int temp2 = Integer.parseInt(st.nextToken());
            list[temp1].add(temp2);
            list[temp2].add(temp1);
        }
        
        dfs(1);
        
        for(int i=2; i<=N; i++){
            bw.write(parents[i] + "\n");
        }
        bw.flush();
        bw.close();
    }

    private static void dfs(int now) {
        for(int child : list[now]){
            //이미 부모가 있다면
            if(parents[child] != 0) continue;

            parents[child] = now;
            dfs(child);
        }
    }
}
