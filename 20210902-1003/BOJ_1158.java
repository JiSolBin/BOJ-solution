import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class BOJ_1158 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Deque<Integer> dq = new ArrayDeque<>();

        String str = br.readLine();
        StringTokenizer st = new StringTokenizer(str);

        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        for(int i=1; i<=N; i++)
            dq.addLast(i);

        int cnt = 1;

        System.out.print("<");

        while(!dq.isEmpty()){
            if(cnt%K == 0){
                System.out.print(dq.removeFirst());
                if(!dq.isEmpty())
                    System.out.print(", ");
            }
            else
                dq.addLast(dq.removeFirst());

            ++cnt;
        }

        System.out.println(">");
    }
}
