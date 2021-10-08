import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class BOJ_10820 {
    public static void main(String[] args) throws IOException {
        //BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner scan = new Scanner(System.in);

        while(scan.hasNext()){
            int[] res = new int[4];
            String str = scan.nextLine();

            for(int i=0; i<str.length(); i++){
                char c = str.charAt(i);
                if(c>='a' && c<='z') ++res[0];
                else if(c>='A' && c<='Z') ++res[1];
                else if(c>='0' && c<='9') ++res[2];
                else if(c==' ') ++res[3];
            }

            //주석 안된게 더 빠름!!
            //System.out.println(res[0] + " " + res[1] + " " + res[2] + " " + res[3]);
            StringBuilder sb = new StringBuilder();
            for(int i : res)
                sb.append(i + " ");

            System.out.println(sb);
        }
    }
}
