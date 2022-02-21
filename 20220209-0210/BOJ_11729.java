import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_11729 {
    static StringBuilder sb = new StringBuilder();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int K = Integer.parseInt(br.readLine());

        sb.append((int) (Math.pow(2, K) - 1)).append("\n");
        move(K, 1, 2, 3);

        System.out.println(sb);
    }

    // n : 원판 개수
    // from : 출발지
    // to : 도착지
    // middle : 옮기기 위해 이동해야 할 장소

    private static void move(int k, int from, int middle, int to) {
        if (k == 1) {
            sb.append(from + " " + to + "\n");
            return;
        }
        else if (k >= 2) {
            // 가장 큰 원판이 to로 이동하려면 n-1개의 원판이 middle에 위치해야함

            move(k-1, from, to, middle); // from -> middle
            sb.append(from + " " + to + "\n");
            move(k-1, middle, from, to); // middle -> to
        }
    }
}
