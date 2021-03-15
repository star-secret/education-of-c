#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define QUE_LENG 6
#define MAX_NAME_LENGTH 100

typedef char Data;
typedef struct Cy_Queue {
   int front;
   int rear;
   Data cyqueue[QUE_LENG];
} cQUEUE;

typedef cQUEUE Queue;

//초기화
void QueueInit(Queue* pq) {
   pq->front = 0;
   pq->rear = 0;
}

//큐 공백
int Q_empty(Queue* pq) {
   Queue q;
   if (pq->front == pq->rear)
      return printf("서비스를 제공할 수 없습니다.");

   else {
      printf("고객 : %s", deleteq(&q));
   }
}

//인덱스 이동
int Nextidx(int pos) {
   if (pos == QUE_LENG - 1)
      return 0;

   else
      return pos + 1;
}

//입력
void addq(Queue* pq, Data data) {
   if (Nextidx(pq->rear) == pq->front) {
      printf("서비스를 제공할 수 없습니다.\n");
   }

   pq->rear = Nextidx(pq->rear);
   pq->cyqueue[pq->rear] = data;
}

//삭제
Data deleteq(Queue* pq) {
   if (Q_empty(pq)) {
      printf("대기 중인 고객 없음\n");
   }

   pq->front = Nextidx(pq->front);
   return pq->cyqueue[pq->front];
}

//옵션선택
int display() {
   int number;
   printf("입력대기\n1. 관공서 도착\n2. 관공서 퇴장\n3. 서비스 종료\n");

   scanf("%d", &number);
   option(number);
}

//세부사항
int option(int num) {
   int op_num;
   char* name_val;
   Queue* q = name_val;
   char name[MAX_NAME_LENGTH];

   if (num == 1) {
      printf("1. 대기자 등록\n2. 취소");
      scanf("%d", &op_num);

      if (op_num == 1) {
         printf("이름 입력 : ");
         scanf("%s", name);
         *name_val = malloc(sizeof(name));
         name_val = name;

         addq(&q, name_val);
         display();
      }

      else if (op_num == 2) {
         if (Q_empty(&q)) {
            display();
         }

         else display();
      }


      else if (op_num == 3) {
         printf("서비스를 종료합니다.\n");
         exit(1);
      }
   }

   else if (num == 2) {
      display();
   }

}



int main() {
   Queue q;
   QueueInit(&q);

   display();
}