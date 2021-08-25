package StackQueue;

import java.util.*;

public class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        Queue<Integer> queue = new LinkedList<>();

        for(int i = 0; i < progresses.length; i++) {
            queue.add((int)Math.ceil((100.0 - progresses[i]) / speeds[i]));
        }
        System.out.print(queue + " ");

        ArrayList<Integer> answer = new ArrayList<>();
        while (!queue.isEmpty()) {
            int leftDay = queue.poll();
            int count = 1;

            while (!queue.isEmpty() && leftDay >= queue.peek()) {
                count++;
                queue.poll();
            }
            answer.add(count);
        }
        System.out.print(answer + " ");

        return answer.stream().mapToInt(Integer::intValue).toArray();
    }
}
