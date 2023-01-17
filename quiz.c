#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include <string.h>
void quiz();
void creditos();
void cores();
int main(){
    int escolhas;
    
    setlocale(LC_ALL, "Portuguese"); 
    system("cls");
  
    printf("\n\n*******************************************************************************\n\n");
    printf("Seja bem vindo ao QUIZTECK\n");
    printf("\n\n*******************************************************************************\n\n");
    printf("Aperte 1 para inicar o jogo\n");  
    printf("Aperte 2 para creditos\n");
    printf("Aperte 3 para trocar as cores do menu\n");
    printf("Aperte 0 para sair\n");  
    
    printf("Digite sua escolha:");
    scanf("%d", &escolhas);

    switch(escolhas){
        case 1: quiz();
            break;
        case 2: creditos();
            break;
        case 3: cores();
            break;
        default: exit(1);
    }    
    getchar(); // Para poder avan�ar nas perguntas no switch case
    
 printf("\n\n*******************************************************************************\n\n");
    return 0;
}
//Perguntas do quiz
void quiz(){
    int participante;
    char resposta;  //Quest�es do time
    int c_r1=0; // Acertos
    int e_r1=0; //Erros 

    do{
        printf("\n\n1-Qual endereço de IP entra em loopback?\n\n");
        printf("a - 127.0.0.0\n");
        printf("b - 127.0.0.1\n");
        printf("c - 192.168.19.1\n");
        printf("d - 172.18.0.1\n");
        printf("Digite a resposta:");
            scanf(" %c", &resposta);

            if (resposta=='a'){
                printf("Resposta Correta!\n");
                c_r1++;  
            }else{
                printf("Resposta Incorreta!\n");
                e_r1++;
            }

        getchar();
        system("cls"); 
    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );
    
    do{
        printf("2-Quais desses NÃO é um endereço de IP?\n\n");
        printf("a - 192.168.1.1\n");
        printf("b - 192.81.20.1\n");
        printf("c - 192.168.0.256\n");
        printf("d - 0.0.0.0\n");
        printf("Digite a resposta:");
            scanf(" %c", &resposta);

            if(resposta=='c'){
                printf("Resposta Correta!\n\n");
                c_r1++;
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }
                
        getchar();
        system("cls");
    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    do{
        printf("3-Qual a funçãoo do DHCP?\n\n");
        printf("a - É um protocolo que permite atribuir endereços de IP ao um dispositivo de rede\n");
        printf("b - Protocolo de transmissão de vídeo\n");
        printf("c - Protocolo de envio de email\n");
        printf("d - Protocolo que traduz endereços privadddos de uma rede local em endereços públicos\n");

        printf("Digite a resposta:");
            scanf(" %c", &resposta);
             if (resposta=='a'){
                    printf("Resposta Correta!\n\n");
                    c_r1++;     
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }
           
        getchar();
        system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );
    
    do{   
        printf("4-Qual software de virtualização de máquinas?\n\n");
        printf("a - Dameware\n");
        printf("b - Anydesk\n");
        printf("c - Virtual box\n");
        printf("d - Hypervisor\n");
        printf("Digite a resposta:");
            scanf(" %c", &resposta);

             if (resposta=='c'){
                    printf("Resposta Correta!\n\n");
                    c_r1++; 
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }

        getchar();
        system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    do{
        printf("5-A linha (i=0; i<10; i++) é um exemplo de:\n\n");
        printf("a - função\n");
        printf("b - switch\n");
        printf("c - while\n");
        printf("d - for\n");
        printf("Digite a resposta:");
            scanf(" %c", &resposta);

             if (resposta=='d'){
                    printf("Resposta Correta!\n\n");
                    c_r1++; 
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
            
        getchar();
        system("cls");
    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' ); 

    do{
        printf("6-Quais as vantagens ao utilizar o Ubuntu Server?\n\n");
        printf("a - Estabiidade, segurança e desempenho\n");
        printf("b - Interface gráfica\n");
        printf("c - Facilidade ao mexer para qualquer usuário\n");
        printf("d - Ambiente simples, semelhante ao ubuntu desktop\n");
        printf("Digite a resposta:");
            scanf(" %c", &resposta);

             if (resposta=='a'){
                    printf("Resposta Correta!\n\n");
                    c_r1++;      
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }

        getchar();
        system("cls");
    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' ); 

    do{
        printf("7-O uso do 'ceil' da biblioteca math.h tem qual objetivo?\n\n");
        printf("a - Arredondar pra cima\n");
        printf("b - Arredondar pra baixo\n");
        printf("c - Expressões racionais\n");
        printf("d - Logarítimos\n");
            printf("Digite a resposta:");
            scanf(" %c", &resposta);
             if (resposta=='a'){
                    printf("Resposta Correta!\n\n");
                    c_r1++;  
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }      
        getchar();
        system("cls");
    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );
        //fim das perguntas do Vin�cius    

        //perguntas do Pablo come�am aqui
    do{

        printf("8-Com base na arquitetura de um microcomputador, o barramento válido e exclusivo para instalação de interfaces gráficas -placas de vídeo-, :\n\n");
        printf("a - PCI\n");
        printf("b - ISA\n");
        printf("c - AGP\n");
        printf("d - IDE\n");
        printf("Digite a resposta:");
            scanf(" %c", &resposta);

             if (resposta=='a'){
                    printf("Resposta Correta!\n\n");
                    c_r1++;
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }        
        getchar();
        system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );
    
    do{
        printf("9-Na computação básica, os computadores realizam operações de acordo com um sistema de numeração embasado nos números 0 e 1. Esse sistema é denominado:\n\n");
        printf("a - BINÁRIO\n");
        printf("b - OCTAL\n");
        printf("c - QUÂNTICO\n");
        printf("d - DECIMAL\n");
        printf("Digite a resposta:");
            scanf(" %c", &resposta);

             if (resposta=='a'){
                    printf("Resposta Correta!\n\n");
                    c_r1++;         
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }
        getchar();
        system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    do{
        printf("10-Os principais navegadores de Internet (browsers) atualmente possuem a capacidade de ler vários tipos de arquivos. Assinale, das alternativas abaixo, o tipo de arquivo que os browsers não conseguem ler de forma nativa: \n\n");
        printf("a - PPTX\n");
        printf("b - GIF\n");
        printf("c - PNG\n");
        printf("d - JPE\n");
        printf("Digite a resposta:");
            scanf(" %c", &resposta);

            if (resposta=='a'){
                    printf("Resposta Correta!\n\n");
                    c_r1++;    
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }        
     getchar();
     system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    do{
        printf("11-É desnecessário para o funcionamento básico de um computador:\n\n");
        printf("a - PROCESSADOR\n");
        printf("b - MEMÓRIA\n");
        printf("c - SISTEMA OPEREACIONAL\n");
        printf("d - PLACA DE REDE\n");
        printf("Digite a resposta:");
            scanf(" %c", &resposta);

             if (resposta=='d'){
                    printf("Resposta Correta!\n\n");
                    c_r1++;
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }       
        getchar();
        system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );
    
    do{
        printf("12 -A placa de circuito de um micro onde ficam localizados o processador e a memória RAM, principalmente, á placa: \n\n");
        printf("a - PARALELA\n");
        printf("b - USB\n");
        printf("c - DE VIDEO\n");
        printf("d - MÃE\n");
        printf("Digite a resposta:");
            scanf(" %c", &resposta);

             if (resposta=='d'){
                    printf("Resposta Correta!\n\n");
                    c_r1++;
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }          
        getchar();
        system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    do{

        printf("13 - É um tipo de memória volátil que dá suporte ao processador na execução das tarefas: \n\n");
        printf("a - EEPROM\n");
        printf("b - ROM\n");
        printf("c - RAM\n");
        printf("d - CMOS\n");
              printf("Digite a resposta:");
            scanf(" %c", &resposta);
             if (resposta=='c'){
                    printf("Resposta Correta!\n\n");
                    c_r1++;
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }
    getchar();
    system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    do{

        printf("14 - Quanto é 5^2? \n\n");
        printf("a - 65\n");
        printf("b - 50\n");
        printf("c - 25\n");
        printf("d - 13\n");
        printf("Digite a resposta:");
            scanf(" %c", &resposta);
                if (resposta=='c')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }        
 //as perguntas do pablo terminam aqui "14"
        getchar();
        system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    // Pergutas Lucas Fernando

    do{
        printf("15 - Onde são armazenados os dados de configuração da BIOS?\n\n");
        printf("A - Ram\n");
        printf("B - Disco rigidon\n");
        printf("C - CMOS\n");
        printf("D - cache\n");
        printf("Digite sua resposta: ");
            scanf(" %c", &resposta);

                if (resposta=='c'){
                        printf("Resposta Correta!\n\n");
                        c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
        getchar();
        system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    do{
        printf("16 - O que indica que a carga da bateria da CMOS pode estar acabando?\n\n");
        printf("A - O desempenho para acessar arquivos no disco rígido é lento.\n");
        printf("B - Um bipe com código de erro ocorre durante o POST.\n");
        printf("C - A hora e a data do computador estão incorretas.\n");
        printf("D - O computador não inicializa\n");
        printf("Digite sua resposta: ");
                scanf(" %c", &resposta);

                if (resposta=='c'){
                        printf("Resposta Correta!\n\n");
                        c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
        getchar();
        system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    do{
        printf("17 - Onde são armazenados os dados de configuração da BIOS?\n\n");
        printf("A - Ram\n");
        printf("B - Disco rigido\n");
        printf("C - CMOS\n");
        printf("D - cache\n");
        printf("Digite sua resposta:");
                scanf(" %c", &resposta);

                if (resposta=='c'){
                        printf("Resposta Correta!\n\n");
                        c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
            getchar();
            system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    do{
        printf("18 - Um técnico derrama, acidentalmente, uma solução de limpeza no chão da oficina. Onde o técnico pode obter instruções sobre como limpar e descartar corretamente o produto?\n\n");
        printf("A - a política de seguro da empresa\n");
        printf("B - a data sheet de segurança\n");
        printf("C - a equipe local de materiais perigosos\n");
        printf("D - as regulamentações fornecidas pela administrao local de saúde e segurança no trabalho\n");
        printf("Digite sua resposta: ");
            scanf(" %c", &resposta);

            if (resposta=='b'){
                    printf("Resposta Correta!\n\n");
                    c_r1++;
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }
        getchar();
        system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    do{
        printf("19 - Qual op��o descreve o termo 'overclocking'?\n\n");
        printf("A - aumento da velocidade da CPU para além das recomendações do fabricante\n");
        printf("B - substituir uma SDRAM mais lenta por uma memória mais rápida\n");
        printf("C - alterar a velocidade do barramento de placa-mãe para aumentar a velocidade dos adaptadores conectados\n");
        printf("D - modificar o clock da placa-mãe para aumentar os sinais de temporização\n");
        printf("Digite sua resposta: ");
            scanf(" %c", &resposta);

             if (resposta=='a'){
                    printf("resposta Correta!\n\n");
                    c_r1++;
            }else{
                printf("Resposta Incorreta!\n\n");
                e_r1++;
            }
    getchar();
    system("cls");
    
    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );
    
    do{
        printf("20 - Qual unidade á usada para medir o nível de resistência ao fluxo de corrente em um circuito?\n\n");
        printf("A - Volts\n");
        printf("B - Amperes\n");
        printf("C - Watt\n");
        printf("D - OHMS\n");
        printf("Digite sua resposta: ");
            scanf(" %c", &resposta);

                if (resposta=='d'){
                        printf("Resposta Correta!\n\n");
                        c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
        getchar();
        system("cls");

    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    do{
        printf("21 - Qual dispositivo pode proteger equipamentos de informática de quedas de energia, proporcionando uma qualidade consistente de energia elétrica?\n\n");
        printf("A - Adaptador AC\n");
        printf("B - SPS\n");
        printf("C - UPS\n");
        printf("D - supressor de picos\n");
        printf("Digite sua resposta:");
                scanf(" %c", &resposta);

                if (resposta=='d'){
                        printf("Resposta Correta!\n");
                        c_r1++;
                }else{
                    printf("Resposta Incorreta!\n");
                    e_r1++;
                }
        getchar();
        system("cls");
    }while(resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd' );

    printf("\n\n*******************************************************************\n\n");

    printf("Seu nome:");
    scanf(" %c", &participante);
    printf("Quantidade de acertos:%d\n", c_r1);
    printf("Quantidade de erros:%d\n", e_r1);

    printf("\n\n*******************************************************************\n\n");
   

}
//fun��o cr�ditos
void creditos(){
    int ch;
    printf("Criadores:\n");
    printf("\n\nLucas Fernando @fer.lcs\n");
    printf("Pablo Miranda  @_pablo_mir\n");
    printf("Vinicius Rodrigues - @vinirodriguess__\n");

    printf("Para voltar ao menu digite 1 \n");
    printf("Para sair digite 2 \n");

    scanf("%d", &ch);
    
    if(ch == 1){
        main();
    }else{
        exit(1);
    }
}
void cores(){
    char comando[9] = "color ";
    char cores[2];
    int retornar;
    
    printf("Tabela de cores:\n\n");
    printf("\t0 - Preto\t8 - Cinza\n");
    printf("\t1 - Azul\t9 - Azul Claro\n");
    printf("\t2 - Verde\tA - Verde Claro\n");
    printf("\t3 - Verde Água\tB - Verde Água Claro\n");
    printf("\t4 - Vermelho\tC - Vermelho Claro\n");
    printf("\t5 - Roxo\tD - Lilás\n");
    printf("\t6 - Amarelo\tE - Amarelo Claro\n");
    printf("\t7 - Branco\tF - Branco Brilhante\n");  
    printf("Cor de Fundo: ");

        scanf("%s", &cores[0]);
    
    getchar();
    
    printf("Cor do texto: ");
    scanf("%s", &cores[1]);
    
    strcat(comando, cores);
    system(comando);

    printf("Deseja retornar ao menu ? 1 sim | 0 não \n");
        scanf("%d", &retornar);
    if(retornar == 1){
        main();
    }else{
        exit(1);
    }
}
