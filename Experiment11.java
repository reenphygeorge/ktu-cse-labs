import java.io.*;

public class Experiment11 {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the text: ");
        String str = br.readLine();

        // Writing to Sample.txt //
        FileWriter fwobj = new FileWriter("Sample.txt");
        fwobj.write(str);
        fwobj.close();

        // Reading from Sample.txt //
        FileReader frobj = new FileReader("Sample.txt");
        br = new BufferedReader(frobj);
        str = br.readLine();
        frobj.close();

        // Writing to NewSample.txt //
        FileWriter fwobj2 = new FileWriter("NewSample.txt", true);
        fwobj2.write(str);
        fwobj2.close();

        // Reading from NewSample.txt //
        FileReader frobj2 = new FileReader("NewSample.txt");

        br = new BufferedReader(frobj2);
        while((str = br.readLine()) != null) {
            System.out.print("Content of NewSample.txt: " + str);
        }
        frobj2.close();

        br.close();
    }
}