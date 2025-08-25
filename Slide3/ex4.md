### Qual é a diferença entre tipagem estática e dinâmica?
#### Na tipagem estática, deve-se declarar o tipo da variável antes de usá-la. Já na dinâmica, é possível apenas atribuir um valor à variável, e, depois até mudar seu tipo.
---
### Dê exemplos de linguagens que usem tipagem estática e exemplos de linguagens que usem tipagem dinâmica.
- **Estática:** C, C++, Java
- **Dinâmica:** Python, Javascript
-----
### Por quê uma linguagem com tipagem estática é tipicamente mais rápida do que uma com tipagem dinâmica? Justifique usando um exemplo.
#### Porque a tipagem estática remove o tempo extra gasto para verificar o tipo da varíavel, ao contrário da dinâmica.
##### C: a solução é dada diretamente, já que a máquina já sabe os tipos de a e b (int)
```
int main(){
  int a = 10,b = 20;
  int soma = (a+b);
  printf("soma: %d",soma)
}
```
##### Python: primeiro se verificam os tipos de a e b, depois é feita a operação.
```
def soma(a,b):
  return a+b 
```
