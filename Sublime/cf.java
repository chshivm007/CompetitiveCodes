import java.io.*;
import java.util.*;

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

	public static boolean isWord(String word) {
		for (int i = 0; i < word.length(); ++i) {
			if (word.charAt(i) >= 'a' && word.charAt(i) <= 'z')
				return true;
			if (word.charAt(i) >= 'A' && word.charAt(i) <= 'Z')
				return true;
			if (word.charAt(i) >= '0' && word.charAt(i) <= '9')
				return true;
		}		
		return false;
	}
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int cases = Integer.parseInt(br.readLine());
		for (int i = 0; i < cases; ++i) {
			String temp = br.readLine();
			System.out.println(Integer.parseInt(temp.substring(0, 1)) + Integer.parseInt(temp.substring(2, 3)));
		} 
	}
}

	/*FOR PRINTING PURPOSE
	System.out.println("SIZE = " + size);
	for (int i = 0; i < size; ++i) {
			System.out.print(size[i] + " ");
	}
	
	- when stuck in number addition TLE, try "Cumulative Digit Array" <3
	
    - Take int[] as size using BufferedReader {ONLY WHEN GOING WITH BUFFERED READER ... xD}
    int[] input = Arrays.stream(br.readLine().split("\\s+")).mapToInt(Integer::parseInt).toArray();
	
	- Do NOT use Buffered Reader and fast Reader at once. It Sucks.. !!

	- Fast Reader NextLine() NOT WORKING.. avoid Using it..
	
	// public static boolean isPalindrome (String a) {
	// 	int i = 0;
	// 	int j = a.length() - 1;
	// 	while (i < j) {
	// 		if (a.charAt(i) != a.charAt(j))
	// 			return false;
	// 		i++; j--;
	// 	}
	// 	return true;
	// }
*/