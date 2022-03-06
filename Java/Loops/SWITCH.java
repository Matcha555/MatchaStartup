package Loops;

import java.util.Scanner;

//Switch loop
public class SWITCH {
    public static void main(String[] args) {
        Scanner pc = new Scanner(System.in);
        System.out.print("Enter day: ");
        int day = pc.nextInt();

        switch (day) {
            case 2:
                System.out.println("This is monday.");
                break;
            case 3:
                System.out.println("This is tuesday.");
                break;
            case 4:
                System.out.println("This is wednesday.");
                break;
            case 5:
                System.out.println("This is thursday.");
                break;
            case 6:
                System.out.println("This is friday.");
                break;
            case 7:
                System.out.println("This is saturday.");
                break;
            case 8:
                System.out.println("This is sunday.");
                break;
            default:
                System.out.println("This is not a day.");
        }
        pc.close();
    }
}
