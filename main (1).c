#include <stdio.h>

int main()
{
   
   int decisao;
   
   printf("-------------------Calculadora em C-------------------\n");
   printf("Qual operação deseja realizar ?\n (1-Adição, 2-Subtração, 3-Multplicação ou 4-Divisão).\n");
   scanf("%i", &decisao);
   
   switch(decisao){
   case 1:
    printf("Digite o primeiro número: ");
    int  numAd1,numAd2;
    scanf(" %i", &numAd1);
    printf("Digite o segundo número: ");
    scanf(" %i", &numAd2);
    printf("%i + %i = %i",numAd1,numAd2, numAd1+numAd2);    
    break;
    
    case 2:
    int  numSub1,numSub2;
    printf("Digite o primeiro número: ");
    scanf(" %i", &numSub1);
    printf("Digite o segundo número: ");
    scanf(" %i", &numSub2);
    printf("%i - %i = %i",numSub1,numSub2, numSub1-numSub2);  
    break;
    
    case 3:
    int  numMul1,numMul2;
    printf("Digite o primeiro número: ");
    scanf(" %i", &numMul1);
    printf("Digite o segundo número: ");
    scanf(" %i", &numMul2);
    printf("%i x %i = %i",numMul1,numMul2, numMul1*numMul2);  
    break;
    
    case 4:
    int  numDiv1,numDiv2;
    
   
      printf("Digite o divisor: ");
      scanf(" %i", &numDiv1);
      printf("Digite o dividendo: ");
      scanf(" %i", &numDiv2);
      if(numDiv1 == 0 || numDiv2 == 0){
        printf("Erro");
      }else{
        printf("%i / %i = %i", numDiv1,numDiv2, numDiv1/numDiv2);    
      }
      
      
   
    break;
    
    default:
    printf("Só é aceito números de 1 ao 4");
    break;
    
   }
   
   return 0;
}
