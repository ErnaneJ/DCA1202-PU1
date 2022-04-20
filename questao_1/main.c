#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ***allocate_array(int x, int y, int z){
	int ***matriz = (int***)malloc(x * sizeof(int**));
 	if (matriz == NULL){
		printf("\n\n> Erro ao realizar alocacao.\n> Programa encerrado.\n\n");
    exit(1);
	}
  for (int i = 0; i < x; i++){
    matriz[i] = (int**)malloc(y * sizeof(int*));
    if (matriz[i] == NULL){
      printf("\n\n> Erro ao realizar alocacao.\n> Programa encerrado.\n\n");
    	exit(1);
    }
    for (int j = 0; j < y; j++)    {
      matriz[i][j] = (int*)malloc(z * sizeof(int));
      if (matriz[i][j] == NULL){
				printf("\n\n> Erro ao realizar alocacao.\n> Programa encerrado.\n\n");
    		exit(1);
      }
    }
  }

	return matriz;
}

void set_data_matriz(int ***matriz, int x, int y, int z, int a, int b){
  int cpx=0, cpy=0;

  for(int i = 0; i < x; i++){
    for(int j = 0; j < y; j++){
      for(int k = 0; k < z; k++){
        int condition = 1 > (pow((i-x/2), 2)/pow(a,2) + pow((j-y/2), 2)/pow(b,2));

        // batman? HAHA.. => (a > b)
        // int connditionA = pow(a, 2) > (pow((i-x/2), 2) + pow((j-y/2), 2));
        // int connditionB = pow(b, 2) > (pow((i-x/2), 2) - pow((j-y/2), 2));
        // if(connditionA && connditionB){
        if(condition){
          matriz[i][j][k] = 1;
        }else{
          matriz[i][j][k] = 0;          
        }
      }
    }
  }
}

void print_array(int ***matriz, int x, int y, int plan_z){
  for (int i = 0; i < x; i++){
    for (int j = 0; j < y; j++){
      printf("%d ", matriz[i][j][plan_z]);
    }
    printf("\n");
  }
}
int main(){
  int ***matriz, x=30, y=30, z=30, r_a=9, r_b=13, plan_z=4; // Valores default para testes;
  system("@cls||clear");
  printf("=====| Dimensões da matriz: \n");
  printf("Quantidade de elementos na direção de X: ");
  scanf("%d", &x);
  printf("Quantidade de elementos na direção de Y: ");
  scanf("%d", &y);
  printf("Quantidade de elementos na direção de Z: ");
  scanf("%d", &z);

  printf("\n=====| Raios da elipse: \n");
  printf(".:: Digite raio menor (a) da elipse: ");
  scanf("%d", &r_a);
  printf(".:: Digite o raio maior (b) da elipse: ");
  scanf("%d", &r_b);

  printf("\n=====| Seção de corte transversal: \n");
  printf(".:: Qual dimensão (z) deseja mostrar a elipse 0-%d? ", z-1);
  scanf("%d", &plan_z);

  printf("\n");
	matriz = allocate_array(x, y, z);
  set_data_matriz(matriz, x, y, z, r_a, r_b);

  print_array(matriz, x, y, plan_z);
  return 0;
}