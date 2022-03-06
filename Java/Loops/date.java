package Loops;

import java.util.Scanner;

public class date {
    public static void main(String[] args) {
        int m, y;
        Scanner pc = new Scanner(System.in);
        System.out.print("Enter month: ");
        m = pc.nextInt();
        System.out.print("Enter year: ");
        y = pc.nextInt();

        switch (m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                System.out.println("This month has 31 days.");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                System.out.println("This month has 30 days.");
                break;
            case 2:
                if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
                    System.out.println("This month has 29 days.");
                } else {
                    System.out.println("This month has 28 days.");
                }
                break;
            default:
                System.out.println("Wrong, please enter again.");
                break;

        }
    }
}
