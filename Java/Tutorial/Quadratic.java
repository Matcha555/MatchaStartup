package Tutorial;

import java.util.Scanner;
import java.lang.Math;

//ax^2 + bx + c = 0

public class Quadratic {
    public static void main(String[] args) {
        double a, b, c;
        Scanner pc = new Scanner(System.in);
        System.out.print("Enter a: ");
        a = pc.nextDouble();
        System.out.print("Enter b: ");
        b = pc.nextDouble();
        System.out.print("Enter c: ");
        c = pc.nextDouble();

        double del = (b * b) - (4 * a * c);
        double x1, x2;
        if (del < 0)
            System.out.println("Roots are not real.");
        else if (del == 0) {
            x1 = (-b) / (2 * a);
            System.out.println("x = " + x1);
        } else {
            x1 = (-b + Math.sqrt(del)) / (2 * a);
            x2 = (-b - Math.sqrt(del)) / (2 * a);

            System.out.println("x1 = " + x1);
            System.out.println("x2 = " + x2);
        }
        pc.close();

    }
}
