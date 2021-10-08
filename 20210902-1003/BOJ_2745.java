import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_2745 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        String N = st.nextToken();
        int B = Integer.parseInt(st.nextToken());

        //k*N을 따로 만드는 것 보다 이런식으로 거듭제곱 해주는게 빠름
        long res = 0;
        for(int i = 0; i < N.length(); i++){
            char k = N.charAt(i);
            if(k>='0' && k<='9') res = res*B + (k-'0');
            else res = res*B + (k-'A'+10);
        }

        System.out.println(res);
    }
}
