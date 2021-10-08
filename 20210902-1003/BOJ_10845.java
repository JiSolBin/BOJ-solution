import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class BOJ_10845 {
    public static void main(String[] args) throws IOException {
        Queue<String> que = new LinkedList<String>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        String back = "";

        StringTokenizer st;
        for(int i=0; i<N; i++){
            st = new StringTokenizer(br.readLine());
            String token = st.nextToken();
            if(token.equals("push")) {
                back = st.nextToken();
                que.add(back);
            }
            else if(token.equals("pop")) System.out.println(que.isEmpty()?-1:que.poll());
            else if(token.equals("size")) System.out.println(que.size());
            else if(token.equals("empty")) System.out.println(que.isEmpty()?1:0);
            else if(token.equals("front")) System.out.println(que.isEmpty()?-1:que.peek());
            else if(token.equals("back")) System.out.println(que.isEmpty()?-1:back);
        }
    }
}
