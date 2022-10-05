import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class GUITraficLight extends JPanel implements ActionListener {
	JRadioButton r1, r2, r3;
	ButtonGroup bg;
	Color red_c, yellow_c, green_c;
	
	public GUITraficLight() {
		setBounds(0,0,640,480);
		r1 = new JRadioButton("Red");
		r1.addActionListener(this);
		r2 = new JRadioButton("Yellow");
		r2.addActionListener(this);
		r3 = new JRadioButton("Green");
		r3.addActionListener(this);
		r1.setSelected(true);
		
		red_c = Color.RED;
		yellow_c = getBackground();
		green_c = getBackground();
		bg = new ButtonGroup();
		
		bg.add(r1); bg.add(r2); bg.add(r3);
		
		add(r1); add(r2); add(r3);
	}
	
	public void actionPerformed(ActionEvent e) {
		if(r1.isSelected() == true) {
			yellow_c = getBackground();
			red_c = Color.RED;
			green_c = getBackground();
		}
		if(r2.isSelected() == true) {
			yellow_c = Color.YELLOW;
			red_c = getBackground();
			green_c = getBackground();
		}
		if(r3.isSelected() == true) {
			yellow_c = getBackground();
			red_c = getBackground();
			green_c = Color.GREEN;
		}
		repaint();
	}
	
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		g.drawOval(50,50,50,50);
		g.drawOval(50,110,50,50);
		g.drawOval(50,170,50,50);
		g.setColor(red_c);
		g.fillOval(50,50,50,50);
		g.setColor(yellow_c);
		g.fillOval(50,110,50,50);
		g.setColor(green_c);
		g.fillOval(50,170,50,50);
	}
}

public class Experiment19 {
	
	public static void main(String[] args) {
		JFrame f = new JFrame();
		f.setVisible(true);
		f.setLayout(null);
		f.setSize(480,720);
		f.add(new GUITraficLight());
		
	}
}
