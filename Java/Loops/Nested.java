package Loops;

import java.util.Scanner;
// nested loops = a loop inside of a loop

public class Nested {
    public static void main(String[] args) {
        Scanner pc = new Scanner(System.in);
        int rows;
        int columns;
        String symbol = "";

        System.out.print("Enter # of rows: ");
        rows = pc.nextInt();
        System.out.print("Enter # of columns: ");
        columns = pc.nextInt();

        System.out.print("Enter symbol to use: ");
        symbol = pc.next();

        for (int i = 1; i <= rows; i++) {
            System.out.println();
            for (int j = 1; j <= columns; j++) {
                System.out.println();
            }
        }
    }
}
