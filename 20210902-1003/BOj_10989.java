import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOj_10989 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[10001];

        for(int i=0; i<N; i++)
            ++arr[Integer.parseInt(br.readLine())];

        br.close();

        StringBuilder sb = new StringBuilder();
        for(int i=1; i<arr.length; ++i){
            if(arr[i] != 0){
                int temp = arr[i];
                for(int j=0; j<temp; ++j)
                    //왜...왜 append(i + '\n') 안되지??
                    //sb.append(i).append('\n');
                    sb.append(i + "\n");
            }
//            while(arr[i]>0){
//                sb.append(i).append('\n');
//                arr[i]--;
//            }
        }

        System.out.print(sb);
    }
}
