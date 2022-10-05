import java.util.Scanner;

class bank {
    String acc_no, acc_type, name;
    double bal;
    bank(String acc_no, String acc_type, String name, double bal) {
        this.acc_no = acc_no;
        this.acc_type = acc_type;
        this.name = name;
        this.bal = bal;
    }
}
public class Experiment10 extends bank {

    Experiment10(String acc_no, String acc_type, String name, double bal) {
        super(acc_no, acc_type, name, bal);
    }
    static Scanner sc = new Scanner(System.in);

    private static char menu() {
        char ch;
        System.out.print("\nMain Main");
        System.out.print("\n1. Display all account details");
        System.out.print("\n2. Search by account number");
        System.out.print("\n3. Deposit the amount");
        System.out.print("\n4. Withdraw the amount");
        System.out.print("\n5. Exit");
        System.out.print("\nEnter your choice: ");
        ch = sc.next().charAt(0);
        return ch;
    }

    private static void display(bank b[], int n) {
        for(int i=0; i<n; i++) {
            System.out.println("\n\nDetails of "+(i+1)+"th customer");
            System.out.println("Account No: "+b[i].acc_no);
            System.out.println("Account Type: "+b[i].acc_type);
            System.out.println("Account Name: "+b[i].name);
            System.out.println("Balance: "+b[i].bal);
        }
    }

    private static void displayone(bank b[], int i) {
            System.out.println("\n\nDetails of "+(i+1)+"th customer");
            System.out.println("Account No: "+b[i].acc_no);
            System.out.println("Account Type: "+b[i].acc_type);
            System.out.println("Account Name: "+b[i].name);
            System.out.println("Balance: "+b[i].bal);
    }

    private static void search(String acc_no, int n, bank b[], char ch) {
        int loc = -1;
        for(int i=0; i<n; i++) {
            if(b[i].acc_no.equals(acc_no)) {
                loc = i;
                break;
            }
        }
        if(loc != -1) {
            if(ch == '2') {
                displayone(b, loc);
            }
            else if(ch == '3') {
                System.out.println("Enter the amount to be deposited: ");
                double amt = sc.nextDouble();
                deposit(b, loc, amt);
            }
            else if(ch=='4') {
                System.out.println("Enter the amount to be withdrawed: ");
                double amt = sc.nextDouble();
                withdraw(b, loc, amt);
            }
        }
        else {
            System.out.print("\n Customer not found!!\n");
        }
    }

    private static void deposit(bank b[], int loc, double amt) {
        b[loc].bal += amt;
        System.out.println("Rs."+amt+" deposited...\nNew Balance: "+b[loc].bal);
    }

    private static void withdraw(bank b[], int loc, double amt) {
        b[loc].bal -= amt;
        System.out.println("Rs."+amt+" withdrawed...\nNew Balance: "+b[loc].bal);
    }

    public static void main(String[] args) {
        String acc_no, acc_type, name;
        double bal;
        int n;
        char ch;
        System.out.print("Enter the total no: of customers: ");
        n = sc.nextInt();
        bank b[] = new bank[n];
        for(int i=0; i<n;i++) {
            System.out.print("\nEnter the details of " + (i+1) + "th customer: \n\n");
            String temp = sc.nextLine();
            System.out.print("\nEnter Account Type: ");
            acc_type = sc.nextLine();
            System.out.print("\nEnter Account No: ");
            acc_no = sc.nextLine();
            System.out.print("\nEnter Name: ");
            name = sc.nextLine();
            System.out.print("\nEnter the balance: ");
            bal = sc.nextDouble();
            b[i] = new bank(acc_no, acc_type, name, bal);
        }
        do {
            ch = menu();
            switch (ch) {
                case '1':
                    display(b, n);
                    break;
                case '2':
                    String temp = sc.nextLine();
                    System.out.print("\nEnter the Customer ID: ");
                    String accno = sc.nextLine();
                    search(accno, n, b, ch);
                    break;
                case '3':
                    temp = sc.nextLine();
                    System.out.print("\nEnter the Customer ID: ");
                    accno = sc.nextLine();
                    search(accno, n, b, ch);
                    break;
                case '4':
                    temp = sc.nextLine();
                    System.out.print("\nEnter the Customer ID: ");
                    accno = sc.nextLine();
                    search(accno, n, b, ch);
                    break;
                case '5':
                    System.out.println("Exiting");
                    break;
                default:
                    System.out.println("\nWRONG CHOICE!! TRY AGAIN\n");
            }
        }while(ch != '5');
    }
}
