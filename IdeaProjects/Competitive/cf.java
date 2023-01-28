import javax.swing.*;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;

import static java.lang.Math.*;

public class cf {
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
    public static void popBack(List<Character> input) {
        input.remove(input.size() - 1);

//        System.out.println(input);
    }
    public static void front (List<Character> input) {
        System.out.println(input.get(0));
    }
    public static void back (List<Character> input) {
        System.out.println(input.get(input.size() - 1));
    }
    public static void swap (List<Character> input, int a, int b) {
        char temp = input.get(a);
        input.set(a, input.get(b));
        input.set(b, temp);

//        System.out.println(input);
    }
    public static void sort (List<Character> input, int beg, int end) {
        for (int i = beg; i <= end - 1; ++i) {
            for (int j = i + 1; j <= end; ++j) {
                if (input.get(i) > input.get(j))
                    swap(input, i, j);
            }
        }

//        System.out.println(input);
    }
    public static void reverse(List<Character> input, int beg, int end) {
        while (beg < end) {
            char ch = input.get(beg);
            input.set(beg, input.get(end));
            input.set(end, ch);
            beg++; end--;
        }

//        System.out.println(input);
    }
    public static void printPos(List<Character> input, int index) {
        System.out.println(input.get(index - 1));
    }
    public static void substr(List<Character> input, int beg, int end) {
        for (int i = beg; i <= end; ++i) {
            System.out.print(input.get(i));
        }
        System.out.println();
    }
    public static void pushback(List<Character> input, char ch) {
        input.add(ch);
    }

    public static void main(String[] args) throws IOException {
        FastReader s = new FastReader();
        int size = s.nextInt();
        String input = s.nextLine();
        List <Character> a = new ArrayList<>();
        for (int i = 0; i < input.length(); ++i) {
            a.add(input.charAt(i));
        }
        sort(a, 0, input.length() - 1);

        for (char c : a) System.out.print(c);
        System.out.println();
//        int size = s.nextInt();
//        int query = s.nextInt();
//        String a = s.nextLine();
//        List<Character> input = new ArrayList<>();
//        for (int i = 0; i < size; ++i) {
//            input.add(a.charAt(i));
//        }
//        System.out.println(input);
//        while (query-- > 0) {
//            String[] temp = s.nextLine().split(" ");
//            if (temp[0].equals("pop_back"))
//                popBack(input);
//            if (temp[0].equals("front"))
//                front(input);
//            if (temp[0].equals("back"))
//                back(input);
//            if (temp[0].equals("sort"))
//                sort(input, Integer.parseInt(temp[1]) - 1, Integer.parseInt(temp[2]) - 1);
//            if (temp[0].equals("reverse"))
//                reverse(input, Integer.parseInt(temp[1]) - 1, Integer.parseInt(temp[2]) - 1);
//            if (temp[0].equals("print"))
//                printPos(input, Integer.parseInt(temp[1]));
//            if (temp[0].equals("substr"))
//                substr(input, Integer.parseInt(temp[1]) - 1, Integer.parseInt(temp[2]) - 1);
//            if (temp[0].equals("push_back"))
//                pushback(input, temp[1].charAt(0));
//        }
    }

    public static void print(int[] input) {
        for (int c : input) {
            System.out.println("Size = " + input.length);
            System.out.print(c);
        }
    }
    public static boolean isPalindrome (String a) {
        int i = 0;
        int j = a.length() - 1;
        while (i < j) {
            if (a.charAt(i) != a.charAt(j))
                return false;
            i++; j--;
        }
        return true;
    }
}

/*  TIPS FOR CHAD :!
	- when stuck in number addition TLE, try "Cumulative Digit Array" <3
    - Take int[] as size using BufferedReader {ONLY WHEN GOING WITH BUFFERED READER ... xD}
        int[] input = Arrays.stream(br.readLine().split("\\s+")).mapToInt(Integer::parseInt).toArray();
	- Do NOT use Buffered Reader and fast Reader at once. It Sucks.. !!
	- Fast Reader NextLine() NOT WORKING.. avoid Using it..
*/