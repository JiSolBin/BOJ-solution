import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;

public class BOJ_10451 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        StringTokenizer st;
        while(--T >= 0){
            int N = Integer.parseInt(br.readLine());

            ArrayList<ArrayList<Integer>> arrayList = new ArrayList<>();
            for(int i=0; i<=N; ++i){
                arrayList.add(new ArrayList<>());
            }

            st = new StringTokenizer(br.readLine());
            for (int i=1; i<=N; ++i) {
                int n = Integer.parseInt(st.nextToken());
                arrayList.get(i).add(n);
            }

            boolean[] visited = new boolean[N + 1];
            int cnt = 0;
            for (int i=1; i<=N; i++) {
                if (!visited[i]) {
                    //visited[i] = true;
                    dfs(arrayList, visited, i);
                    ++cnt;
                }
            }
            System.out.println(cnt);
        }
    }

    public static void dfs(ArrayList<ArrayList<Integer>> arrayList, boolean[] visited, int start) {
        for (int i : arrayList.get(start)) {
            if (!visited[i]) {
                visited[i] = true;
                dfs(arrayList, visited, i);
            }
        }
    }
}
