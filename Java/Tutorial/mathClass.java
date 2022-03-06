package Tutorial;

import java.lang.Math;
import java.util.Scanner;

public class mathClass {
    public static void main(String[] args) {
        /*
         * double x = 3.12;
         * double y = -12;
         * double z;
         * 
         * z = Math.max(y);
         * z = Math.min(y);
         * z = Math.abs(y);
         * z = Math.sqrt(x);
         * z = Math.round(x);
         * z = Math.ceil(x);
         * 
         * System.out.println(z);
         */

        // Find the hypotenuse of a triangle
        Scanner cacu = new Scanner(System.in);
        System.out.print("Enter side a: ");
        double a = cacu.nextDouble();
        System.out.print("Enter side b: ");
        double b = cacu.nextDouble();

        double c;
        c = Math.sqrt((a * a) + (b * b));

        System.out.println("=> The hypotenuse is: " + c);
        cacu.close();
    }
}
