#include <stdio.h>
#include <locale.h>
#include <windows.h>
//Funções
void iniJogo();
void introducao();
void interfaceini();
void trocaDeTela();
void iniHistoria(int personagem);
//part1
void cena1();
    int personagemEscolhido;
    int escolha1;
void caminho1();
        int escolha1;
        int escolha2;
        int escolher1(const char *pergunta, int opcoes);
//personagens
int personagemMenu();
void personagemM();
void personagemCa();
void personagemCo();




int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    introducao();
    interfaceini();
    trocaDeTela();
    iniHistoria(0);
    int personagemEscolhido = personagemMenu();
    iniHistoria(personagemEscolhido);
    cena1();
   // iniJogo();
  //  iniciarJogo();
   // fase1();
  //  fase2();
  //  fimdeJogo();
    return 0;
}
//função de introdução
void introducao(){
    system("echo off");
    system ("color 0A");
    printf("////////////////////////////////\n");
    printf("/////// SEJA BEM-VINDO /////////\n");
    system ("color 0B");
    printf("//////      AO        //////////\n");    
    printf("////// CASTLE OF HISTORY //////\n");    
    printf("//////////////////////////////\n");
    Sleep(2000);
    system ("color 0F");
    system("cls");
}  
//função de interface inicial
void interfaceini(){
    int PLAY=0;
    printf("INTRUÇÕES DO JOGO:\n - O JOGO É DE AVENTURA E ESCOLHAS\n - ESCOLHA APENAS NÚMEROS INTEIROS, VARIADOS DE 1 ATÉ 5.\n - DIVIRTA-SE!\nPRESSIONE 1 PARA JOGAR OU 2 PARA SAIR:\n");
    scanf("%d", &PLAY);
    if (PLAY == 1){
        printf("INICIANDO JOGO...\n");
        Sleep(2000);
        system("cls");
    }
    else if (PLAY == 2)
    {
        printf("SAINDO...\n");
        Sleep(2000);
        system("cls");
        exit(0);
    }
    
    else{
        printf("OPÇÃO INVÁLIDA. TENTE NOVAMENTE.\n");
        Sleep(2000);
        system("cls");
        interfaceini();
    }
} 
//função de troca de tela
void trocaDeTela(){
    system ("color 0A");
    printf("Carregando...\n");
    Sleep(2000);
    system("cls");
    system ("color 0F");
}
//Introdução da história
void iniHistoria(int personagem){
    printf("=====SEJA BEM-VINDO AO CASTELO DA HISTORIA!=====\nEra uma vez, em ByteLand, um reino onde a magia se mistura com doces encantados que sao mais valiosos que ouro.\n Acada ano, o povo aguarda ansiosamente o Grande Festival do Bolo Real, o evento mais delicioso e festivo do calendario.\n É nesse dia que a bondosa Princesa Pixel escolhe o bolo mais magnifico do reino para dividir com todos, espalhando alegria eesperança em seu vilarejo.  \nMas este ano, algo terrível aconteceu…\n");
    printf("\nNa calada da noite, o Bolo Supremo, a joia da festa, desapareceu      misteriosamente!\n As cozinhas reais estao em alvoroco, o povo esta em choque e a honra da princesa esta em risco.\n");
    // Exemplo de uso do personagem escolhido:
    switch(personagem) {
        case 1:
            printf("\nO mercenário Tutti Frutti sente que pode lucrar com essa situação...\n");
            break;
        case 2:
            printf("\nO cavaleiro Jelly Beans jura proteger a honra do reino!\n");
            break;
        case 3:
            printf("\nO camponês Candy Drops quer ajudar sua princesa favorita!\n");
            break;
        default:
            break;
    }
    system("cls");
}
//função de escolha de personagem
int personagemMenu(){
    int escolha;
    printf("Voce iniciara sua aventura e pode escolher entre tres personagens:\n");
    printf("Escolha seu personagem:\n1- O ARDILOSO MERCENÁRIO TUTTI FRUTTI\n2- O CORAJOSO CAVALEIRO JELLY BEANS\n3- O HONESTO CAMPONÊS CANDY DROPS\n");
    scanf("%d", &escolha);
    switch (escolha){
        case 1:
            personagemM();
            return 1;
        case 2:
            personagemCa();
            return 2;
        case 3:
            personagemCo();
            return 3;
        default:
            printf("Opção inválida. Tente novamente.\n");
            return personagemMenu();
    }
}
void personagemM() {
    printf("Você escolheu o ARDILOSO MERCENÁRIO TUTTI FRUTTI!\n");
    Sleep(2000);
}

void personagemCa() {
    printf("Você escolheu o CORAJOSO CAVALEIRO JELLY BEANS!\n");
    Sleep(2000);
}

void personagemCo() {
    printf("Você escolheu o HONESTO CAMPONÊS CANDY DROPS!\n");
    Sleep(2000);
}
//cena1 
void cena1(){
    if(personagemEscolhido==1){
        printf("Narrador: O mercenário Tutti Frutti sai da Taberna em direção ao castelo para ouvir o que o rei tem de tão urgente para anunciar.\n");  
        printf("Rei: Aconteceu uma desgraça!! O Cupcake Real foi roubado. Sem ele não é possível acontecer o festival, pois ele simboliza toda a energia vital do meu reinado. Àquele que encontrar o Cupcake será concedido a honra de se casar\n");
        int escolha1 = escolher1(
            "Voce pensa:\n1- Conquistar a Princesa poderia ser um negócio bem rentável. Nunca mais precisaria trabalhar.\n2- É um investimento bem arriscado. O prejuízo seria enorme. Prefiro não arriscar.\nEscolha: ",
            2
        );
        if(escolha1==1){
            printf("Narrador: Tutti Frutti decide ajudar o rei a encontrar o Cupcake Real, na esperança de conquistar a princesa e garantir um futuro próspero.\n");
            
        } else if(escolha1==2){
            printf("Narrador: Tutti Frutti decide não se envolver na busca pelo Cupcake Real, preferindo manter sua independência e evitar riscos desnecessários.\n");
           printf("Entretanto, Tutti Frutti é contratado para resgatar o Cupcake Real, e vê nisso uma oportunidade de lucro.\n");
        }
        else{
            printf("Opção inválida. Tente novamente.\n");
            cena1();
        }
        
    }
    if (personagemEscolhido==2)
    {
        printf("Narrador: O cavaleiro Jelly Beans larga seu posto no castelo e vai em direção ao local que o rei vai anunciar seu comunicado urgente.\n");
        printf("Rei: Aconteceu uma desgraça!! O Cupcake Real foi roubado. Sem ele não é possível acontecer o festival, pois ele simboliza toda a energia vital do meu reinado. Àquele que encontrar o Cupcake será concedido a honra de se casar com a princesa.\n");
        int escolha1 = escolher1(
            "Voce pensa:\n1- Proteger a honra do reino é meu dever. Aceito a missão.\n2- Isso não é da minha conta. Prefiro ficar fora dessa.\nEscolha: ",
            2
        );
    } if (escolha1==1)
    {
        printf("Narrador: Jelly Beans decide ajudar o rei a encontrar o Cupcake Real, na esperança de conquistar a princesa e garantir um futuro próspero.\n");
        
    } else if(escolha1==2){
        printf("Narrador: Jelly Beans decide não se envolver na busca pelo Cupcake Real, preferindo manter sua independência e evitar riscos desnecessários.\n");
       printf("Entretanto, Jelly Beans é contratado para resgatar o Cupcake Real, e vê nisso uma oportunidade de lucro.\n");
    }
    else{
        printf("Opção inválida. Tente novamente.\n");
        cena1();
    }
    {
        if (personagemEscolhido==3){
            printf("Narrador: O Camponês Candy Drops sai de sua fazenda em direção ao castelo para ouvir o que o rei tem de tão urgente para anunciar. ")
            printf("Rei: Aconteceu uma desgraça!! O Cupcake Real foi roubado. Sem ele não é possível acontecer o festival, pois ele simboliza toda a energia vital do meu reinado. Àquele que encontrar o Cupcake será concedido a honra de se casar com a princesa.\n");
            int escolha1 = escolher1(
                "1- Preciso aproveitar essa grande oportunidade de recompensa.\n2- Isso não é da minha conta e muito perigoso. Prefiro ficar fora dessa.\nEscolha: ",
                2
            );
        }else if (escolha1==2)
        {
            printf("Narrador: Candy Drops decide não se envolver na busca pelo Cupcake Real, preferindo manter sua independência e evitar riscos desnecessários.\n");
           printf("Entretanto, Candy Drops é contratado para resgatar o Cupcake Real, e vê nisso uma oportunidade de lucro.\n");
        }
        else{
            printf("Opção inválida. Tente novamente.\n");
            cena1();
        }
        
    }
    
    
}
void Caminho1(){
    int escolha1;
    int escolha2;
    printf("O personagem segue em direção à ponte. Ao sair do castelo, encontra uma colher.");
    escolha1 = escolher1(
        "O que o personagem faz?\n1- Pega a colher.\n2- Ignora a colher e segue em frente.\nEscolha: ",
        2
    );
    if (escolha1 == 1) {
        printf("O personagem pega a colher, que pode ser útil mais tarde.\n");
    } else if (escolha1 == 2) {
        printf("O personagem decide não pegar a colher e continua seu caminho.\n");
    } else {
        printf("Opção inválida. Tente novamente.\n");
        Caminho1();
    }
    
}