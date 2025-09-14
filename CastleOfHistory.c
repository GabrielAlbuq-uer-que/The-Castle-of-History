#include <stdio.h>
#include <locale.h>
#include <windows.h>
//Variaveis
int PLAY, Go;



//Função Principal
int main(void) {
    //Acentuações em Português
        setlocale(LC_ALL, "Portuguese_Brazil");
        system("chcp 65001");
        
    //INTRODUÇÃO
    printf("////////////////////////////////\n");
    printf("/////// SEJA BEM-VINDO /////////\n");
    printf("//////      AO        //////////\n");    
    printf("////// CASTLE OF HISTORY //////\n");    
    printf("//////////////////////////////\n");

    printf("PRESSIONE 1 PARA JOGAR\n");
    scanf("%d", &PLAY);
    //Iniciar Jogo
    if (PLAY == 1){
            printf("INICIANDO JOGO...\n");
            Sleep(2000);
            system("cls");
            printf("=====SEJA BEM-VINDO AO CASTELO DA HISTÓRIA!=====\n Neste jogo você jogará com o Grande Guarda Real Jelly beans.\n");
            printf("Que deseja se casar com a grande princesa do reino, a Princesa Cupcake.\nSó que para isso, você deve concluir a busca pelo Perfect Cake.\n");
        
        }
       

    return 0;
}