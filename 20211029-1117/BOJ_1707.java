import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class BOJ_1707 {
    static int V, E;
    static ArrayList<Integer>[] arrayList;
    static int[] visited;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int K = Integer.parseInt(st.nextToken());

        for(int i=0; i<K; i++) {
            st = new StringTokenizer(br.readLine());
            V = Integer.parseInt(st.nextToken());
            E = Integer.parseInt(st.nextToken());
            visited = new int[V+1];
            arrayList = new ArrayList[V+1];

            for(int j=0; j<=V; ++j)
                arrayList[j] = new ArrayList<Integer>();

            for(int j=0; j<E; ++j) {
                st = new StringTokenizer(br.readLine());
                int x = Integer.parseInt(st.nextToken());
                int y = Integer.parseInt(st.nextToken());

                arrayList[x].add(y);
                arrayList[y].add(x);
            }

            bfs();
        }
    }

    public static void bfs() {
        Queue<Integer> queue = new LinkedList<Integer>();

        for(int i=1; i<=V; i++) {
            if(visited[i] == 0) {
                queue.add(i);
                visited[i] = 1;
            }

            while(!queue.isEmpty()) {
                int now = queue.poll();

                for(int j=0; j<arrayList[now].size(); ++j) {
                    if(visited[arrayList[now].get(j)] == 0) {
                        queue.add(arrayList[now].get(j));
                    }

                    if(visited[arrayList[now].get(j)] == visited[now]) {
                        System.out.println("NO");
                        return;
                    }

                    if(visited[now]==1 && visited[arrayList[now].get(j)]==0)
                        visited[arrayList[now].get(j)] = 2;
                    else if(visited[now] == 2 && visited[arrayList[now].get(j)] == 0)
                        visited[arrayList[now].get(j)] = 1;
                }
            }
        }

        System.out.println("YES");
    }
}
