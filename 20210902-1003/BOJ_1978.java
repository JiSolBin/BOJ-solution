import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class BOJ_1978 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());

        //에라토스테네스의 체
        int[] arr = new int[1001];
        arr[0] = arr[1] = 1;
        for(int i=2; i<=32; i++){
            if(arr[i] == 1)
                continue;
            for(int j=i*2; j<=1000; j+=i)
                arr[j] = 1;
        }

        int num, res = 0;
        while(--N >= 0){
            num = Integer.parseInt(st.nextToken());
            if(arr[num] == 0) ++res;
        }

        System.out.println(res);
    }
}
