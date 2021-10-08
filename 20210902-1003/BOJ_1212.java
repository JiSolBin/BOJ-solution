import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_1212 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int[] arr = {4, 2, 1};
        String N = br.readLine();

        StringBuilder temp;
        for(int i=0; i<N.length(); i++){
            int n = (int)N.charAt(i)-'0';
            temp = new StringBuilder();

            for(int j=0; j<3; j++){
                if(n-arr[j] >= 0) {
                    temp.append(1);
                    n -= arr[j];
                }
                else temp.append(0);
            }

            sb.append(temp);
        }

        while(sb.length()>1 && sb.charAt(0)=='0') sb.deleteCharAt(0);
        System.out.println(sb);
    }
}