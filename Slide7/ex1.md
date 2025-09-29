### Qual é a diferença entre struct e union. Dê exemplos de uso que identifiquem a necessidade dos dois construtores de tipos.
- Struct: cria espaço na memória para todos os elementos. O tamanho é a soma de todos os tamanhos dos elementos.
  - Usamos structs quando precisamos de vários dados disponíveis ao mesmo tempo.
- Union: todos compartilham o mesmo espaço. O tamanho é o do maior elemento.
  - Usamos unions quando temos a necessidade de economia de memória e quando não precisamos de tipos diferentes de dados ao mesmo tempo (todos são armazenados, mas só usamos um tipo por vez).
