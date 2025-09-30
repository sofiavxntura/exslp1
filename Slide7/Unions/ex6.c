#include <stdio.h>

union Ponto {
    struct {
    int x;
    int y;
    int z;
};
    int vec[3];
};

int main(){
    union Ponto pt;
    pt.vec[0] = 10;
    pt.vec[1] = 20;
    pt.vec[2] = 30;
    printf("(%d,%d,%d)\n", pt.x, pt.y, pt.z);
}


/* Alternativamente,
  #include <stdio.h>

struct coords {
  int x;
  int y;
  int z;
};


union Ponto {
    struct coords c;
    int vec[3];
};

int main(){
    union Ponto pt;
    pt.vec[0] = 10;
    pt.vec[1] = 20;
    pt.vec[2] = 30;
    printf("(%d,%d,%d)\n", pt.c.x, pt.c.y, pt.c.z);
}

*/
