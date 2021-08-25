package baekjoon;

import java.util.Scanner;

public class Print11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num1 = sc.nextInt();
        int num2 = sc.nextInt();

        int n1 = num2 / 100;
        int n2 = (num2 % 100) / 10;
        int n3 = num2 % 10;

        System.out.println(num1 * n3);
        System.out.println(num1 * n2);
        System.out.println(num1 * n1);
        System.out.println(num1 * num2);

    }
}
