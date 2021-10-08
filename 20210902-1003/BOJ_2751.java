import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

//public class BOJ_2751 {
//    public static void main(String[] args) {
//        Scanner scan = new Scanner(System.in);
//        int N = scan.nextInt();
//        ArrayList<Integer> list = new ArrayList<>();
//        for(int i=0; i<N; i++)
//            list.add(scan.nextInt());
//
//        Collections.sort(list);
//
//        StringBuilder sb = new StringBuilder();
//        for(int value : list)
//            sb.append(value).append('\n');
//
//        System.out.println(sb);
//    }
//}

public class BOJ_2751 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        boolean[] arr = new boolean[2000001];

        for(int i=0; i<N; i++)
            arr[Integer.parseInt(br.readLine()) + 1000000] = true;

        StringBuilder sb = new StringBuilder();
        for(int i=0; i<arr.length; i++){
            if(arr[i])
                sb.append(i-1000000).append('\n');
        }

        System.out.println(sb);
    }
}