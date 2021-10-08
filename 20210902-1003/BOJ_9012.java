import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class BOJ_9012 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        Stack<String> stack = new Stack<String>();

        for(int i=0; i<T; i++){
            String str = br.readLine();
            int j;
            for(j=0; j<str.length(); j++){
                if(str.charAt(j) == '(') stack.push("(");
                else{
                    if(stack.empty()) break;
                    else stack.pop();
                }
            }
            if(j!=str.length() || !stack.empty()) System.out.println("NO");
            else System.out.println("YES");
            stack.clear();
        }
    }
}
