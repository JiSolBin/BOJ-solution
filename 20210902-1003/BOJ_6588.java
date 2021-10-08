import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ_6588 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        //에라토스테네스의 체
        int[] arr = new int[1000001];
        for(int i=3; i<=Math.sqrt(1000000); i++){
            if(arr[i] == 1)
                continue;
            for(int j=i*2; j<=1000000; j+=i)
                arr[j] = 1;
        }

        while(true){
            int n = Integer.parseInt(br.readLine());
            int a, b = 0;

            if(n==0) break;

            for(a=3; a<=n-3; a+=2){
                if(arr[a]==0 && arr[n-a]==0) {
                    b = n - a;
                    break;
                }
            }

            if(b!=0) System.out.println(n + " = " + a + " + " + (n-a));
            else System.out.println("Goldbach's conjecture is wrong.");
        }
    }
}
