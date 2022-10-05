import javax.swing.*;
import java.awt.event.*;

public class Experiment17 implements ActionListener {
    String op_str="";
    double n=0;
    JTextField t = new JFormattedTextField(" ");
    JButton b1 = new JButton("1");
    JButton b2 = new JButton("2");
    JButton b3 = new JButton("3");
    JButton b4 = new JButton("+");
    JButton b5 = new JButton("4");
    JButton b6 = new JButton("5");
    JButton b7 = new JButton("6");
    JButton b8 = new JButton("-");
    JButton b9 = new JButton("7");
    JButton b10 = new JButton("8");
    JButton b11 = new JButton("9");
    JButton b12 = new JButton("0");
    JButton b13 = new JButton("*");
    JButton b14 = new JButton("/");
    JButton b15 = new JButton("%");
    JButton b16 = new JButton("=");
    JButton b17 = new JButton(".");
    JButton b18 = new JButton("C");

    public Experiment17() {
        JFrame f = new JFrame();
        JPanel p = new JPanel();
        f.setSize(720,720);
        f.setContentPane(p);
        f.setLayout(null);
        f.setVisible(true);
        p.add(t);

        p.add(b1);
        p.add(b2);
        p.add(b3);
        p.add(b4);
        p.add(b5);
        p.add(b6);
        p.add(b7);
        p.add(b8);
        p.add(b9);
        p.add(b10);
        p.add(b11);
        p.add(b12);
        p.add(b13);
        p.add(b14);
        p.add(b15);
        p.add(b16);
        p.add(b17);
        p.add(b18);

        t.setBounds(100,100,200,30);
        b1.setBounds(100,140,50,30);
        b2.setBounds(150,140,50,30);
        b3.setBounds(200,140,50,30);
        b4.setBounds(250,140,50,30);
        b5.setBounds(100,170,50,30);
        b6.setBounds(150,170,50,30);
        b7.setBounds(200,170,50,30);
        b8.setBounds(250,170,50,30);
        b9.setBounds(100,200,50,30);
        b10.setBounds(150,200,50,30);
        b11.setBounds(200,200,50,30);
        b12.setBounds(250,200,50,30);
        b13.setBounds(100,230,50,30);
        b14.setBounds(150,230,50,30);
        b15.setBounds(200,230,50,30);
        b16.setBounds(250,230,50,30);
        b17.setBounds(100,260,100,30);
        b18.setBounds(200,260,100,30);

        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);
        b6.addActionListener(this);
        b7.addActionListener(this);
        b8.addActionListener(this);
        b9.addActionListener(this);
        b10.addActionListener(this);
        b11.addActionListener(this);
        b12.addActionListener(this);
        b13.addActionListener(this);
        b14.addActionListener(this);
        b15.addActionListener(this);
        b16.addActionListener(this);
        b17.addActionListener(this);
        b18.addActionListener(this);

        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == b1) {
            t.setText(t.getText() + "1");
        }
        else if(e.getSource() == b2) {
            t.setText(t.getText()+"2");
        }
        else if(e.getSource() == b3) {
            t.setText(t.getText()+"3");
        }
        else if(e.getSource() == b4) {
            t.setText(t.getText()+" + ");
        }
        else if(e.getSource() == b5) {
            t.setText(t.getText()+"4");
        }
        else if(e.getSource() == b6) {
            t.setText(t.getText()+"5");
        }
        else if(e.getSource() == b7) {
            t.setText(t.getText()+"6");
        }
        else if(e.getSource() == b8) {
            t.setText(t.getText()+" - ");
        }
        else if(e.getSource() == b9) {
            t.setText(t.getText()+"7");
        }
        else if(e.getSource() == b10) {
            t.setText(t.getText()+"8");
        }
        else if(e.getSource() == b11) {
            t.setText(t.getText()+"9");
        }
        else if(e.getSource() == b12) {
            t.setText(t.getText()+"0");
        }
        else if(e.getSource() == b13) {
            t.setText(t.getText()+" * ");
        }
        else if(e.getSource() == b14) {
            t.setText(t.getText()+" / ");
        }
        else if(e.getSource() == b15) {
            t.setText(t.getText()+" % ");
        }
        else if(e.getSource() == b16) {
            op_str = t.getText();
            compute();
        }
        else if(e.getSource() == b17) {
            t.setText(t.getText()+".");
        }
        else if(e.getSource() == b18) {
            t.setText("");
            op_str = t.getText();
        }
    }

    public void compute() {
        String op_arr[] = op_str.trim().split(" ");
        double temp;
        String op = "n";
        for (int i=0 ; i<op_arr.length; i++) {
            if(i % 2 != 0) {
                op = op_arr[i];
            }
            else {
                if (op.equals("n")) {
                    n = Double.parseDouble(op_arr[i]);
                }
                else {
                    temp = Double.parseDouble(op_arr[i]);
                    switch (op) {
                        case "+":
                            n += temp;
                            t.setText(""+n);
                            break;
                        case "-":
                            n -= temp;
                            t.setText(""+n);
                            break;
                        case "*":
                            n *= temp;
                            t.setText(""+n);
                            break;
                        case "/":
                            try {
                                if(temp == 0)
                                    throw new ArithmeticException("Div by zero");
                                else {
                                    n=n/temp;
                                    t.setText(""+n);
                                }
                            }
                            catch (Exception e) {
                                t.setText(e.getMessage());
                            }
                            break;
                        case "%":
                            n %= temp;
                            t.setText(""+n);
                            break;
                    }
                }
            }
        }
    }

    public static void main(String[] args) {
        new Experiment17();
    }
}
