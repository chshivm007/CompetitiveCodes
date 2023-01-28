import java.io.*;
import java.util.*;


public class newJava 
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
        // BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        // String s = "314159265358979323846264338327";
        int test = s.nextInt();
        while (test -- > 0) {
            int size = s.nextInt();
            int[][] ar = new int[size][size-1];
            List<Integer> result = new ArrayList<>();
            
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size - 1; ++j) {
                    ar[i][j] = s.nextInt();
                }
            }
            int[] check = new int[size];            
            for (int i = 0; i < size - 1; ++i) {
                result.add(ar[0][i]);
                ++check[ar[0][i] - 1];
            }

            int missing = 0;
            for (int i = 0; i < size; ++i) {
                if (check[i] == 0) {
                    missing = i + 1;
                    break;
                }
            }
            
            int prev = 0, next = 0;
            for (int i = 1; i < 2; ++i) {
                for (int j = 0; j < size - 1; ++j) {
                    if (ar[i][j] == missing) {
                        if (j == 0)
                            next = ar[i][j+1];
                        else if (j == size - 2)
                            prev = ar[i][j-1];
                        else {
                            prev = ar[i][j-1];
                            next = ar[i][j+1];
                        }
                    }

                }
            }
            int getIndex = 0;
            for (int i = result.size() - 1; i >= 0 ;--i) {
                if (result.get(i) == prev) {
                    getIndex = i + 1;
                    break;
                }
            }
            result.add(getIndex, missing);

            for (int i = 0; i < size; ++i) {
                System.out.print(result.get(i) + " ");
            }
            System.out.println();


        }
    }

}   

