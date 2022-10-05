import java.awt.*;
import java.awt.event.*;

public class Experiment16 extends Frame implements MouseListener, MouseMotionListener{
    Experiment16() {
        setSize(300,300);
        setVisible(true);
        setTitle("Experiment 16");

        addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                System.exit(0);
            }
        });

        addMouseListener(this);
        addMouseMotionListener(this);
    }

    public void mousePressed(MouseEvent e){
        setBackground(Color.CYAN);
        setTitle("Experiment 16: Pressed");
    }
    public void mouseReleased(MouseEvent e){
        setBackground(Color.MAGENTA);
        setTitle("Experiment 16: Released");
    }
    public void mouseClicked(MouseEvent e){

    }
    public void mouseEntered(MouseEvent e){
        setBackground(Color.GREEN);
        setTitle("Experiment 16: Entered");
    }
    public void mouseExited(MouseEvent e){
        setBackground(Color.ORANGE);
        setTitle("Experiment 16: Exited");
    }
    public void mouseMoved(MouseEvent me)
    {
        System.out.println("Mouse Moved");
        Graphics g1 = getGraphics();
        g1.drawString("Moving",getMousePosition().x, getMousePosition().y);
    }
    public void mouseDragged(MouseEvent me)
    {
        System.out.println("Mouse Dragged");
        Graphics g1 = getGraphics();
        g1.fillOval(me.getX(), me.getY(), 15, 15);
    }

    public static void main(String[] args) {
        Experiment16 obj = new Experiment16();
    }
}
