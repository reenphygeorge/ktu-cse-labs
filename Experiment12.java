import java.io.*;

public class Experiment12 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the no of numbers to be inputed: ");
        int n = Integer.parseInt(br.readLine());
        FileOutputStream fo = new FileOutputStream("Numbers.txt");
        System.out.print("Enter the numbers: ");
        for(int i=0; i<n; i++) {
            fo.write(Integer.parseInt(br.readLine()));
        }
        fo.close();

        FileInputStream fi = new FileInputStream("Numbers.txt");

        FileOutputStream feo = new FileOutputStream("Even.txt");
        FileOutputStream foo = new FileOutputStream("Odd.txt");

        for(int i=0; i<n; i++) {
            int temp = fi.read();
            if(temp % 2 == 0) {
                feo.write(temp);
            }
            else {
                foo.write(temp);
            }
        }
        fi.close();
        feo.close();
        foo.close();

        FileInputStream fei = new FileInputStream("Even.txt");
        FileInputStream foi = new FileInputStream("Odd.txt");

        System.out.print("Even Numbers\n");
        int temp;
        while ((temp=fei.read()) != -1){
            System.out.print(temp+"\n");
        }
        System.out.print("Odd Numbers\n");
        while ((temp=foi.read()) != -1) {
            System.out.print(temp+"\n");
        }

        fei.close();
        foi.close();

    }
}
