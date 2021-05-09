struct Queue {
  int beg;
  int end;
  int total;
  int values[10];
};

void create(struct Queue *p);
void insert(struct Queue *p, int element);
int pop(struct Queue *p);
int isEmpty(struct Queue p); // consulta não precisa passar ponteiro
int isFull(struct Queue p); // consulta não precisa passar ponteiro
