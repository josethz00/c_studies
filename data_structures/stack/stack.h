struct Stack {
  int top;
  int values[10];
};

void create(struct Stack *p);
void push(struct Stack *p, int element);
int pop(struct Stack *p);
int isEmpty(struct Stack p); // consulta não precisa passar ponteiro
int isFull(struct Stack p); // consulta não precisa passar ponteiro
