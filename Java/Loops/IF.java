package Loops;

import java.util.Scanner;

public class IF {
    public static void main(String[] args) {
        int age;
        Scanner nc = new Scanner(System.in);
        System.out.print("Enter age: ");
        age = nc.nextInt();

        if (age >= 18) {
            System.out.println("You can do everything you want.");
        }
        System.out.println("Age: " + age);
        nc.close();
    }

}
