#include <stdio.h> 



struct Ponto {
    int x;
    int y;
    int z;

};

void main(void){

struct Ponto v1 = {1,0,5};
struct Ponto v2 = {3,3,3};
struct Ponto v3 = {0,10,0};

// Exiba a coordenada y dos três pontos.
printf("---- Coordenadas Y ----\nv1: %d\nv2: %d\nv3: %d\n",v1.y,v2.y,v3.y);


// Some 10 unidades na coordenada z dos três pontos.
v1.z = v1.z + 10;
v2.z = v2.z + 10;
v3.z = v3.z + 10;

// Exiba as três coordenadas de v2.
printf("---- Coordenadas de v2 ----\nv2 = (%d, %d, %d)\n",v2.x,v2.y,v2.z);

}

