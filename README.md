<h1 align="center">
   Programação Avançada - DCA1202 | PU1.
</h1>

## 💻 Sobre

Resolução das questões referentes à prova da primeira unidade do curso de **Programação Avançada** do Departamento de Engenharia de Computação e Automação (DCA) na Universidade Federal do Rio Grande do Norte (UFRN) no semestre de 2022.1.

  <details>
    <summary>📝 Resolução das questões:</summary>
    📌 <a href="https://github.com/ErnaneJ/DCA1202-PU1/blob/master/questao_1/main.c">Questão 1;</a><br>
    📌 <a href="https://github.com/ErnaneJ/DCA1202-PU1/blob/master/questao_2/main.c">Questão 2.</a><br>
  </details>

## ⚙️ Execute

- Para desenvolver as questões foi utilizado o compilador gcc:

  ```bash
  $ gcc --version # => gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
  ```

- Seguindo essa linha de raciocíno, se estiver utilizando esse compilador apenas execute o comando abaixo no diretório principal do projeto para observar a saída do programa da questão x desejada.
  ```bash
  $ gcc ./questao_x/main.c -o ./questao_x/main && ./questao_x/main
  ```
  

- Para a questão 2 foi utilizado um conceito não tão recomendado que irá gerar um **warning** no momento da execução do programa. Isso é natural para a resolução desse problema porém, caso queira oculta-lo passe a flag `-w` e ele não gritará na saída. O comando para a questão 2 ficará assim:
  ```bash
  $ gcc ./questao_2/main.c -o ./questao_2/main -w && ./questao_2/main
  ```

- Para a questão 1 foi utilizada a `<math.h>`. Portanto, execute passando a flag `-lm`. O comando de execução para a questão 1 ficará assim:
  ```bash
  $ gcc ./questao_1/main.c -o ./questao_1/main -lm && ./questao_1/main
  ```
---

<div align="center">
  Desenvolvido com ❤ por <a href="https://www.ernane.dev/">Ernane Ferreira</a>. 👋🏻<br/> Insentivado e idealizado no semestre 2022.1 pelo professor <a href="https://agostinhobritojr.github.io/">Agostinho Brito Junior</a>. <br> Universidade Federal do Rio Grande do Norte - Departamento de Engennharia da Computação e Automação.
</div>
