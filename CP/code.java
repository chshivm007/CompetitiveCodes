import java.util.*;
import java.io.*;

public class code {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
  
        public FastReader()
        {
            br = new BufferedReader(
                new InputStreamReader(System.in));
        }
  
        String next()
        {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
  
        int nextInt() { return Integer.parseInt(next()); }
  
        long nextLong() { return Long.parseLong(next()); }
  
        double nextDouble()
        {
            return Double.parseDouble(next());
        }
  
        String nextLine()
        {
            String str = "";
            try {
                if(st.hasMoreTokens()){
                    str = st.nextToken("\n");
                }
                else{
                    str = br.readLine();
                }
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    public static boolean isPrime(long num) {
        if (num == 2)
            return true;
        if  (num == 1)
            return false;
        for (int i = 2; i <= (int)Math.sqrt(num); ++i) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
    public static void main(String[] args) {
        FastReader s = new FastReader();
        String str = s.next();
        int upper = 0;

        for (int i = 0; i < str.length(); ++i) {
            if ('A' <= str.charAt(i) && str.charAt(i) <= 'Z')
                ++upper;
        }
        if (str.length() / 2 < upper)
            System.out.println(str.toUpperCase());
        else System.out.println(str.toLowerCase());
    }
}
// int[] input = Arrays.stream(br.readLine().split("\\s+")).mapToInt(Integer::parseInt).toArray();
