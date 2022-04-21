#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printbyte(unsigned char byte){
  unsigned char i;
  for(i = 128 ; i > 0 ; i = i >> 1){
    if(i & byte){ printf("1"); }
    else{ printf("0"); }
  }
}

void set_data_array(unsigned char array[][8]){
  srand(time(NULL));
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      array[i][j] = (rand() % 10) >= 5 ? 1 : 0;
    }
  }
}

void print_array(unsigned char array[][8], int show_inline){
  if(show_inline == 0){
    printf("    ");
    for (int i = 0; i < 8; i++){
      for (int j = 0; j < 8; j++){
        printf("%d ", array[i][j]);
      }
      printf("\n    ");
    }
  }else{
    for (int i = 0; i < 8; i++){
      for (int j = 0; j < 8; j++){
        printf("%d", array[i][j]);
      }
      printf("|");
    }
  }
}

void operating_bit_by_bit(unsigned char bit_array[][8], int show_operations, unsigned char *p_array){
  unsigned char i;
  int count_colunms = 0, count_lines = 0;
  for(int k=7; k>=0; k--){
    count_colunms = 0;
    for(i = 128 ; i > 0 ; i = i >> 1){
      if(bit_array[count_lines][count_colunms] == 0){
        if(show_operations){
          printf("Envia sinal 1 para o bit %d do byte %d: \n", i, k);
          printf("  ");printbyte(~i);printf("\n  ");
          printbyte(p_array[k]);printf("  AND(&) \n");
          printf("-------------------\n  ");
          p_array[k] &= ~i;
          printbyte(p_array[k]);printf("\n\n");
        }else{p_array[k] &= ~i;}
      }else{
        if(show_operations){
          printf("Envia sinal 0 para o bit %d do byte %d: \n", i, k);
          printf("  ");printbyte(i);printf("\n  ");
          printbyte(p_array[k]);printf("  OR(|) \n");
          printf("-------------------\n  ");
          p_array[k] |= i;  
          printbyte(p_array[k]);printf("\n\n");
        }else{p_array[k] |= i;}
      }
      count_colunms++;
    }
    count_lines++;
  }
}

int main(){
  unsigned long int inline_bits;
  unsigned char bit_array[8][8];
  unsigned char *p_array;
  int count_lines = 0, count_colunm = 0, show_operations = 0;

  p_array = &inline_bits;

  set_data_array(bit_array);

  printf("\n.:: Array de sinais 8x8:\n\n");
  print_array(bit_array, 0);

  printf("\n.:: Populando unsigned long int com sinais do array 2D 8x8..\n");
  printf("\n.:: Deseja, Sim(1) ou Não(1), mostrar as operações bit a bit? ");
  scanf("%d", &show_operations);printf("\n");

  operating_bit_by_bit(bit_array, show_operations, p_array);

  printf(".:: Comparativo: ");
  printf("\n.::: Array de sinais 8x8 em linha: |");
  print_array(bit_array, 1);
  
  printf("\n.::: Bits do Unsigned long int:    |");
  for(int i=7; i>=0; i--){
    printbyte(p_array[i]);
    printf("|");
  }
  printf("\n");
  return 0;
}