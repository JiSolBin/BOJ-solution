import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class BOJ_10809 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] res = new int[26];
        Arrays.fill(res, -1);

        String S = br.readLine();
        for(int i=0; i<S.length(); i++){
            if(res[(int)S.charAt(i)-97] == -1)
                res[(int)S.charAt(i)-97] = i;
        }

        StringBuilder sb = new StringBuilder();
        for(int i=0; i<res.length; i++)
            sb.append(res[i] + " ");

        System.out.println(sb);
    }
}
