package Loops;

import java.util.Scanner;

public class IFelse {
    public static void main(String[] args) {
        Scanner pc = new Scanner(System.in);

        double price;
        System.out.print("Enter price: ");
        price = pc.nextDouble();

        if (price >= 1000) {
            System.out.println("This is high price.");
        } else if (price >= 100) {
            System.out.println("This is medium price.");
        } else if (price >= 0) {
            System.out.println("This is low price.");
        } else {
            System.out.println("No exit!");
        }
        String ob = (price % 2 == 0) ? "even number" : "odd number";
        System.out.println(price + "  is " + ob);

        pc.close();
    }
}
