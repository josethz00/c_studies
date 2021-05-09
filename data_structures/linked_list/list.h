struct Box {
  int element;
  struct Box *next;
};

struct List {
  struct Box *beg;
};

void create(struct List *list);
void insert(struct List *list, int element);
int isEmpty(struct List list);
int pop(struct List *list);
int show(struct List list);