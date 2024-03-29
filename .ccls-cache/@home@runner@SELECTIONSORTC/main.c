#include <stdio.h>

//Perguntar ao professor, ao trocar 145 e 65

int main(void) {
  int vetor_desor[] = {40,30,15,5,100,25,65,145}; //desorganizado
  int fim = 8, p , menor = 0, meio, escolhido;

  for(int i = 0; i < fim; i++)  
  {
    escolhido = vetor_desor[i]; 
    menor = vetor_desor[i+1];
    p = i+1;
    
    for(int j = i+2; j <= fim ; j++)
    {
       if(vetor_desor[j] < menor)
       {
          menor = vetor_desor[j];
          p = j;
       }    
    }
    if(menor < escolhido)
    {
      vetor_desor[i] = vetor_desor[p];
      vetor_desor[p] = escolhido;
    }
    
  }

  for(int i = 0; i < fim ; i++)
    printf("[%d]: %d\n", i, vetor_desor[i]);
}