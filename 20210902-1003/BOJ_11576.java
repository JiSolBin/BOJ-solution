import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class BOJ_11576 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        st = new StringTokenizer(br.readLine());
        List<Integer> list = new ArrayList<>();

        int A = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(br.readLine());

        //10진법으로 변환
        int num10 = 0;
        st = new StringTokenizer(br.readLine());

        for(int i=m-1; i>=0; i--) {
            int num = Integer.parseInt(st.nextToken());
            int multi = (int)Math.pow(A, i); //A*3이면 A*A*A
            num10 += num*multi;
        }

        //10진법에서 B진법으로 변환
        while(num10 != 0){
            list.add(num10%B);
            num10 /= B;
        }

        for(int i=list.size()-1; i>=0; i--){
            if(i==0) System.out.println(list.get(i));
            else System.out.print(list.get(i) + " ");
        }
    }
}
