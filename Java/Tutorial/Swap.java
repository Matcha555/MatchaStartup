package Tutorial;

public class Swap {
    public static void main(String[] args) {
        String x = "coca";
        String y = "pepsi";

        String temp;
        temp = x;
        x = y;
        y = temp;

        System.out.println("x: " + x);
        System.out.println("y: " + y);
    }
}
