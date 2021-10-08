import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_11655 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        String S = br.readLine();

        for(int i=0; i<S.length(); i++){
            int code = S.charAt(i);

            if(code>='A' && code<='Z'){
                code += 13;
                if(code > 90) code = 65 + (code-91);
            }
            else if(code>='a' && code<='z'){
                code += 13;
                if(code > 122) code = 97 + (code-123);
            }

            sb.append((char)code);
        }

        System.out.println(sb);
    }
}
