import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class BOJ_11656 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String S = br.readLine();
        String[] res = new String[S.length()];

        for(int i=0; i<S.length(); i++)
            res[i] = S.substring(i);

        Arrays.sort(res);

        StringBuilder sb = new StringBuilder();
        for(int i=0; i<S.length(); i++)
            sb.append(res[i] + "\n");

        System.out.print(sb);
    }
}