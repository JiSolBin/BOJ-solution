import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_9466 {
    static int n;
    static int[] arr;
    static int cnt = 0;
    static boolean[] visited;
    static boolean[] finished;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int T = Integer.parseInt(br.readLine());

        for(int i=0; i<T; ++i) {
            n = Integer.parseInt(br.readLine());
            arr = new int[n+1];
            visited = new boolean[n+1];
            finished = new boolean[n+1];
            cnt = 0;

            st = new StringTokenizer(br.readLine());
            for(int j=1; j<=n; ++j){
                arr[j] = Integer.parseInt(st.nextToken());
            }

            for(int j=1; j<=n; ++j){
                dfs(j);
            }

            System.out.println(n - cnt);
        }
    }

    static void dfs(int now) {
        if(visited[now]) return;

        visited[now] = true;
        int next = arr[now];

        if (!visited[next])
            dfs(next);
        else {
            if (!finished[next]) {
                ++cnt;
                for (int i=next; i!=now; i=arr[i])
                    ++cnt;
            }
        }

        finished[now] = true;
    }
}
