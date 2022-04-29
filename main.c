#include <stdio.h>

int main(void) {
  int Opiniao, Cidadao = 0, Guilherme = 0, Pedro = 0,  Vitoria = 0, Nulo = 0;
  do{
    printf("\nELEIÇÃO PARA SÍNDICO:\n");
    printf("\nEnquete: Em qual dos candidatos você vota para Síndico?\n");
    printf("Escolha: 1 (Guilherme), 2 (Pedro), 3 (Vitoria), 9(Nulo) ou 0 para SAIR.\n");
    printf("Cidadao %i: Qual é o seu voto? ", Cidadao + 1);
    scanf("%i", &Opiniao);
    if (Opiniao == 0)
      printf("\nFIM DA PESQUISA.\n");
    else if (Opiniao != 1 && Opiniao != 2 && Opiniao != 3 && Opiniao != 9)
      printf("Erro na escolha da opinião. Escolha de novo.\n");
    else{
      if (Opiniao == 1)
        Guilherme++;
      if (Opiniao == 2)
        Pedro++;
      if (Opiniao == 3)
      Vitoria++;
      if (Opiniao ==9)
        Nulo++;
    
      Cidadao++;
    }
  }while(Opiniao != 0);
  {
          printf("Porcentagem do Guilherme: %.1f %%\n", Guilherme * 100.0 / (Guilherme + Pedro + Vitoria + Nulo));
      printf("Porcentagem do Pedro: %.1f %%\n", Pedro * 100.0 / (Guilherme + Pedro + Vitoria + Nulo));
      printf("Porcentagem da Vitoria: %.1f %%\n", Vitoria * 100.0 / (Guilherme + Pedro + Vitoria + Nulo));
      printf("Porcentagem de Votos Nulos: %.1f %%\n", Nulo * 100.0 / (Guilherme + Pedro + Vitoria + Nulo)); 
  };
  return 0;
}
