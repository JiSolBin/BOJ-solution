import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class BOJ_10825 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        String[][] str = new String[N][4];

        StringTokenizer st;
        for(int i=0; i<N; i++){
            st = new StringTokenizer(br.readLine());
            str[i][0] = st.nextToken();
            str[i][1] = st.nextToken();
            str[i][2] = st.nextToken();
            str[i][3] = st.nextToken();
        }

        Arrays.sort(str, new Comparator<String[]>() {
            @Override
            public int compare(String[] o1, String[] o2) {
                //국어 내림차순
                if(Integer.parseInt(o1[1]) > Integer.parseInt(o2[1]))
                    return -1;
                else if(Integer.parseInt(o1[1]) == Integer.parseInt(o2[1])) {
                    if (Integer.parseInt(o1[2]) == Integer.parseInt(o2[2])) {
                        if (Integer.parseInt(o1[3]) == Integer.parseInt(o2[3])) {
                            //국영수 모두 같음 -> 이름순
                            return o1[0].compareTo(o2[0]);
                        }
                        //국영 같음 -> 수학 내림차순
                        return Integer.compare(Integer.parseInt(o2[3]), Integer.parseInt(o1[3]));
                    }
                    //국어 같음 -> 영어 오름차순
                    return Integer.compare(Integer.parseInt(o1[2]), Integer.parseInt(o2[2]));
                }

                //return 0이면 BOJ에서 IllegalArgument 에러 발생
                return 1;
            }
        });

        StringBuilder sb = new StringBuilder();
        for(int i=0; i<N; i++)
            sb.append(str[i][0] + '\n');

        System.out.println(sb);
    }
}
