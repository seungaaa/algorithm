package algorithm;

import java.util.Scanner;

public class IfQuestion {
	/**
	 * 문제 출처: 백준 알고리즘 if문 - 사분면 고르기
	 * x, y좌표를 각각 입력했을 때 어느 사분면에 위치하는지 알아내는 프로그램 만들기
	 * 
	 */
	public static void main(String[] args) {		
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		int y = sc.nextInt();
		
		if(x > 0 && y > 0) {
			System.out.println(1);
		} else if(x < 0 && y > 0) {
			System.out.println(2);
		} else if(x < 0 && y < 0) {
			System.out.println(3);
		} else if(x > 0 && y < 0) {
			System.out.println(4);
		} else {
			System.out.println("범위 초과");
		}

	}

}
