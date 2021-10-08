import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class BOJ_10799 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Character> stack = new Stack<Character>();
        int left = 0, res = 0;

        String str = br.readLine();
        for(int i=0; i<str.length(); i++){
            if(str.charAt(i) == '(') {
                ++left;
                stack.push('(');
            }
            else {
                --left;
                res += stack.peek()=='('? left : 1;
                stack.push(')');
            }
        }

        System.out.println(res);
    }
}
