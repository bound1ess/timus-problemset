import java.io.*;
import java.util.*;

public class code {

  public static void main(String[] args) throws Exception {
    //BufferedReader reader = new BufferedReader(new FileReader("in.txt"));
    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(reader.readLine()), max = -1;
    int[] arr = new int[n];

    for (int i = 0; i < n; ++i) {
      arr[i] = Integer.parseInt(reader.readLine());
    }

    reader.close();
    BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));
    Arrays.sort(arr);
    writer.write(Integer.toString(arr[n / 2]));
    writer.newLine();
    writer.close();
  }
}
