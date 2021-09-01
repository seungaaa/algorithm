package baekjoon;

import java.util.Scanner;

public class For2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num1 = 0;
        int num2 = 0;

        int testCase = sc.nextInt();

        for(int i=1; i <= testCase; i++) {
            num1 = sc.nextInt();
            num2 = sc.nextInt();
            System.out.println(num1 + num2);
        }
    }
}
