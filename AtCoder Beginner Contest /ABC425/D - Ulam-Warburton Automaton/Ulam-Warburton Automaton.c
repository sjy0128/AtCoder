#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x, y;
    struct Node *p, *n;
} Node;

typedef struct {
    Node *f, *r;
} Queue;

Queue *q, *t;
int h, w, c;
char **m;
int **v;
int dx[]={-1,0,1,0}, dy[]={0,-1,0,1};

Node *createNode(int x, int y);
void enqueue(Queue *q, Node *n);
void dequeue(Queue *q);
int judge(int x, int y);
int f(int x, int y);
void freeQueue(Queue *q);

int main(void) {
    int cx, cy;
    scanf("%d %d\n", &h, &w);
    m = (char **)malloc(h*sizeof(char *));
    v = (int **)malloc(h*sizeof(int *));
    q = (Queue *)malloc(sizeof(Queue));
    t = (Queue *)malloc(sizeof(Queue));
    q->f = q->r = t->f = t->r = NULL;
    for(int i=0; i<h; i++) {
        m[i] = (char *)malloc(w+1);
        v[i] = (int *)calloc(w, sizeof(int));
        scanf("%s", m[i]);
    }
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            if(m[i][j] == '#') {
                c++;
                for(int k=0; k<4; k++) {
                    if(judge(i+dx[k], j+dy[k]) && f(i+dx[k], j+dy[k]) == 1) enqueue(q, createNode(i+dx[k], j+dy[k]));
                }
            }
        }
    }
    while(q->f) {
        while(q->f) {
            cx = q->r->x, cy = q->r->y;
            dequeue(q);
            if(judge(cx, cy) != 2 || v[cx][cy]) continue;
            if(f(cx, cy) == 1) enqueue(t, createNode(cx, cy));
        }
        while(t->f) {
            cx = t->r->x, cy = t->r->y;
            dequeue(t);
            v[cx][cy] = 1;
            m[cx][cy] = '#';
            c++;
            for(int i=0; i<4; i++) {
                if(judge(cx+dx[i], cy+dy[i]) && !v[cx+dx[i]][cy+dy[i]]) enqueue(q, createNode(cx+dx[i], cy+dy[i]));
            }
        }
    }
    freeQueue(q);
    freeQueue(t);
    free(q);
    free(t);
    for(int i=0; i<h; i++) {
        free(m[i]);
        free(v[i]);
    }
    free(m);
    free(v);
    printf("%d", c);
    return 0;
}

Node *createNode(int x, int y) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->x = x, n->y = y;
    n->p = n->n = NULL;
    return n;
}

void enqueue(Queue *q, Node *n) {
    if(!q->f) q->r = n;
    else n->n = q->f, q->f->p = n;
    q->f = n;
}

void dequeue(Queue *q) {
    Node *n = q->r;
    if(!n) return;
    if(n->p) {
        q->r = n->p;
        q->r->n = NULL;
    } else q->f = q->r = NULL;
    free(n);
}

int judge(int x, int y) {
    return !(x >= 0 && x < h && y >= 0 && y < w) ? 0 : (m[x][y] == '.' ? 2 : 1); 
}

int f(int x, int y) {
    int r = 0;
    for(int i=0; i<4; i++) {
        r += judge(x+dx[i], y+dy[i]) == 1;
    }
    return r;
}

void freeQueue(Queue *q) {
    Node *n=q->f, *t;
    while(n) {
        t = n->n;
        free(n);
        n = t;
    }
}