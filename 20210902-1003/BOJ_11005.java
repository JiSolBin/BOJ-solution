import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_11005 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int N = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());

        String res = "";
        while(N != 0){
            int remain = N%B;
            if(remain<=9) res = (char)(remain+'0')  + res;
            else res = (char)(remain + 'A' - 10) + res;

            N /= B;
        }

        System.out.println(res);
    }
}
