#include <stdio.h>
#include <locale.h>
#include <windows.h>

// Variáveis globais
int personagemEscolhido;
int escolha1;
int escolhaPantano = 0;
int temColher = 0;

//funções
void introducao();
void interfaceini();
void trocaDeTela();
void iniHistoria(int personagem);
void cena1();
int personagemMenu();
void personagemM();
void personagemCa();
void personagemCo();
const char* nomePersonagem(int personagem);
int escolher(const char *pergunta, int opcoes);
int escolher1(const char *pergunta, int opcoes);
int escolhercolher(const char *pergunta, int opcoes);
int escolhatroll(const char *pergunta, int opcoes);
void Caminho1();
void caminho2();
void pantano();
void reiniciarP();
void floresta();
void reiniciarF();
void vilarejo();
void reiniciarV();
void forteleza();
void reiniciarFo();

// Função principal
int main(void) {
    system("chcp 65001");
    system("cls");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    introducao();
    interfaceini();
    trocaDeTela();
    iniHistoria(0);
    personagemEscolhido = personagemMenu();
    iniHistoria(personagemEscolhido);
    cena1();
    Caminho1();
    caminho2();
    pantano();
    floresta();
    vilarejo();
    forteleza();
    return 0;
}

//funções
void introducao() {
    system("echo off");
    printf("////////////////////////////////\n");
    printf("/////// SEJA BEM-VINDO /////////\n");
    printf("//////      AO        //////////\n");    
    printf("////// CASTLE OF HISTORY: //////\n");    
    printf("//////   A CANDY TALE  /////////\n");
    printf("////////////////////////////////\n");
    Sleep(3000);
    system("cls");
}

void interfaceini() {
    int PLAY = 0;
    printf("INTRUÇÕES DO JOGO:\n - O JOGO É DE AVENTURA E ESCOLHAS\n - ESCOLHA APENAS NÚMEROS INTEIROS, VARIADOS DE 1 ATÉ 5.\n - DIVIRTA-SE!\nPresentes sempre são bem-vindos!\nPRESSIONE 1 PARA JOGAR OU 2 PARA SAIR:\n");
    scanf("%d", &PLAY);
    
    if (PLAY == 1) {
        printf("INICIANDO JOGO...\n");
        Sleep(2000);
        system("cls");
    } else if (PLAY == 2) {
        printf("SAINDO...\n");
        Sleep(2000);
        system("cls");
        exit(0);
    } else {
        printf("OPÇÃO INVÁLIDA. TENTE NOVAMENTE.\n");
        Sleep(2000);
        system("cls");
        interfaceini();
    }
}

void trocaDeTela() {
    system("color 0A");
    printf("Carregando...\n");
    Sleep(2000);
    system("cls");
    system("color 0F");
}

void iniHistoria(int personagem) {
    printf("=====SEJA BEM-VINDO A CASTLE OF HISTORY!=====\n");
    printf("Era uma vez, ByteLand, um reino onde a magia se mistura com doces encantados que sao mais valiosos que ouro.\n");
    printf("A cada ano, o povo aguarda ansiosamente o Grande Festival do Bolo Real, o evento mais delicioso e festivo do calendario.\n");
    printf("É nesse dia que a bondosa Princesa Pixel escolhe o bolo mais magnifico do reino para dividir com todos, espalhando alegria e esperança em seu vilarejo.\n");
    printf("Mas este ano, algo terrível aconteceu…\n\n");
    printf("Na calada da noite, o Cupcake Real, a joia da festa, desapareceu misteriosamente!\n");
    printf("As cozinhas reais estao em alvoroco, o povo esta em choque e a honra da princesa esta em risco.\n");
    Sleep(15000);
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
    Sleep(2000);
    system("cls");
}

int personagemMenu() {
    int escolha;
    printf("Voce iniciara sua aventura e pode escolher entre tres personagens:\n");
    printf("Escolha seu personagem:\n1- O ARDILOSO MERCENÁRIO TUTTI FRUTTI\n");
    printf("2- O CORAJOSO CAVALEIRO JELLY BEANS\n");
    printf("3- O HONESTO CAMPONÊS CANDY DROPS\n");
    printf("ESCOLHA: ");
    scanf("%d", &escolha);
    
    switch (escolha) {
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
    system("cls");
}

void personagemCa() {
    printf("Você escolheu o %s!\n", nomePersonagem(2));
    Sleep(2000);
    system("cls");
}

void personagemCo() {
    printf("Você escolheu o %s!\n", nomePersonagem(3));
    Sleep(2000);
    system("cls");
}

const char* nomePersonagem(int personagem) {
    switch(personagem) {
        case 1: return "Tutti Frutti";
        case 2: return "Jelly Beans";
        case 3: return "Candy Drops";
        default: return "Personagem";
    }
}

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

void cena1() {
    system("cls");
    printf("======== CENA 1: O ANÚNCIO DO REI ========\n\n");
    
    if(personagemEscolhido == 1) {
        printf("Narrador: O mercenário Tutti Frutti sai da Taberna em direção ao castelo...\n");  
    } else if (personagemEscolhido == 2) {
        printf("Narrador: O cavaleiro Jelly Beans larga seu posto no castelo...\n");
    } else if (personagemEscolhido == 3) {
        printf("Narrador: O Camponês Candy Drops sai de sua fazenda...\n");
    }
    
    printf("Rei: Aconteceu uma desgraça!! O Cupcake Real foi roubado. Sem ele não é possível acontecer o festival!\n");
    printf("Àquele que encontrar o Cupcake será concedido a honra de uma grande recompensa!\n\n");
    
    if(personagemEscolhido == 1) {
        escolha1 = escolher1(
            "Voce pensa:\n1- Conquistar a Princesa poderia ser um negócio rentável\n2- É muito arriscado. Prefiro não arriscar\nEscolha: ",
            2
        );
    } else if (personagemEscolhido == 2) {
        escolha1 = escolher1(
            "Voce pensa:\n1- Proteger a honra do reino é meu dever\n2- Isso não é da minha conta\nEscolha: ",
            2
        );
    } else if (personagemEscolhido == 3) {
        escolha1 = escolher1(
            "Voce pensa:\n1- Grande oportunidade de recompensa\n2- Muito perigoso. Prefiro ficar fora\nEscolha: ",
            2
        );
    }
    
    if(escolha1 == 1) {
        printf("Narrador: %s decide ajudar na busca pelo Cupcake Real!\n", nomePersonagem(personagemEscolhido));
    } else {
        printf("Narrador: %s decide não se envolver, mas é contratado para a missão!\n", nomePersonagem(personagemEscolhido));
    }
    Sleep(3000);
    system("cls");
}

void Caminho1() {
    system("cls");
    printf("======== CAMINHO 1: A PONTE DO TROLL ========\n\n");
    
    printf("O personagem segue em direção à ponte. Ao sair do castelo, encontra uma colher.\n");
    printf("Narrador: A colher é essencial para derrotar monstros comestíveis!\n\n");
    
    int escolhacolher = escolhercolher(
        "O que o personagem faz?\n1- Pega a colher\n2- Ignora a colher\nEscolha: ",
        2
    );
    
    if (escolhacolher == 1) {
        printf("O personagem pega a colher, que pode ser útil mais tarde.\n");
        temColher = 1;
    } else {
        printf("O personagem decide não pegar a colher e continua seu caminho.\n");
        temColher = 0;
    }
    
    Sleep(3000);
    system("cls");
    
    printf("Ao chegar na ponte, %s encontra um troll que bloqueia a passagem!\n", nomePersonagem(personagemEscolhido));
    printf("O troll está faminto! Você pode se esconder ou enfrentá-lo.\n\n");
    
    int escolhaTroll = escolhatroll(
        "O que %s faz?\n1- Enfrenta o troll\n2- Se esconde\nEscolha: ",
        2
    );
    
    if (escolhaTroll == 1) {
        if (temColher == 1) {
            printf("Usando a colher, %s tenta lutar, mas o troll é muito forte!\n", nomePersonagem(personagemEscolhido));
            printf("Game Over\nObrigado por jogar!");
            Sleep(4000);
            exit(0);
        } else {
            printf("%s tenta lutar sem a colher e é facilmente derrotado!\n", nomePersonagem(personagemEscolhido));
            printf("Game Over\nObrigado por jogar!");
            Sleep(4000);
            exit(0);
        }
    } else {
        if (temColher == 0) {
            printf("%s se esconde, mas é notado pelo troll!\n", nomePersonagem(personagemEscolhido));
            printf("Troll: Olá, viajante! Aqui está a colher que você deixou para trás!\n");
            printf("Use-a sabiamente em sua jornada!\n");
            temColher = 1;
        } else {
            printf("%s se esconde habilmente e passa despercebido!\n", nomePersonagem(personagemEscolhido));
        }
        printf("Você conseguiu passar pela ponte!\n");
    }
    
    Sleep(4000);
    system("cls");
}

void caminho2() {
    system("cls");
    printf("======== CAMINHO 2: A ESCOLHA ========\n\n");

    printf("Narrador: Após escapar da ponte, %s se depara com a presença de um pequeno e curioso Troll. Ele parece ter algo a dizer.\n\n", nomePersonagem(personagemEscolhido));
    printf("Troll: Você já ouviu falar sobre o pântano de chocolate? Recomendo ir por lá.\n");
    printf("Narrador: %s já ouvira falar do temível Pântano de Chocolate...\n\n", nomePersonagem(personagemEscolhido));
    
    escolhaPantano = escolher(
        "1- Atravessar o pântano de chocolate\n2- Contornar o pântano pela floresta\nEscolha: ",
        2
    );
    
    if (escolhaPantano == 1) {
        printf("%s decide enfrentar os perigos do pântano!\n", nomePersonagem(personagemEscolhido));
    } else {
        printf("Infelizmente, não há como evitar o pântano!\n");
        escolhaPantano = 1;
    }
    
    Sleep(5000);
    system("cls");
}

void pantano() {
    system("cls");
    printf("======== PÂNTANO DE CHOCOLATE ========\n\n");
    
    printf("Ao atravessar a ponte, %s encontra o Pântano de Chocolate!\n", nomePersonagem(personagemEscolhido));
    printf("%s: Que lugar bonito! Não parece assustador.\n\n", nomePersonagem(personagemEscolhido));
    
    printf("Narrador: Mais à frente, uma casa feita de waffles! Dentro está Mr. Pringles, o tão temido ogro do Pântano!\nMas, olhando de perto, ele não parece tão temível assim. Porém, parece ter algo a dizer. O que será?\n");
    printf("Mr. Pringles: Para atravessar, resolva meu enigma!\n\n");
    
    int resposta;
    int tentativas = 0;
    
    while (tentativas < 3) {
        printf("Mr. Pringles: Qual é o doce que nunca se derrete?\n");
        printf("1- Pirulito\n2- Bala de Goma\n3- Marshmallow\nEscolha: ");
        scanf("%d", &resposta);
        
        if (resposta == 1) {
            printf("Mr. Pringles: Correto! Você é digno de atravessar!\n");
            printf("Você ganhou a habilidade de usar os poderes da colher da deusa Sugar!\n");
            escolhaPantano = 3;
            Sleep(4000);
            system("cls");
            return;
        } else {
            tentativas++;
            printf("Mr. Pringles: Errado! Tentativa %d de 3\n", tentativas);
            if (tentativas < 3) {
                printf("Tente novamente...\n");
                Sleep(3000);
                system("cls");
            }
        }
    }
    
    reiniciarP();
}

void reiniciarP() {
    system("cls");
    printf("Deseja reiniciar o pântano? (1-Sim / 2-Não): ");
    int escolhaReiniciar;
    scanf("%d", &escolhaReiniciar);
    
    if (escolhaReiniciar == 1) {
        pantano();
    } else if (escolhaReiniciar == 2) {
        printf("Encerrando o jogo. Obrigado por jogar!\n");
        exit(0);
    } else {
        printf("Opção inválida.\n");
        Sleep(2000);
        reiniciarP();
    }
}

void floresta() {
    system("cls");
    printf("======== FLORESTA ENCANTADA ========\n\n");
    
    if (escolhaPantano != 3) {
        printf("Você precisa passar pelo pântano primeiro!\n");
        pantano();
        return;
    }
    
    printf("Narrador: %s entra na floresta encantada...\n\n", nomePersonagem(personagemEscolhido));
    
    int escolhaFloresta = escolher(
        "Qual caminho seguir?\n1- Trilha escura\n2- Caminho iluminado\nEscolha: ",
        2
    );
    
    if (escolhaFloresta == 1) {
        printf("%s escolhe a trilha escura!\n", nomePersonagem(personagemEscolhido));
        printf("Um grupo de goblins famintos bloqueia o caminho!\n\n");
        
        int escolhaGoblins = escolher(
            "O que fazer?\n1- Usar a colher da deusa\n2- Refletir luz do sol\nEscolha: ",
            2
        );
        
        if (escolhaGoblins == 1 || escolhaGoblins == 2) {
            printf("Sucesso! Você passou pelos goblins!\n");
        } else {
            printf("Opção inválida!\n");
            reiniciarF();
        }
    } else {
        printf("%s escolhe o caminho iluminado!\n", nomePersonagem(personagemEscolhido));
        printf("Uma esfinge bloqueia o caminho!\n\n");
        
        int respostaEsfinge;
        int tentativas = 0;
        
        while (tentativas < 3) {
            printf("Esfinge: Doce, verde e tem uva dentro. Qual o nome?\n");
            printf("1- Uvinha\n2- Brigadeiro\n3- Casadinho\nEscolha: ");
            scanf("%d", &respostaEsfinge);
            
            if (respostaEsfinge == 1) {
                printf("Esfinge: Correto! Pode passar!\n");
                break;
            } else {
                tentativas++;
                printf("Esfinge: Errado! Tentativa %d de 3\n", tentativas);
                if (tentativas == 3) {
                    reiniciarF();
                    return;
                }
            }
        }
    }
    
    printf("Você conseguiu atravessar a floresta!\n");
    Sleep(3000);
    system("cls");
}

void reiniciarF() {
    system("cls");
    printf("Deseja reiniciar a floresta? (1-Sim / 2-Não): ");
    int escolhaReiniciar;
    scanf("%d", &escolhaReiniciar);
    
    if (escolhaReiniciar == 1) {
        floresta();
    } else if (escolhaReiniciar == 2) {
        printf("Encerrando o jogo. Obrigado por jogar!\n");
        exit(0);
    } else {
        printf("Opção inválida.\n");
        Sleep(3000);
        reiniciarF();
    }
}

void vilarejo() {
    system("cls");
    printf("======== VILAREJO ========\n\n");
    
    printf("%s chega ao vilarejo de CandyVillage!\n", nomePersonagem(personagemEscolhido));
    printf("Os habitantes estão assustados e desesperados.\n\n");
    
    printf("Mercador Sr. Springles: Por favor, ajude-nos! O Cupcake Real foi roubado!\n");
    
    int escolhaVilarejo = escolher(
        "O que fazer?\n1- Perguntar sobre o roubo\n2- Ignorar e olhar ao redor\nEscolha: ",
        2
    );
    
    if (escolhaVilarejo == 1) {
        printf("Senhor Idoso: Vi uma figura sombria na torre abandonada ao sul!\n");
        printf("Essa informação pode ser crucial!\n");
    } else {
        printf("Você perdeu uma oportunidade de obter informações!\n");
        reiniciarV();
        return;
    }
    
    printf("\nNARRADOR:%s deve investigar alguns moradores do vilarejo para descobrir o paradeiro do Cupcake Real. Ele conversa com um comerciante local, porém não teve sucesso em sua investigação.%s avista um grupo de pessoas e um senhor aparentemente assustado.\n", nomePersonagem(personagemEscolhido), nomePersonagem(personagemEscolhido));
    printf("O que ele faz?\n");
    int escolhaInvestigar = escolher(
        "1- Abordar o senhor assustado\n2- Ignorar e seguir em frente\nEscolha: ",
        2
    );
    if (escolhaInvestigar == 1) {
        printf("Senhor Idoso: Vi uma figura sombria na Forteleza abandonada ao sul!\n");
        printf("Essa informação pode ser crucial!\n");
    } else {
        printf("Você perdeu uma oportunidade de obter informações!\n");
        reiniciarV();
        return;
    }
    if (escolhaInvestigar == 2)
    {
        printf("O grupo estava com medo e nao quis falar nada.\n");
        printf("Infelizmente, %s nao conseguiu descobrir nada sobre o paradeiro do Cupcake Real.\n", nomePersonagem(personagemEscolhido));
        reiniciarV();
    }
    
}

void reiniciarV() {
    system("cls");
    printf("Deseja reiniciar o vilarejo? (1-Sim / 2-Não): ");
    int escolhaReiniciar;
    scanf("%d", &escolhaReiniciar);
    
    if (escolhaReiniciar == 1) {
        vilarejo();
    } else if (escolhaReiniciar == 2) {
        printf("Encerrando o jogo. Obrigado por jogar!\n");
        exit(0);
    } else {
        printf("Opção inválida.\n");
        Sleep(3000);
        reiniciarV();
    }
}
void forteleza() {
    system("cls");
    printf("======== FORTELEZA ABANDONADA ========\n\n");
    printf("Narrador: %s segue em direção à fortaleza. Indo pelo caminho mais rápido ele é obrigado a passar por uma ponte de madeira que atravessa um precipício, sua estrutura é precária e instável.\n", nomePersonagem(personagemEscolhido));
    printf("O que %s faz?\n", nomePersonagem(personagemEscolhido));
    
    int escolhaPonte = escolher(
        "1- Atravessa a ponte com cuidado\n2- Procura outro caminho\nEscolha: ",
        2
    );
    
    if (escolhaPonte == 1) {
        printf("%s ao atravessar a ponte verifica que a estrutura é realmente frágil, mas consegue atravessar com sucesso.\n", nomePersonagem(personagemEscolhido));
        printf("Ao adentrar a Forteleza, %s se depara com um cenário sombrio e assustador.\n", nomePersonagem(personagemEscolhido));
    } else if (escolhaPonte == 2) {
        printf("%s ao procurar outro caminho, acaba se perdendo na floresta e não consegue encontrar a fortaleza.\n", nomePersonagem(personagemEscolhido));
        printf("Infelizmente, %s nao consegue chegar até a fortaleza e o jogo termina aqui, o Rei fica decepcionado e pede que você seja expulso do reino!\n", nomePersonagem(personagemEscolhido));
        printf("\nGame Over!\n");
        Sleep(5000);
        reiniciarFo();
        return;
    }
    
    printf("Dentro da fortaleza, você encontra dois caminhos:\n");
    int escolhaCaminho = escolher(
        "1- Seguir pelo corredor escuro à esquerda que dá acesso à masmorra\n2- Subir as escadas em espiral à direita que da acesso a torre.\nEscolha: ",
        2
    );
    
    if (escolhaCaminho == 1) {
        printf("%s desce as escadas que levam à masmorra, o ambiente é úmido e sombrio, com paredes de pedra cobertas de musgo e teias de aranha.\n", nomePersonagem(personagemEscolhido));
        printf("De repente, uma figura sombria emerge das sombras: é o Chefe da guarda real, o Mr. Beijinho!\n");
        printf("Ele está furioso por não conseguir sair das masmorras, então ele lhe pede que encontre o ladrão na torre.\n");
        
        
        int escolhaMasmorra = escolher(
            "1- Voltar para explorar a torre\n2- Tentar ajudar Mr. Beijinho\nEscolha: ",
            2
        );
        
        if (escolhaMasmorra == 1) {
            printf("Você decide voltar e explorar a torre...\n");
            Sleep(4000);
            
            escolhaCaminho = 2;
        } else {
            printf("Mr. Beijinho: Obrigado pela ajuda! Tome esta dica - o ladrão tem medo de luz!\n");
            printf("Você ganha uma informação valiosa!\n");
            Sleep(4000);
            printf("Agora voltando para explorar a torre...\n");
            Sleep(4000);
            escolhaCaminho = 2;
        }
    }
    
    if (escolhaCaminho == 2) {
        printf("%s sobe as escadas em espiral que levam à torre, o ambiente é frio e ventoso, com janelas quebradas que deixam entrar a luz da lua.\n", nomePersonagem(personagemEscolhido));
        printf("De repente, uma figura sombria emerge das sombras: é o ladrão do Cupcake Real, o Sr. Amendobobo!\n");
        printf("Ele está furioso por ter sido descoberto, então ele lhe desafia para um duelo de doces!\n");
        printf("Ele então lhe faz uma proposta:\n");
        printf("Sr.Amendobobo: Pense na possibilidade de termos um acordo, nós poderiamos dividir o poder do Cupcake Real, o que acha?\n");
        
        int escolhaAcordo = escolher(
            "1- Aceitar a proposta e dividir o poder do Cupcake Real\n2- Recusar a proposta e lutar pelo Cupcake Real\n3- Tentar negociar\nEscolha: ",
            3  
        );
        
        if (escolhaAcordo == 1) {
            printf("%s aceita a proposta do Sr. Amendobobo e juntos eles governam o reino com muita maldade e crueldade com a população.\n", nomePersonagem(personagemEscolhido));
            printf("Infelizmente, em um golpe de poder, você acaba sendo traído e morrendo!\n");
            printf("Parabéns! Você completou o jogo, mas foi usurpado!\nGAME OVER!\n");
            Sleep(10000);
            exit(0);
        } 
        else if (escolhaAcordo == 2) {
            printf("%s recusa a proposta do Sr. Amendobobo e inicia uma batalha épica de doces!\n", nomePersonagem(personagemEscolhido));
            
            if (temColher == 1) {
                printf("Usando a colher da deusa Sugar, %s consegue derrotar o Sr. Amendobobo e recuperar o Cupcake Real!\n", nomePersonagem(personagemEscolhido));
                printf("Parabéns! Você completou o jogo com um final heroico!\n");
            } else {
                printf("Sem a colher da deusa, %s luta bravamente mas é derrotado pelo Sr. Amendobobo!\n", nomePersonagem(personagemEscolhido));
                printf("Game Over - Você precisava da colher para vencer!\n");
            }
            Sleep(10000);
            exit(0);
        } 
        else if (escolhaAcordo == 3) {
            printf("%s tenta negociar com o Sr. Amendobobo.\n", nomePersonagem(personagemEscolhido));
            printf("%s: Você sabe que nós poderiamos tentar melhorar a sua situação aqui, não é mesmo?\n", nomePersonagem(personagemEscolhido));
            printf("Sr.Amendobobo: Hmm... estou ouvindo. Continue...\n");
            
            int escolhaNegociar = escolher(
                "1- Entender os motivos do Sr. Amendobobo\n2- Oferecer ajuda para conseguir um emprego real\nEscolha: ",
                2
            );
            
            if (escolhaNegociar == 1) {
                printf("%s tenta entender os motivos do Sr. Amendobobo e descobre que ele roubou o Cupcake Real para chamar a atenção do rei.\n", nomePersonagem(personagemEscolhido));
                printf("Sr.Amendobobo: Eu só queria uma chance de mostrar meu talento culinário!\n");
                
                int escolhaFinal = escolher(
                    "1- Prometer ajudá-lo a conseguir um emprego na cozinha real\n2- Aproveitar a distração para atacá-lo\nEscolha: ",
                    2
                );
                
                if (escolhaFinal == 1) {
                    printf("%s: Eu posso ajudar você a conseguir um emprego na cozinha real, mas você precisa devolver o Cupcake Real.\n", nomePersonagem(personagemEscolhido));
                    printf("Sr.Amendobobo: Tudo bem, eu devolvo o Cupcake Real! Obrigado por me entender!\n");
                    printf("Parabéns! Você completou o jogo com um final pacífico e diplomático!\n");
                } else {
                    printf("Enquanto o Sr. Amendobobo está distraído, você o ataca e recupera o Cupcake Real!\n");
                    printf("Parabéns! Missão cumprida, mas a diplomacia falhou!\n");
                }
            } 
            else {
                printf("%s oferece ajudar o Sr. Amendobobo a conseguir um emprego legitimo na corte real.\n", nomePersonagem(personagemEscolhido));
                printf("Sr.Amendobobo: Sério? Você faria isso por mim? Tome, aqui está o Cupcake Real!\n");
                printf("Parabéns! Você resolveu o conflito pacificamente!\n");
            }
            Sleep(10000);
            exit(0);
        }
    }
}

void reiniciarFo() {
    system("cls");
    printf("Deseja reiniciar a fortaleza? (1-Sim / 2-Não): ");
    
    int escolhaReiniciar;
    if (scanf("%d", &escolhaReiniciar) != 1) {
        while (getchar() != '\n');
        printf("Opção inválida. Digite 1 para Sim ou 2 para Não.\n");
        Sleep(2000);
        reiniciarFo();
        return;
    }
    
    if (escolhaReiniciar == 1) {
        printf("Reiniciando a fortaleza...\n");
        Sleep(2000);
        forteleza();
    } else if (escolhaReiniciar == 2) {
        printf("Encerrando o jogo. Obrigado por jogar!\n");
        Sleep(2000);
        exit(0);
    } else {
        printf("Opção inválida. Digite 1 para Sim ou 2 para Não.\n");
        Sleep(2000);
        reiniciarFo();
    }
}
