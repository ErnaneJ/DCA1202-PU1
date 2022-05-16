#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ***allocate_array(int x, int y, int z){ // Aloca dinamicamente a matriz de dimensões x, y e z.
	int ***matriz = (int***)malloc(x * sizeof(int**));
 	if (matriz == NULL){
		printf("\n\n> Erro ao realizar alocação.\n> Programa encerrado.\n\n");
    exit(1);
	}
  for (int i = 0; i < x; i++){
    matriz[i] = (int**)malloc(y * sizeof(int*));
    if (matriz[i] == NULL){
      printf("\n\n> Erro ao realizar alocação.\n> Programa encerrado.\n\n");
    	exit(1);
    }
    for (int j = 0; j < y; j++)    {
      matriz[i][j] = (int*)malloc(z * sizeof(int));
      if (matriz[i][j] == NULL){
				printf("\n\n> Erro ao realizar alocação.\n> Programa encerrado.\n\n");
    		exit(1);
      }
    }
  }

	return matriz;
}

// Insere na matriz os dados correspondentes ao elipsoide
void set_data_matriz(int ***matriz, int x, int y, int z, int a, int b, int r_c){ 
  for(int i = 0; i < x; i++){
    for(int j = 0; j < y; j++){
      for(int k = 0; k < z; k++){
        // Verifica se o ponto da iteração atual esta incluso no elipsoide
        if(1 >= (pow((i-(x/2)), 2)/pow(a,2) + pow((j-(y/2)), 2)/pow(b,2) + pow(k-(z/2), 2)/pow(r_c,2))){
          matriz[i][j][k] = 1;
        }else{
          matriz[i][j][k] = 0; 
        }
      }
    }
  }
}

void print_array(int ***matriz, int x, int y, int plan_z){ // Imprime um determinado plano da matriz
  for (int i = 0; i < x; i++){
    for (int j = 0; j < y; j++){
      printf("%d ", matriz[i][j][plan_z]);
    }
    printf("\n");
  }
}

int main(){
  // Valores inicializados apenas para facilitar testes
  int ***matriz, x=20, y=20, z=20, r_a=6, r_b=8, r_c=5, plan_z=0, show_all = 0;
  system("@cls||clear");
  printf("=====| Dimensões da matriz: \n");
  printf(".:: Quantidade de elementos na direção de X: ");
  scanf("%d", &x);
  printf(".:: Quantidade de elementos na direção de Y: ");
  scanf("%d", &y);
  printf(".:: Quantidade de elementos na direção de Z: ");
  scanf("%d", &z);

  printf("\n=====| Raios da elipse: \n");
  printf(".:: Digite raio (até %d) \"a\" da elipse: ", x/2);
  scanf("%d", &r_a);
  printf(".:: Digite o raio (até %d) \"b\" da elipse: ", y/2);
  scanf("%d", &r_b);
  printf(".:: Digite o raio (até %d) \"c\" da elipse: ", z/2);
  scanf("%d", &r_c);

  matriz = allocate_array(x, y, z);
  set_data_matriz(matriz, x, y, z, r_a, r_b, r_c);

  printf("\n=====| Seção de corte transversal no plano z: \n");
  printf(".:: Deseja, sim(1) ou não(0), mostrar todos os cortes disponíveis? ");
  scanf("%d", &show_all);
  printf("\n");

  if(show_all == 1){ // Imprime todos os planos disponíveis caso desejado
    for(int i = 0; i<z; i++){
      print_array(matriz, x, y, i);
      printf("\n");
    }
  }

  while (plan_z >= 0){ 
    printf("\n.:: Qual seção de corte em z deseja visualizar?\n");
    printf(".:: Digite -1 para sair ou a seção de corte desejada entre 0 e %d: ", z-1);
    scanf("%d", &plan_z);
    while (plan_z >= z){ // Caso o usuario coloque um plano não permitido solicitará a ele um novo
      printf("\n.:: Atenção! A seção indicada não está definida.\n");
      printf(".:: Digite -1 para sair ou a seção de corte desejada entre 0 e %d: ", z-1);
      scanf("%d", &plan_z);
    }
    if(plan_z < 0) exit(1); // Se a entrada for negativa, o usuário deseja encerrar o programa
    print_array(matriz, x, y, plan_z);
  }

  // Libera matriz
  for (int i = 0; i < x; i++){
    for (int j = 0; j < y; j++){
      free(matriz[i][j]);
      matriz[i][j] = NULL;
    }
    free(matriz[i]);
    matriz[i] = NULL;
  }
  free(matriz);
  matriz = NULL;
  
  return 0;
}