#include <stdio.h>
#include <locale.h>
#include <windows.h>
//Variaveis
int PLAY, Go;



//Função Principal
int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
        
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
        int decisao;
            printf("=====SEJA BEM-VINDO AO CASTELO DA HISTÓRIA!=====\nEra uma vez, em ByteLand, um reino onde a magia se mistura com doces encantados que são mais valiosos que ouro.\n Acada ano, o povo aguarda ansiosamente o Grande Festival do Bolo Real, o evento mais delicioso e festivo do calendário.\n É nesse dia que a bondosa Princesa Pixel escolhe o bolo mais magnífico do reino para dividir com todos, espalhando alegria eesperança em seu vilarejo.  \nMas este ano, algo terrível aconteceu…\n");
            printf("\nNa calada da noite, o Bolo Supremo, a joia da festa, desapareceu  misteriosamente!\n As cozinhas reais estão emalvoroço, o povo está em choque e a honra da princesa está em risco.\n");
            Sleep(1000);
            printf("O Soldado Jelly Beans pensa:\n 1- Não exise outra forma de conquistar a princesa, preciso fazer isso! \n2- Não posso fazer isso é muito perigoso\n");
            scanf("%d", &decisao);
            if (decisao == 1){
                if (decisao == 1){
                    int colher;
                 printf("Armado apenas com sua determinação,\n ele parte em uma jornada repleta de perigos, enigmas e criaturas excêntricas.  \n");
                 system("cls");
                 printf("Ao andar pelo castelo, o soldade encontra uma grande colher, que por um estranho motivo brilha intensamente.\n");
                 printf("O que o soldado deve fazer?\n 1- Pegar a colher\n 2- Ignorar a colher\n");
                 scanf("%d", &colher);
                    if (colher == 1){
                        printf("O soldado pegou a colher e agora tem uma arma poderosa para enfrentar os desafios que virão!\n");
                    } else {
                        printf("O soldado ignorou a colher, mas pode se arrepender disso mais tarde...\n");
                 }  

            }
        }
    }

    return 0;
}