import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Scanner;

public class Hashmap {
    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input = br.readLine();
        List<Character> singles = new ArrayList<>();
        HashMap<Character, Integer> map = new HashMap<>();
        for (int i = 0; i < input.length(); ++i) {
            if (map.containsKey(input.charAt(i)))
                map.put(input.charAt(i), map.get(input.charAt(i)) + 1);
            else map.put(input.charAt(i), 1);
        }
        for (Character key : map.keySet()) {
            if (map.get(key) == 1)
                singles.add(key);
        }

        for (int i = 0; i < input.length(); ++i) {
            if (singles.contains(input.charAt(i))) {
                System.out.println(input.charAt(i));
                break;
            }
        }


    }
}
