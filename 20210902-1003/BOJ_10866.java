import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Deque;
import java.util.LinkedList;
import java.util.StringTokenizer;

public class BOJ_10866 {
    public static void main(String[] args) throws IOException {
        Deque<String> dq = new LinkedList<String>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        StringTokenizer st;
        for(int i=0; i<N; i++){
            st = new StringTokenizer(br.readLine());
            String token = st.nextToken();
            if(token.equals("push_front")) dq.addFirst(st.nextToken());
            if(token.equals("push_back")) dq.addLast(st.nextToken());
            else if(token.equals("pop_front")) System.out.println(dq.isEmpty()?-1:dq.pollFirst());
            else if(token.equals("pop_back")) System.out.println(dq.isEmpty()?-1:dq.pollLast());
            else if(token.equals("size")) System.out.println(dq.size());
            else if(token.equals("empty")) System.out.println(dq.isEmpty()?1:0);
            else if(token.equals("front")) System.out.println(dq.isEmpty()?-1:dq.peekFirst());
            else if(token.equals("back")) System.out.println(dq.isEmpty()?-1:dq.peekLast());
        }
    }
}
