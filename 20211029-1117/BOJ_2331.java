import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class BOJ_2331 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int A = Integer.parseInt(st.nextToken());
        int P = Integer.parseInt(st.nextToken());
        List<Integer> list = new ArrayList<>();
        list.add(A);

        while(true){
            int temp = list.get(list.size() - 1);

            int val = 0;
            while (temp != 0) {
                val += (int)Math.pow(temp % 10, P);
                temp /= 10;
            }

            if (list.contains(val)) {
                int res = list.indexOf(val);
                System.out.println(res);
                break;
            }

            list.add(val);
        }
    }
}