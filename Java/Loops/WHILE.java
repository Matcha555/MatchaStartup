package Loops;

import java.util.Scanner;

public class WHILE {
    public static void main(String[] args) {
        Scanner pc = new Scanner(System.in);
        String name = "";
        while (name.isBlank()) {
            System.out.print("Enter your name: ");
            name = pc.nextLine();
        }
        System.out.println("Hello " + name);
        pc.close();
    }
}
