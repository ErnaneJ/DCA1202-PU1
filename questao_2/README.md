# Questão 2

- [x] Gerar array de sinais 8x8 aleatóriamente de 0 e 1;
- [x] Utilizar uma variável unsigned long int para armazenar esses dados sequencialmente em cada um dos seus 8 bytes de memória;
- [x] Mostrar na saída a impressão e comparação dos dados na matriz e a variável.

## Exemplo de execução:

```
.:: Array de sinais 8x8:

    1 0 1 0 0 0 1 1 
    1 1 0 0 1 1 1 0 
    1 0 0 0 1 0 0 1 
    1 1 0 0 1 0 0 0 
    1 0 0 0 1 1 1 1 
    1 1 1 0 1 1 1 0 
    1 1 1 0 1 1 0 1 
    1 0 1 0 1 1 1 1 
    
.:: Populando unsigned long int com sinais do array 2D 8x8..

.:: Deseja, Sim(1) ou Não(1), mostrar as operações bit a bit? 0

.:: Comparativo: 
.::: Array de sinais 8x8 em linha: |10100011|11001110|10001001|11001000|10001111|11101110|11101101|10101111|
.::: Bits do Unsigned long int:    |10100011|11001110|10001001|11001000|10001111|11101110|11101101|10101111|
```

### Operações bit a bit dessa execução:

```
Envia sinal 0 para o bit 128 do byte 7: 
  10000000
  00000000  OR(|) 
-------------------
  10000000

Envia sinal 1 para o bit 64 do byte 7: 
  10111111
  10000000  AND(&) 
-------------------
  10000000

Envia sinal 0 para o bit 32 do byte 7: 
  00100000
  10000000  OR(|) 
-------------------
  10100000

Envia sinal 1 para o bit 16 do byte 7: 
  11101111
  10100000  AND(&) 
-------------------
  10100000

Envia sinal 1 para o bit 8 do byte 7: 
  11110111
  10100000  AND(&) 
-------------------
  10100000

Envia sinal 1 para o bit 4 do byte 7: 
  11111011
  10100000  AND(&) 
-------------------
  10100000

Envia sinal 0 para o bit 2 do byte 7: 
  00000010
  10100000  OR(|) 
-------------------
  10100010

Envia sinal 0 para o bit 1 do byte 7: 
  00000001
  10100010  OR(|) 
-------------------
  10100011

Envia sinal 0 para o bit 128 do byte 6: 
  10000000
  00000000  OR(|) 
-------------------
  10000000

Envia sinal 0 para o bit 64 do byte 6: 
  01000000
  10000000  OR(|) 
-------------------
  11000000

Envia sinal 1 para o bit 32 do byte 6: 
  11011111
  11000000  AND(&) 
-------------------
  11000000

Envia sinal 1 para o bit 16 do byte 6: 
  11101111
  11000000  AND(&) 
-------------------
  11000000

Envia sinal 0 para o bit 8 do byte 6: 
  00001000
  11000000  OR(|) 
-------------------
  11001000

Envia sinal 0 para o bit 4 do byte 6: 
  00000100
  11001000  OR(|) 
-------------------
  11001100

Envia sinal 0 para o bit 2 do byte 6: 
  00000010
  11001100  OR(|) 
-------------------
  11001110

Envia sinal 1 para o bit 1 do byte 6: 
  11111110
  11001110  AND(&) 
-------------------
  11001110

Envia sinal 0 para o bit 128 do byte 5: 
  10000000
  01010101  OR(|) 
-------------------
  11010101

Envia sinal 1 para o bit 64 do byte 5: 
  10111111
  11010101  AND(&) 
-------------------
  10010101

Envia sinal 1 para o bit 32 do byte 5: 
  11011111
  10010101  AND(&) 
-------------------
  10010101

Envia sinal 1 para o bit 16 do byte 5: 
  11101111
  10010101  AND(&) 
-------------------
  10000101

Envia sinal 0 para o bit 8 do byte 5: 
  00001000
  10000101  OR(|) 
-------------------
  10001101

Envia sinal 1 para o bit 4 do byte 5: 
  11111011
  10001101  AND(&) 
-------------------
  10001001

Envia sinal 1 para o bit 2 do byte 5: 
  11111101
  10001001  AND(&) 
-------------------
  10001001

Envia sinal 0 para o bit 1 do byte 5: 
  00000001
  10001001  OR(|) 
-------------------
  10001001

Envia sinal 0 para o bit 128 do byte 4: 
  10000000
  10101010  OR(|) 
-------------------
  10101010

Envia sinal 0 para o bit 64 do byte 4: 
  01000000
  10101010  OR(|) 
-------------------
  11101010

Envia sinal 1 para o bit 32 do byte 4: 
  11011111
  11101010  AND(&) 
-------------------
  11001010

Envia sinal 1 para o bit 16 do byte 4: 
  11101111
  11001010  AND(&) 
-------------------
  11001010

Envia sinal 0 para o bit 8 do byte 4: 
  00001000
  11001010  OR(|) 
-------------------
  11001010

Envia sinal 1 para o bit 4 do byte 4: 
  11111011
  11001010  AND(&) 
-------------------
  11001010

Envia sinal 1 para o bit 2 do byte 4: 
  11111101
  11001010  AND(&) 
-------------------
  11001000

Envia sinal 1 para o bit 1 do byte 4: 
  11111110
  11001000  AND(&) 
-------------------
  11001000

Envia sinal 0 para o bit 128 do byte 3: 
  10000000
  10010101  OR(|) 
-------------------
  10010101

Envia sinal 1 para o bit 64 do byte 3: 
  10111111
  10010101  AND(&) 
-------------------
  10010101

Envia sinal 1 para o bit 32 do byte 3: 
  11011111
  10010101  AND(&) 
-------------------
  10010101

Envia sinal 1 para o bit 16 do byte 3: 
  11101111
  10010101  AND(&) 
-------------------
  10000101

Envia sinal 0 para o bit 8 do byte 3: 
  00001000
  10000101  OR(|) 
-------------------
  10001101

Envia sinal 0 para o bit 4 do byte 3: 
  00000100
  10001101  OR(|) 
-------------------
  10001101

Envia sinal 0 para o bit 2 do byte 3: 
  00000010
  10001101  OR(|) 
-------------------
  10001111

Envia sinal 0 para o bit 1 do byte 3: 
  00000001
  10001111  OR(|) 
-------------------
  10001111

Envia sinal 0 para o bit 128 do byte 2: 
  10000000
  10011010  OR(|) 
-------------------
  10011010

Envia sinal 0 para o bit 64 do byte 2: 
  01000000
  10011010  OR(|) 
-------------------
  11011010

Envia sinal 0 para o bit 32 do byte 2: 
  00100000
  11011010  OR(|) 
-------------------
  11111010

Envia sinal 1 para o bit 16 do byte 2: 
  11101111
  11111010  AND(&) 
-------------------
  11101010

Envia sinal 0 para o bit 8 do byte 2: 
  00001000
  11101010  OR(|) 
-------------------
  11101010

Envia sinal 0 para o bit 4 do byte 2: 
  00000100
  11101010  OR(|) 
-------------------
  11101110

Envia sinal 0 para o bit 2 do byte 2: 
  00000010
  11101110  OR(|) 
-------------------
  11101110

Envia sinal 1 para o bit 1 do byte 2: 
  11111110
  11101110  AND(&) 
-------------------
  11101110

Envia sinal 0 para o bit 128 do byte 1: 
  10000000
  00110000  OR(|) 
-------------------
  10110000

Envia sinal 0 para o bit 64 do byte 1: 
  01000000
  10110000  OR(|) 
-------------------
  11110000

Envia sinal 0 para o bit 32 do byte 1: 
  00100000
  11110000  OR(|) 
-------------------
  11110000

Envia sinal 1 para o bit 16 do byte 1: 
  11101111
  11110000  AND(&) 
-------------------
  11100000

Envia sinal 0 para o bit 8 do byte 1: 
  00001000
  11100000  OR(|) 
-------------------
  11101000

Envia sinal 0 para o bit 4 do byte 1: 
  00000100
  11101000  OR(|) 
-------------------
  11101100

Envia sinal 1 para o bit 2 do byte 1: 
  11111101
  11101100  AND(&) 
-------------------
  11101100

Envia sinal 0 para o bit 1 do byte 1: 
  00000001
  11101100  OR(|) 
-------------------
  11101101

Envia sinal 0 para o bit 128 do byte 0: 
  10000000
  01000000  OR(|) 
-------------------
  11000000

Envia sinal 1 para o bit 64 do byte 0: 
  10111111
  11000000  AND(&) 
-------------------
  10000000

Envia sinal 0 para o bit 32 do byte 0: 
  00100000
  10000000  OR(|) 
-------------------
  10100000

Envia sinal 1 para o bit 16 do byte 0: 
  11101111
  10100000  AND(&) 
-------------------
  10100000

Envia sinal 0 para o bit 8 do byte 0: 
  00001000
  10100000  OR(|) 
-------------------
  10101000

Envia sinal 0 para o bit 4 do byte 0: 
  00000100
  10101000  OR(|) 
-------------------
  10101100

Envia sinal 0 para o bit 2 do byte 0: 
  00000010
  10101100  OR(|) 
-------------------
  10101110

Envia sinal 0 para o bit 1 do byte 0: 
  00000001
  10101110  OR(|) 
-------------------
  10101111
```