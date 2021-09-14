import java.io.*;
import java.util.*;


public class Array1 {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st;
		
		int t = Integer.parseInt(br.readLine());
		int arr[] = new int[t];
		int max = -1000000;
		int min = 1000000;
		st = new StringTokenizer(br.readLine());
	
		for(int i=0; i<t; i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
		for(int i=0; i<t; i++) {
			if(arr[i] > max) {
				max = arr[i];
			}
			if(arr[i] < min) {
				min = arr[i];
			}
		}
		sb.append(min).append(" ").append(max);
		System.out.println(sb);
	}
}