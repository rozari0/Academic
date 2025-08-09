import java.swing.*;
import java.awt.event.*;

public class AWTExample{

public static void main(String[] args){
Frame f = new Frame("AWT Example ");
Button b = new Button("Click Me");

b.setBounds(50,100,80,30);
f.add(b);
f.setSize(300,200);
f.setLayout(null);
f.setVisible(true);
}
}
