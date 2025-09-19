#include <stdio.h>
#include <locale.h>
#include <windows.h>
//Funções
void iniJogo();
void introducao();
void interfaceini();
void trocaDeTela();
void iniHistoria(int personagem);
//cenas e caminhos;
void cena1();
int personagemEscolhido;
int escolha1;
int escolher1(const char *pergunta, int opcoes);
void Caminho1();
int escolhercolher(const char *pergunta, int opcoes);
int escolhatroll(const char *pergunta, int opcoes);
void caminho2();
    int escolhaPantano;
void pantano();
void floresta();
//personagens;
int personagemMenu();
void personagemM();
void personagemCa();
void personagemCo();

int escolher(const char *pergunta, int opcoes) {
    int escolha = 0;
    printf("%s", pergunta);
    scanf("%d", &escolha);
    if (escolha < 1 || escolha > opcoes) {
        printf("Opção inválida. Tente novamente.\n");
        return escolher(pergunta, opcoes);
    }
    return escolha;
}


int escolher1(const char *pergunta, int opcoes) {
    return escolher(pergunta, opcoes);
}
int escolhercolher(const char *pergunta, int opcoes) {
    return escolher(pergunta, opcoes);
}
int escolhatroll(const char *pergunta, int opcoes) {
    return escolher(pergunta, opcoes);
}
const char* nomePersonagem(int personagem) {
    switch(personagem) {
        case 1: return "Tutti Frutti";
        case 2: return "Jelly Beans";
        case 3: return "Candy Drops";
        default: return "Personagem";
    }
}

//funçãoMAIN
int main(void) {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    introducao();
    interfaceini();
    trocaDeTela();
    iniHistoria(0);
            personagemEscolhido = personagemMenu(); // usa a variável global
            iniHistoria(personagemEscolhido);
    cena1();
    Caminho1();
    caminho2();
    pantano();
    floresta();
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
        Sleep(3000);
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
    system("cls");
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
    printf("ESCOLHA: ");
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
    printf("Você escolheu o %s!\n", nomePersonagem(1));
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
        escolha1 = escolher1(
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
    else if (personagemEscolhido==2) {
        printf("Narrador: O cavaleiro Jelly Beans larga seu posto no castelo e vai em direção ao local que o rei vai anunciar seu comunicado urgente.\n");
        printf("Rei: Aconteceu uma desgraça!! O Cupcake Real foi roubado. Sem ele não é possível acontecer o festival, pois ele simboliza toda a energia vital do meu reinado. Àquele que encontrar o Cupcake será concedido a honra de se casar com a princesa.\n");
        escolha1 = escolher1(
            "Voce pensa:\n1- Proteger a honra do reino é meu dever. Aceito a missão.\n2- Isso não é da minha conta. Prefiro ficar fora dessa.\nEscolha: ",
            2
        );
        if (escolha1==1) {
            printf("Narrador: Jelly Beans decide ajudar o rei a encontrar o Cupcake Real, na esperança de conquistar a princesa e garantir um futuro próspero.\n");
            
        } else if(escolha1==2){
            printf("Narrador: Jelly Beans decide não se envolver na busca pelo Cupcake Real, preferindo manter sua independência e evitar riscos desnecessários.\n");
           printf("Entretanto, Jelly Beans é contratado para resgatar o Cupcake Real, e vê nisso uma oportunidade de lucro.\n");
        }
    }
    else if (personagemEscolhido==3){
        printf("Narrador: O Camponês Candy Drops sai de sua fazenda em direção ao castelo para ouvir o que o rei tem de tão urgente para anunciar. ");
        printf("Rei: Aconteceu uma desgraça!! O Cupcake Real foi roubado. Sem ele não é possível acontecer o festival, pois ele simboliza toda a energia vital do meu reinado. Àquele que encontrar o Cupcake será concedido a honra de se casar com a princesa.\n");
        escolha1 = escolher1(
            "1- Preciso aproveitar essa grande oportunidade de recompensa.\n2- Isso não é da minha conta e muito perigoso. Prefiro ficar fora dessa.\nEscolha: ",
            2
        );
        if (escolha1==1) {
            printf("Narrador: Candy Drops decide ajudar o rei a encontrar o Cupcake Real, na esperança de conquistar a princesa e garantir um futuro próspero.\n");
        } else if (escolha1==2) {
            printf("Narrador: Candy Drops decide não se envolver na busca pelo Cupcake Real, preferindo manter sua independência e evitar riscos desnecessários.\n");
            printf("Entretanto, Candy Drops é contratado para resgatar o Cupcake Real, e vê nisso uma oportunidade de lucro.\n");
        }
        
    } else {
        printf("Opção inválida. Tente novamente.\n");
        cena1();
    }}
//Encontro com o troll
void Caminho1(){
    int escolhacolher;
    int escolhaTroll;
    int escolhatroll();
    printf("O personagem segue em direção à ponte. Ao sair do castelo, encontra uma colher.");
    escolhacolher = escolhercolher(
        "O que o personagem faz?\n1- Pega a colher.\n2- Ignora a colher e segue em frente.\nEscolha: ",
        2
    );
    if (escolhacolher == 1) {
        printf("O personagem pega a colher, que pode ser útil mais tarde.\n");
    } else if (escolhacolher == 2) {
        printf("O personagem decide não pegar a colher e continua seu caminho.\n");
    }
    //Ponte do troll
    printf("Narrador: a colher é uma parte essencial da jornada de %s. Com ela é possível derrotar os monstros comestíveis.\n", nomePersonagem(personagemEscolhido));
    printf("Ao chegar na ponte, %s encontra um troll que bloqueia a passagem.\n", nomePersonagem(personagemEscolhido));
    printf("O troll está faminto, entretando, existe uma opção, voce se esconde.\n");
    printf("O que %s faz?\n", nomePersonagem(personagemEscolhido));
    escolhaTroll = escolhatroll(
        "1- Enfrenta o troll em combate.\n2- Se esconde e passa pelo pantano.\nEscolha: ",
        2
    );
    if (escolhaTroll == 1 && escolhacolher == 1) {
        printf("Usando a colher, tenta lutar, o Troll se irrita e %s nao consegue derrotar o troll e nao atravessa a ponte em segurança.\n", nomePersonagem(personagemEscolhido));
    } else if (escolhaTroll == 2 && escolhacolher == 2) {
        printf("%s se esconde habilmente, mas é notado pelo troll, que diz:\nTroll:\n", nomePersonagem(personagemEscolhido));
        printf("Troll: Olá, viajante! Eu sou o grande Oreo, o guardião desta ponte. Se você deseja atravessá-la, irei lhe ajudar.\n");
        printf("Troll: E ah, aqui está a colher que você deixou para trás. Use-a sabiamente em sua jornada!\n Lembre-se nunca deixe as coisas para trás, entretanto, saiba seguir sem o peso dela em sua jornada!\n");
    } else {
        printf("Opção inválida. Tente novamente.\n");
        Caminho1();
    }
{system("cls");}
}
//Indo para ponte
void caminho2(){
    int escolhaPantano;
    printf("Troll: Voce ja ouviu falar sobre o pantano de chocolate? Então, eu recomendaria ir por lá.\n");
    printf("Narrador: %s já ouvira falar do temível Pântano de Chocolate. As histórias são sombrias e ninguém jamais nunca saiu vivo de lá. Diante disso:", nomePersonagem(personagemEscolhido));
    printf("1- Atravessa o pântano de chocolate, enfrentando os perigos que lá habitam.\n2- Decide contornar o pântano, mesmo que isso signifique uma jornada mais longa e perigosa pela floresta.\nEscolha: ");
    scanf("%d", &escolhaPantano);
        if (escolhaPantano == 1) {
            printf("%s decide enfrentar os perigos do pântano de chocolate, determinado a encontrar o Cupcake Real.\n", nomePersonagem(personagemEscolhido));
        } else if (escolhaPantano == 2) {
            printf("Infelizmente, %s nao consegue adentrar na floresta sem antes passar pelo pantano de chocolate.\n", nomePersonagem(personagemEscolhido));
            pantano();
        } else {
            printf("Opção inválida. Tente novamente.\n");
            caminho2();
        }
    }
//caminho pantano;
void pantano (){
    if (escolhaPantano==1){
        printf("Ao atravessar a ponte, %s encontra um vale escuro todo preenchido com árvores de cacau: o Pântano de Chocolate!!\n", nomePersonagem(personagemEscolhido));
        printf("%s: que lugar bonito. Em nada se parece com as histórias assustadoras que a população desse reino costuma contar\n", nomePersonagem(personagemEscolhido));
        printf("Narrador: mais a frente, %s encontra uma casa feita de Waffers. Ao adentrá-la está um terrível ogro chamado.Mr. Pringlles\n", nomePersonagem(personagemEscolhido));
        printf("Mr. Pringlles: Olá, viajante! Eu sou o grande Mr. Pringlles, o guardião deste pantano. Para atravessar, voce precisará resolver o enigma.\nO ogro olha para suas mãos e diz:\n -ESTA É A FAMOSA COLHER DA DEUSA SUGAR? Voce desconhece os poderes dela. Entretanto, voce ainda deve resolver o enigma para provar seu valor.\n");
        printf("Mr. Pringlles: Qual é o doce que nunca se derrete?\n");
        int resposta;
        printf("1- Pirulito\n2- Bala de Goma\n3- Marshmallow\nEscolha: ");
        scanf("%d", &resposta);
        if (resposta==1){
            printf("Mr. Pringlles: Correto! Voce é digno de atravessar meu pantano. Boa sorte em sua jornada!\n");
            printf("Voce ganhou a habilidade de usar a colher da deusa sugar!\n");
            printf("Narrador: Felizmente, %s consegue atravessar o pantano e segue em frente em sua jornada.\n", nomePersonagem(personagemEscolhido));
            escolhaPantano = 3;
        }
        else{
            printf("Mr. Pringlles: Errado! Voce nao é digno de atravessar meu pantano. Volte quando estiver preparado!\n");
            printf("Narrador: Infelizmente, %s nao consegue atravessar o pantano e pensa mais um pouco.\n", nomePersonagem(personagemEscolhido));
            pantano();
        }

    }
}
//caminho floresta
void floresta()
{
    if (escolhaPantano==3){
        printf("Narrador: %s consegue atravessar o pantano e entra na floresta encantada, onde encontra criaturas mágicas e desafios inesperados.\n", nomePersonagem(personagemEscolhido));
        printf("Entretanto, ao adentrar na floresta, %s se depara com umas arvores altas que bloqueiam sua visão do sol, tornando aquele ambiente que antes parecia normal\n naquele momento estava de dificil orientação. Então %s, consegue visualizar apenas 2 caminhos, uma trilha escura e um caminho ilumidado. Qual ele deve seguir?\n", nomePersonagem(personagemEscolhido));
        int escolhaFloresta;
        printf("1- Seguir pela trilha escura, enfrentando os perigos que lá habitam.\n2- Seguir pelo caminho iluminado, mesmo que isso signifique uma jornada mais longa e perigosa.\nEscolha: ");
        scanf("%d", &escolhaFloresta);
        if (escolhaFloresta == 1) {
            printf ("%s decide enfrentar os perigos da trilha escura, determinado a encontrar o Cupcake Real.\n", nomePersonagem(personagemEscolhido));
            printf("Ao seguir pela trilha escura, %s se depara com um grupo de goblins famintos que bloqueiam seu caminho.\n", nomePersonagem(personagemEscolhido));
            printf("O que %s faz?\n", nomePersonagem(personagemEscolhido));
            int escolhaGoblins;
            printf("1-Usar a colher da deusa sugar para afastar os globins. \n2-Tentar utilizar a colher refletindo do sol para cegar os goblins e fugir.\nEscolha: ");
            scanf("%d", &escolhaGoblins);
            if (escolhaGoblins==1){
                printf("Usando a colher da deusa sugar, %s consegue afastar os goblins e atravessa a trilha escura em segurança.\n", nomePersonagem(personagemEscolhido));
            }else if (escolhaGoblins==2)
            {
             printf("Consegue cegar os globins e acaba fugindo deles, entretanto, %s cai em uma passagem secreta que leva ao vilarejo.\n", nomePersonagem(personagemEscolhido));   
            } else{
                printf("Opção inválida. Tente novamente.\n");
                floresta(); }
            }
         else if (escolhaFloresta == 2) {
            printf("Ao seguir pelo caminho iluminado, %s consegue visualizar ", nomePersonagem(personagemEscolhido));
            printf("Encontra uma esfinge que bloqueia seu caminho.\nEla propõe um enigma:\n");
            printf("");

        }
        
        
    }