### Considerando o terminador \0, que cuidados são necessários ao lidar com strings e arquivos em C:
#### a) ao escrever uma string para um arquivo
  Ao escrever, o terminador nulo (\0) não deve ser incluído, porque ele marca o fim das strings apenas na memória. Portanto, se usássemos o terminador para escrever, poderíamos acabar com um arquivo corrompido.

#### b) ao ler uma string de um arquivo
  Já quando lemos a string, precisamos adicionar '\0', porque o algoritmo não faz sozinho. Além disso, ao declarar o tamanho de strings (ex: char[5] = agua), devemos colocar o tamanho da string +1, que é o espaço destinado a '\0'.
