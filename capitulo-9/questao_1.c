typedef struct ponto Ponto;

struct ponto {
  float x;
  float y;
};

int dentroRet(Ponto* v1, Ponto* v2, Ponto* p) {
  int x = (p->x > v1->x) && (p->x < v2->x);
  int y = (p->y > v1->y) && (p->y < v2->y);
  return x && y;
}
