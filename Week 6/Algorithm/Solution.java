package week6;

import java.util.Comparator;
import java.util.PriorityQueue;

class Solution {
    class Job {
        int requireTime; // 요청시간
        int runTime;     // 소요시간
        
        public Job(int require, int run) {
            this.requireTime = require;
            this.runTime = run;
        }
    }
    
    public int solution(int[][] jobs) {
        // 대기열: 작업이 요청되는 시점이 빠른 순으로 정렬되는 우선순위 큐
        PriorityQueue<Job> taskQueue = new PriorityQueue(new Comparator<Job>() {
            @Override
            public int compare(Job job1, Job job2) {
                return job1.requireTime - job2.requireTime;
            }
        });

        for (int[] job : jobs) {
            taskQueue.offer(new Job(job[0], job[1])); // 요청시점이 빠른 순으로 요청시점, 소요시간 데이터를 대기열에 저장
        }

        // 작업큐: 작업 소요시간이 빠른 순으로 정렬되는 우선순위 큐
        PriorityQueue<Job> runtimeQueue = new PriorityQueue<>(new Comparator<Job>() {
            @Override
            public int compare(Job job1, Job job2) {
                return job1.runTime - job2.runTime;
            }
        });

        int count = 0;  // 작업의 수
        int sum = 0;    // 요청 ~ 종료까지 걸린 시간의 합
        int time = 0;   // 시간

        while (count < jobs.length) {
            while (!taskQueue.isEmpty() && time >= taskQueue.peek().requireTime) { // 작업큐에 추가: 대기열이 비어있지 않고 요청 시점이 되었을 때
                runtimeQueue.offer(taskQueue.poll());
            }

            if(!runtimeQueue.isEmpty()){ // 작업 큐에 작업이 있으면 우선순위에 따라 작업 진행
                Job j = runtimeQueue.poll();
                sum += j.runTime + (time - j.requireTime);
                time += j.runTime;
                count++;
            } else {  // 작업이 없으면 시간 1ms 흐름
                time++;
            }
        }
        // 작업의 요청부터 종료까지 걸린 시간의 평균 리턴
        return sum / count;
    }

}
