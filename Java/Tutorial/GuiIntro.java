package Tutorial;

import javax.swing.JOptionPane;

public class GuiIntro {
    public static void main(String[] args) {
        String name = JOptionPane.showInputDialog("Enter your name: ");
        int age = Integer.parseInt(JOptionPane.showInputDialog("Enter your age: "));

        JOptionPane.showMessageDialog(null, "Hello " + name);
        JOptionPane.showMessageDialog(null, "You are " + age + " years old");
    }
}
