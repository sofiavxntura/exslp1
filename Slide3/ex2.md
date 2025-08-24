### O que você espera que aconteça ao compilar o programa? Por quê?
#### Espero que o compilador retorne um erro, porque estou tentando fazer uma operação entre um inteiro e um não inteiro.
-----
### Quais são os tipos dos operandos na operação de subtração?
- 100: **int**
- "10": **string (char[3])**
------
### Transcreva a mensagem de erro de compilação e a explique.
```
D:\APPS\teste.c:2:6: warning: return type of 'main' is not 'int' [-Wmain]
 void main (void) {
      ^~~~
d:\APPS\teste.c: In function 'main':
d:\APPS\teste.c:3:30: error: invalid operands to binary - (have 'int' and 'char *')
     printf("Soma = %d\n", 100-"10");
```
#### Esse erro ocorre, porque, como explicado acima, para fazer uma operação matemática, usaríamos dois dados de tipo int.
