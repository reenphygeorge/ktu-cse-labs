import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Random;

class RandOm extends Thread {
    int limit;
    RandOm(int limit) {
        this.limit = limit;
    }
    public void run() {
        Random rand = new Random();
        for (int i = 0; i < limit; i++) {
            int num = rand.nextInt(1000);
            if(num % 2 == 0) {
                EvenSq e = new EvenSq(num);
                e.start();
            }
            else {
                OddSq o = new OddSq(num);
                o.start();
            }
            try {
                Thread.sleep(1000);
            }
            catch (InterruptedException e) {
                e.getMessage();
            }
        }
    }
}

class EvenSq extends Thread {
    int n;
    EvenSq(int n) {
        this.n = n;
    }
    public void run() {
        System.out.print("\nSquare of "+n+": "+n*n);
    }
}

class OddSq extends Thread {
    int n;
    OddSq(int n) {
        this.n = n;
    }
    public void run() {
        System.out.print("\nCube of "+n+": "+n*n*n);
    }
}

public class Experiment13 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the limit: ");
        int limit = Integer.parseInt(br.readLine());
        RandOm r = new RandOm(limit);
        r.start();
        br.close();
    }
}