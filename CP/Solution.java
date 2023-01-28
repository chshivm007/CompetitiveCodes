import java.io.*;
import java.util.*;

public class Solution 
{
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

    public static void main(String[] args) throws NumberFormatException, IOException {
        FastReader s = new FastReader();
        int test = s.nextInt();
        while (test-- > 0) {
            int[] ar = new int[4];
            for (int i = 0; i < 4; ++i) {
                ar[i] = s.nextInt();
            }
            int result = ar[0], a = ar[0], b = ar[0]; 

            if (ar[1] > ar[2]) {
                result += ar[2];
                b += ar[2];
                a -= ar[2];
                ar[2] = 0;
            }
            else {
                result += ar[1];
                a +=  ar[1];
                b -= ar[1];
                ar[1] = 0;
            }

            while (true) {
                if (ar[1] == 0 && a == 0 || ar[2] == 0 && b == 0)
                    break;

                
            }
        }
    }
}