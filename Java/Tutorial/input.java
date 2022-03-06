package Tutorial;

import java.util.Scanner;

public class input {
    public static void main(String[] args) {
        Scanner mouse = new Scanner(System.in);
        System.out.print("What brand do you buy? ");
        String brand = mouse.nextLine();
        System.out.print("How much is it? ");
        double price = mouse.nextDouble();
        mouse.nextLine();
        System.out.print("Who do you buy for? ");
        String name = mouse.nextLine();
        System.out.print("How old is she? ");
        int age = mouse.nextInt();

        System.out.print("-------\n");
        System.out.println("You buy: " + brand);
        System.out.println("It is: " + price + "$");
        System.out.println("My girlfriend, she's " + name);
        System.out.println("She is " + age + " years old.");
        mouse.close();
    }
}
