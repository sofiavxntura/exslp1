### Explique com suas próprias palavras as diferentes abordagens dos exercícios 2 e 3.
- A abordagem do Exercício 2 não usa ponteiros e puxamos os atributos da struct à mão.
- Já no Exercício 3, apenas apontamos um valor geral (P) uma vez, através de ponteiro, sem precisar puxar P1 e P2 manualmente.

### Qual abordagem você prefere usar e porquê?
Para usar com poucos personagens (variáveis), eu prefiro a abordagem 2, por ficar mais intuitiva.
Mas, de forma geral, a abordagem 3 seria a melhor, por usar menos código e "tirar" parte do trabalho manual de puxar cada atributo da struct.

### Na sua opinião quais são as diferenças de uso de memória e velocidade nas duas abordagens?
Acredito que a 3 use menos memória por preencher os atributos das structs quando necessário. Portanto, por ser mais eficiente, também imagino que seja mais rápida que a 2.
