import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Experiment15 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader((new InputStreamReader(System.in)));
        System.out.print("Enter the line of nos: ");
        String nos = br.readLine();
        StringTokenizer st = new StringTokenizer(nos," ");
        int sum=0, temp;
        System.out.print("The nos are: ");
        while(st.hasMoreElements()) {
            temp = Integer.parseInt(st.nextToken());
            System.out.print(temp+ " ");
            sum += temp;
        }
        System.out.println("\nSum: "+sum);
        br.close();
    }
}
