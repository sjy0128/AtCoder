#include <stdio.h>
#include <stdlib.h>
#define MAX 200000

typedef struct Node {
    int d;
    struct Node *n;
} Node;

typedef struct {
    int n;
    Node *h;
} Graph;

Node *createNode(void);
void makeEdge(Graph *g, int d);
void linkNode(Graph *g, Node *n);

int main(void) {
    int n, a, b, qu[MAX], s=0, e=0, c=0, v, visited[MAX];
    Graph g[MAX];
    scanf("%d", &n);
    for(int i=0; i<n; i++) g[i].n = visited[i] = 0, g[i].h = NULL;
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        if(!a || !b) {
            qu[e++] = i;
            visited[i] = 1;
            c++;
        } else {
            makeEdge(&g[a-1], i);
            makeEdge(&g[b-1], i);
        }
    }
    while(s < e) {
        v = qu[s++];
        for(Node *n = g[v].h; n; n = n->n) {
            if(!visited[n->d]) {
                visited[n->d] = 1;
                qu[e++] = n->d;
                c++;
            }
        }
    }
    printf("%d", c);
    return 0;
}

Node *createNode(void) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->d = 0;
    n->n = NULL;
    return n;
}

void makeEdge(Graph *g, int d) {
    Node *n = createNode();
    n->d = d;
    linkNode(g, n);
}

void linkNode(Graph *g, Node *n) {
    if(g->h) {
        n->n = g->h;
        g->h = n;
    } else g->h = n;
}