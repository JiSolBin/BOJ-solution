import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_10808 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] cnt = new int[26];

        String S = br.readLine();
        for(int i=0; i<S.length(); i++)
            ++cnt[(int)S.charAt(i)-97];

        StringBuilder sb = new StringBuilder();
        for(int i=0; i<cnt.length; i++)
            sb.append(cnt[i] + " ");

        System.out.println(sb);
    }
}
