#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tempo, horas, horas_seg, minutos, segundos, resto;
    horas_seg=3600;//horas em segundos

    printf("Coloque um valor em segundos para ser convertido em horas, minutos e segundos: ");
    scanf("%d", &tempo);

    horas = tempo/horas_seg; //resultado da hora

    resto= tempo % horas_seg;

    minutos = resto/ 60;

    segundos = resto % 60;

    printf("%dh : %dm :%ds \n",horas,minutos,segundos);

   return 0;

}
