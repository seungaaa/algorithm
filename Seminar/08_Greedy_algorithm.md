---
title: "Greedy Algorithm & Merge Sort" 
date: 2021-09-26
description: "Algorithm seminar for greedy algorithm, merge sort"
---
author: @jean1042


## 1-1. Definition
### Greedy Algorithm?
그리디 알고리즘은 '당장 눈 앞에 보이는 최적의 상황만을 쫓는 알고리즘' 임. 문제를 해결하는 과정에서 순간순간마다 최적을 결정하는 방식이다. 
항상 최적의 결과를 도출하는 것은 아니지만, 어느 정도 해에 근사한 값을 빠르게 구할 수 있다는 장점이 있다. (참고1) __특정한 상황__에 그리디 알고리즘은 최적의 해를 보장한다. 

## 1-2. 대표적인 예제
```거스름 돈 문제```
ex. 560원을 거슬러 주어야 할 때, 10원짜리 56개로 거슬러주는 것보다 500원짜리 1개, 50원짜리 1개, 10원짜리 1개를 주는 것이 총 3개로 더 편하다.
따라서 이 경우, ```무조건 더 큰 화폐 단위부터 거슬러 준다```는 알고리즘만 지키면 최적의 해를 보장한다. (참고1 예시) 
그러나 거스름돈의 금액이 작은 거스름돈의 배수가 아닌 경우 (ex. 800원을 거슬러주어야 하는데 500, 400, 100원이 있는 경우..) 는 알고리즘이 최적해를 보장하지 못한다. 그래서 문제에서 그리디 알고리즘을 사용하기 전 정당성 분석이 중요하다. 단순히 가장 좋아 보이는것부터 선택했을 때 최적의 해를 구할 수 있을 지 검토해야한다. 

note) 위 예시 문제에서 그리디 알고리즘이 최적해를 보장하는 이유는? 동전 중에서 가장 큰 단위가 항상 작은 동전 단위의 배수이므로, 작은 단위의 동전들으 ㄹ종합해서 다른 해가 나올 수 없기 때문이다. (이런 식으로 분석이 필요..)

__문제__ -> 를 보고 무조건 큰 숫자의 동전부터 골라서 거슬러준다는 점을 생각하기
![Screen Shot 2021-09-26 at 4 53 49 PM](https://user-images.githubusercontent.com/25656426/134798966-da0de420-828f-4214-89e3-1300e1739f04.png)


1. 500원짜리 동전으로 거슬러 줄 수 있는 경우를 계산한다. 
![Screen Shot 2021-09-26 at 4 58 02 PM](https://user-images.githubusercontent.com/25656426/134799058-f2c45a8a-09ae-4d78-87f4-3430bd5c9428.png)

500원짜리 동전 2개필요 (나누기 연산) / 남은 금액 260원 (나머지 연산)


2. 100원짜리 동전으로 거슬러 주는 경우 계산한다.
![Screen Shot 2021-09-26 at 5 00 04 PM](https://user-images.githubusercontent.com/25656426/134799120-2cd16ab2-b21c-448a-a063-a6c96b1c5d1b.png)

100원짜리 동전 2개 / 남은 금액 60원

3. 50원짜리 동전 / 10원짜리 동전으로 거슬러 주는 경우 계산
 ![Screen Shot 2021-09-26 at 5 03 57 PM](https://user-images.githubusercontent.com/25656426/134799227-71e350ad-cc28-4cc2-85db-9dfe0ac3c0b4.png)

단순히 ```큰 화폐``` 부터 거스름돈을 거슬러주는 방식으로 접근하는 알고리즘 
### Code (python)

```
n = 1260
cnt = 0
list = [500, 100, 50, 10]

for i in list:
    cnt += n // i 
    n %= i

print(cnt)
```

O(N)= 화폐의 종류가 K개라고 할 때 O(K) 

## 1-3. 언제 쓰이는가?
```극단적으로 문제를 접근하는 경우에 사용```  
그래서 이전 세미나 때 했던 정렬 기법이 함께 사용되는 경우가 많다. 
ex. 무조건 큰 경우대로, 무조건 작은 경우대로, 긴 경우대로, 짧은 경우대로.. 
아래와 같은 예시들이 그리디 응용 문제.

정렬 알고리즘과 짝을 이뤄 출제된다.

```
1. 한 개의 회의실이 있는데 이를 사용하고자 하는 n개의 회의들에 대하여 회의실 사용표를 만들 려고 한다. 각 회의에 대해 시작시간과 끝나는 시간이 주어져 있고, 각 회의가 겹치지 않게 하 면서 회의실을 사용할 수 있는 최대수의 회의를 찾아라. 단, 회의는 한번 시작하면 중간에 중 단될 수 없으며 한 회의가 끝나는 것과 동시에 다음 회의가 시작될 수 있다. 첫째 줄에 최대 사용할 수 있는 회의 수를 출력하여라.

2. 현수는 씨름 감독입니다. 현수는 씨름 선수를 선발공고를 냈고, N명의 지원자가 지원을 했습 니다. 현수는 각 지원자의 키와 몸무게 정보를 알고 있습니다.
현수는 씨름 선수 선발 원칙을 다음과 같이 정했습니다.
“다른 모든 지원자와 일대일 비교하여 키와 몸무게 중 적어도 하나는 크거나, 무거운 지원자 만 뽑기로 했습니다.”
만약 A라는 지원자보다 키도 크고 몸무게도 무거운 지원자가 존재한다면 A지원자는 탈락입니 다. 첫째 줄에 씨름 선수로 뽑히는 최대 인원을 출력하세요.

```

### 풀어올 문제
구명보트 문제 <br>
https://programmers.co.kr/learn/courses/30/lessons/42885


-----

## 2-1. Merge Sort (Divide & Conquer)
### 분할정복
- 분할정복은 유명한 알고리즘 ```디자인 패러다임``` 이고, 이 패러다임을 차용한 알고리즘들은 주어진 문제를 둘 이상의 부분 문제로 나눈 뒤 각 문제에 대한 답을 재귀 호출을 이용해 계산하고, 각 부분 문제의 답으로부터 전체 문제의 답을 계산한다. 
분할정복법은 항상 문제를 절반씩으로 나누는 알고리즘. 

#### 언제 사용하는가? 
문제를 둘 이상의 부분 문제로 나누는 방법이 있을 때, 부분 문제의 답을 조합해서 원래 문제의 답을 계산하는 효율적인 방법이 있을 때

#### Round 1 <br>
1-1) 배열을 반으로 나누고, 또 반으로 나눈다. (2개가 남을때까지)
![0](https://user-images.githubusercontent.com/25656426/134802787-08789aea-25f8-4118-adce-b7697cba18c4.png)

![1](https://user-images.githubusercontent.com/25656426/134802810-587962c0-c262-4817-9c33-f84d6fbcb13c.png)

1-2) 2개짜리의 작은 배열들(A)을 각각 정렬한다.
![2](https://user-images.githubusercontent.com/25656426/134802848-4c92530d-3cc5-42d2-9951-ec84cc6e8d3d.png)

1-3. A방들 모두 정렬완료
![3](https://user-images.githubusercontent.com/25656426/134802847-45a6bfd1-bafd-4b3f-9de6-2a89baef566b.png)

1-4. 앞의 2개짜리 배열(A)를 병합할껀데, A 방의 작은수(A방의 맨 앞 원소)끼리 비교한다.
![4](https://user-images.githubusercontent.com/25656426/134802845-755c355c-0421-462a-8661-ce34cb05ee0e.png)

1-5. 바뀐 A방의 맨 앞 원소와도 한번 더 비교한다. 7까지
![5](https://user-images.githubusercontent.com/25656426/134802844-6ebb1c7a-9515-480c-b2e4-37197c16f6b6.png)
![6](https://user-images.githubusercontent.com/25656426/134802843-6b0a4792-54b6-453b-a8bd-247b3fcc3560.png)

![7](https://user-images.githubusercontent.com/25656426/134802841-7173265a-e184-462e-bed6-91911b69f798.png)

1-6. 정렬완료
![8](https://user-images.githubusercontent.com/25656426/134802840-1174fc2a-6286-4253-972a-21476ddfe663.png)

#### __Round 2__ <br>
2-1. Round 1과 마찬가지로 배열 정렬 

#### __Round 3__ <br>
정렬된 원소 4개짜리 배열을 같은 방법으로 정렬한다. 
![9](https://user-images.githubusercontent.com/25656426/134802839-413f6eab-2809-46f7-8504-fe52f26c3631.png)

![10](https://user-images.githubusercontent.com/25656426/134802838-66e577ae-3468-4c35-ad23-eb8c6738920b.png)

![11](https://user-images.githubusercontent.com/25656426/134802836-a80d1ccd-9022-46ba-acb7-65e0f3c767fb.png)

Merge sort Ref: https://www.youtube.com/watch?v=QAyl79dCO_k

- O(N) = O(n logn)

![시간복잡도](https://user-images.githubusercontent.com/25656426/134803171-6a340fba-aed1-499f-816a-75e5dd8318c2.png)

#### code
```
def merge_sort(numbers):
    n = len(numbers)

    if n <= 1:
        return

    mid = n // 2
    left_group = numbers[:mid]
    right_group = numbers[mid:]

    merge_sort(left_group)
    merge_sort(right_group)

    left = 0
    right = 0
    now = 0

    while left < len(left_group) and right < len(right_group):
        if left_group[left] < right_group[right]:
            numbers[now] = left_group[left]
            left += 1
            now += 1
        else:
            numbers[now] = right_group[right]
            right += 1
            now += 1

    while left < len(left_group):
        numbers[now] = left_group[left]
        left += 1
        now += 1

    while right < len(right_group):
        numbers[now] = right_group[right]
        right += 1
        now += 1
```