import java.util.*;
import java.io.*;

public class code {

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int test = Integer.parseInt(br.readLine());
        while (test-- > 0) {
            int num = Integer.parseInt(br.readLine());
            System.out.println(num);
        }
    }
}
// int[] input = Arrays.stream(br.readLine().split("\\s+")).mapToInt(Integer::parseInt).toArray();
