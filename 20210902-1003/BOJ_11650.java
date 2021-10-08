import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class BOJ_11650 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[][] arr = new int[N][2];

        StringTokenizer st;
        for(int i=0; i<N; i++){
            st = new StringTokenizer(br.readLine());
            arr[i][0] = Integer.parseInt(st.nextToken());
            arr[i][1] = Integer.parseInt(st.nextToken());
        }

        //인터페이스 오버라이딩 후 재정의
        Arrays.sort(arr, new Comparator<int[]>() {
            @Override
            public int compare(int[] e1, int[] e2) {
                if(e1[0] == e2[0])
                    return e1[1] - e2[1];
                else
                    return e1[0] - e2[0];
            }
        });

//        for(int i=0; i<arr.length; i++)
//            System.out.println(arr[i][0]+" "+arr[i][1]);

        StringBuilder sb = new StringBuilder();
        for(int i=0; i<arr.length; i++)
            sb.append(arr[i][0] + " " + arr[i][1] + '\n');

        System.out.println(sb);
    }
}
