import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_1929 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int min = Integer.parseInt(st.nextToken());
        int max = Integer.parseInt(st.nextToken());

        //에라토스테네스의 체
        int[] arr = new int[max+1];
        arr[1] = 1;
        for(int i=2; i<=Math.sqrt(max); i++){
            if(arr[i] == 1)
                continue;
            for(int j=i*2; j<=max; j+=i)
                arr[j] = 1;
        }

        StringBuilder sb = new StringBuilder();
        for(int i=min; i<=max; i++){
            if(arr[i] == 0)
                sb.append(i + "\n");
        }

        System.out.println(sb);
    }
}
