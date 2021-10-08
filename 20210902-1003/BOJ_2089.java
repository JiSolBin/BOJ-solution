import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class BOJ_2089 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        List<Integer> list = new ArrayList<>();
        int N = Integer.parseInt(br.readLine());

        if(N==0) System.out.println(N);

        while(N!=0){
            list.add(Math.abs(N%-2));
            N = (int)Math.ceil((double)N/-2);
        }

        for(int i=list.size()-1; i>=0; --i)
            System.out.print(list.get(i));
    }
}
