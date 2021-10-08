import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

//아니면 String[][]에 값 받아서 Array.sort(인터페이스 재정의)로 정렬
public class BOJ_10814 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringBuilder[] temp = new StringBuilder[201];

        //객체배열의 인덱스에 각 StringBuilder 객체를 생성
        for(int i=0; i< temp.length; i++)
            temp[i] = new StringBuilder();

        for(int i=0; i<N; i++){
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int age = Integer.parseInt(st.nextToken());
            String name = st.nextToken();

            temp[age].append(age + " " + name + '\n');
        }

        StringBuilder sb = new StringBuilder();
        for(StringBuilder val : temp)
            sb.append(val);

        System.out.println(sb);
    }
}
