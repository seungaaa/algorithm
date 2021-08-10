# Collaboration with Github

## (1) Code

### Branch policy

main branch → for uploading seminar md files

each branches → for uploading each question's code

### Pull Request policy

각자 레포(origin이라고 부름) → pull request → upstream repo

## (2) Projects

- Projects 내에는 Columns가 4개 있음 (To do, In progress, Done, Discuss)
- 각 Columns 내에는 Card를 생성할 수 있음. 각자 card는 각자 생성함
- Card의 생명주기
    - Card는 처음에 TODO 에 있음
    - issue로 전환하기 전 In progress Column으로 옮김 (이 이슈가 진행중이라는 의미)
    - issue로 전환해서 issue와 연동 커밋 후(뒤에 설명 내용 할것임)
    - 완료되었다 싶으면 Done으로 옮김
    - 논의가 필요하면 Discuss column으로 옮김

Project는 현재 2개 생성함

1. **Algorithm Code** 

    Code의 TODO는 8주치를 **각자** 미리 생성해야함 

    **(Due: 2021/08/11)**

    `[이름][알고리즘 분야]타이틀`

    문법 지켜주셈 / 카드의 내용은 모두 영어로 부탁..

    `ex.[jean1042][dynamic_programming] crossing_river_question`

1. **Algorithm Seminar** 

    8주차 다 카드 생성해놓음

## Issues

Project의 Card에서 해당 주차 풀어야할 문제를 `Convert to Issue` 함 → Issue number가 아래 그림처럼 생김. issue number 기억.

![Collaboration%20with%20Github%207764100e36b44c1bbfb477bf4e63474f/Untitled.png](Collaboration%20with%20Github%207764100e36b44c1bbfb477bf4e63474f/Untitled.png)

**note) milestone 기능**

몇 % 정도 이수했는지.. 목표에 따른 달성율을 보여줌. 하고 싶은 사람을 위해 8월치 마일스톤은 제가 만들어드림.

9월, 10월.. 쭉쭉 하고 싶은 사람은 각자 만들면 됨.

## Flow chart 한줄 요약

### **세미나 자료 (최대한 다른 사람을 위해 수요일까지 업로드)**

1. Card를 보고 card를 Projects 탭의 in progress 컬럼으로 옮기고 convert to issue 를 통해 TODO card → issue 로 바꿈 (issue number #12 이런거 기억함)
2. main 브랜치의 md 파일에다가 세미나 자료 작성
3. commit할 때 commit msg에다가 #issue_number를 넣어서 커밋함

ex.

[]()

1. Done으로 카드를 옮김

### **문제풀이 (목요일 18시 커밋분까지 유효)**

1. Card에 TODO 리스트 생성 
2. 해당 주차에 card를 Projects 탭의 in progress 컬럼으로 옮기고 convert to issue 를 통해 TODO card → issue 로 바꿈
3. issue에서 milestone도 지정해주고 싶으면 해
4. 로컬 컴퓨터에서 막~~ 풀어보고 코딩하고~
5. commit할 때 commit msg에다가 #issue_number 를 넣어서 커밋함 → 자동으로 이슈와 연결됨

ex.

[]()

1. 이 문제 다 풀면 projects → Algorithm Code → 카드를 Done 컬럼으로 옮김