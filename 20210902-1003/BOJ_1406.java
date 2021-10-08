import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class BOJ_1406 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Character> left = new Stack<Character>();
        Stack<Character> right = new Stack<Character>();

        String str = br.readLine();
        int M = Integer.parseInt(br.readLine());

        for(int i=0; i<str.length(); i++)
            left.push(str.charAt(i));

        for(int i=0; i<M; i++){
            str = br.readLine(); //재활용

            if(str.charAt(0) == 'L'){
                if(left.empty()) continue;
                right.push(left.pop());
            }
            else if(str.charAt(0) == 'D'){
                if(right.empty()) continue;
                left.push(right.pop());
            }
            else if(str.charAt(0) == 'B'){
                if(left.empty()) continue;
                left.pop();
            }
            else
                left.push(str.charAt(2));
        }

        while(!left.empty())
            right.push(left.pop());

        StringBuilder sb = new StringBuilder();
        while(!right.empty())
            sb.append(right.pop());

        System.out.println(sb);
    }
}
