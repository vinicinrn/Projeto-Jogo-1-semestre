#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>
void quiz();
void creditos();
int main(){
    int escolhas;
    
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    
    system("cls");

  
    printf("\n\n*******************************************************************************\n\n");
    printf("Seja bem vindo ao jogo QUIZ\n");
    printf("\n\n*******************************************************************************\n\n");
    printf("Aperte 1 para inicar o jogo\n");  
    printf("Aperte 2 para creditos\n");
    printf("Aperte 0 para sair\n");  
    
    printf("Digite sua escolha:");
    scanf("%d", &escolhas);
    switch(escolhas){
        case 1:
            quiz();
            break;
        case 2: creditos();
            break;
        default:  exit(1);
    }    
    printf("\nPressione \"Enter\" para continuar nas quest�es\n" );
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

    printf("\n\n1-Qual endere�o de IP entra em loopback?\n\n");
        printf("a - 127.0.0.0\n");
        printf("b - 127.0.0.1\n");
        printf("c - 192.168.19.1\n");
        printf("d - 172.18.0.1\n");

            printf("Digite a resposta:");
            scanf(" %c", &resposta);
                if (resposta=='a')
                {
                    printf("Resposta Correta!\n");
                    c_r1++;
                    
                }else{
                    printf("Resposta Incorreta!\n");
                    e_r1++;
                }
            

        getchar();

        system("cls"); 

    printf("2-Quais desses N�O � um endere�o de IP?\n\n");
        printf("a - 192.168.1.1\n");
        printf("b - 192.81.20.1\n");
        printf("c - 192.168.0.256\n");
        printf("d - 0.0.0.0\n");
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
          
        getchar();
        system("cls");

     printf("3-Qual a fun��o do DHCP?\n\n");
        printf("a - � um protocolo que permite atribuir endere�os de IP ao um dispositivo de rede\n");
        printf("b - Protocolo de transmiss�o de v�deo\n");
        printf("c - Protocolo de envio de email\n");
        printf("d - Protocolo que traduz endere�os privadddos de uma rede local em edner�os p�blicos\n");

        printf("Digite a resposta:");
            scanf(" %c", &resposta);
             if (resposta=='a')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                    
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
           

        getchar();
        system("cls");

        printf("4-Qual software de virtualiza��o de m�quinas?\n\n");
        printf("a - Dameware\n");
        printf("b - Anydesk\n");
        printf("c - Virtual box\n");
        printf("d - Hypervisor\n");
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

                
            

        getchar();
        system("cls");

        
        printf("5-A linha (i=0; i<10; i++) � um exemplo de:\n\n");
        printf("a - fun��o\n");
        printf("b - switch\n");
        printf("c - while\n");
        printf("d - for\n");
            printf("Digite a resposta:");
            scanf(" %c", &resposta);
             if (resposta=='d')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                    
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
                
        getchar();
        system("cls");
        
        printf("6-Quais as vantagens ao utilizar o Ubuntu Server?\n\n");
        printf("a - Estabiidade, seguran�a e desempenho\n");
        printf("b - Interface gr�fica\n");
        printf("c - Facilidade ao mexer para qualquer usu�rio\n");
        printf("d - Ambiente simples, semelhante ao ubuntu desktop\n");
            printf("Digite a resposta:");
            scanf(" %c", &resposta);
             if (resposta=='a')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                    
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }

        getchar();
        system("cls");

        printf("7-O uso do 'ceil' da biblioteca math.h tem qual objetivo?\n\n");
        printf("a - Arredondar pra cima\n");
        printf("b - Arredondar pra baixo\n");
        printf("c - Express�es racionais\n");
        printf("d - Logar�timos\n");
            printf("Digite a resposta:");
            scanf(" %c", &resposta);
             if (resposta=='a')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                  
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }      
        //fim das perguntas do Vin�cius      
        getchar();
        system("cls");
         //perguntas do Pablo come�am aqui
        printf("8-Com base na arquitetura de um microcomputador, o barramento v�lido e exclusivo para instala��o de interfaces gr�ficas -placas de v�deo-, �:\n\n");
        printf("a - PCI\n");
        printf("b - ISA\n");
        printf("c - AGP\n");
        printf("d - IDE\n");
            printf("Digite a resposta:");
            scanf(" %c", &resposta);
             if (resposta=='a')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                    
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }        
    getchar();
    system("cls");

        printf("9-Na computa��o b�sica, os computadores realizam opera��es de acordo com um sistema de numera��o embasado nos n�meros 0 e 1. Esse sistema � denominado:\n\n");
        printf("a - BIN�RIO\n");
        printf("b - OCTAL\n");
        printf("c - QU�NTICO\n");
        printf("d - DECIMAL\n");
            printf("Digite a resposta:");
            scanf(" %c", &resposta);
             if (resposta=='a')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                    
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
    getchar();
    system("cls");

        printf("10-Os principais navegadores de Internet (browsers) atualmente possuem a capacidade de ler v�rios tipos de arquivos. Assinale, das alternativas abaixo, o tipo de arquivo que os browsers n�o conseguem ler de forma nativa: \n\n");
        printf("a - PPTX\n");
        printf("b - GIF\n");
        printf("c - PNG\n");
        printf("d - JPE\n");
            printf("Digite a resposta:");
            scanf(" %c", &resposta);
            if (resposta=='a')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                    
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }        
     getchar();
     system("cls");

        printf("11-� desnecess�rio para o funcionamento b�sico de um computador:\n\n");
        printf("a - PROCESSADOR\n");
        printf("b - MEM�RIA\n");
        printf("c - SISTEMA OPEREACIONAL\n");
        printf("d - PLACA DE REDE\n");
          printf("Digite a resposta:");
            scanf(" %c", &resposta);
             if (resposta=='d')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }       
    getchar();
    system("cls");

      printf("12 -A placa de circuito de um micro onde ficam localizados o processador e a mem�ria RAM, principalmente, � a placa: \n\n");
        printf("a - PARALELA\n");
        printf("b - USB\n");
        printf("c - DE VIDEO\n");
        printf("d - M�E\n");
            printf("Digite a resposta:");
            scanf(" %c", &resposta);
             if (resposta=='d')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }          
    getchar();
    system("cls");

     printf("13 - � um tipo de mem�ria vol�til que d� suporte ao processador na execu��o das tarefas: \n\n");
        printf("a - EEPROM\n");
        printf("b - ROM\n");
        printf("c - RAM\n");
        printf("d - CMOS\n");
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
    getchar();
    system("cls");

    printf("14 - Quanto � 5^2? \n\n");
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

    // Pergutas Lucas Fernando
    printf("15 - Onde s�o armazenados os dados de configura��o da BIOS?\n\n");
    printf("A - Ram\n");
    printf("B - Disco rigidon\n");
    printf("C - CMOS\n");
    printf("D - cache\n");
        printf("Digite sua resposta: ");
            scanf(" %c", &resposta);
            if (resposta=='c')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
    getchar();
    system("cls");

    printf("16 - O que indica que a carga da bateria da CMOS pode estar acabando?\n\n");
    printf("A - O desempenho para acessar arquivos no disco r�gido � lento.\n");
    printf("B - Um bipe com c�digo de erro ocorre durante o POST.\n");
    printf("C - A hora e a data do computador est�o incorretas.\n");
    printf("D - O computador n�o inicializa\n");
        printf("Digite sua resposta: ");
            scanf(" %c", &resposta);
            if (resposta=='c')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
    getchar();
    system("cls");

    printf("17 - Onde s�o armazenados os dados de configura��o da BIOS?\n\n");
    printf("A - Ram\n");
    printf("B - Disco rigido\n");
    printf("C - CMOS\n");
    printf("D - cache\n");
        printf("Digite sua resposta:");
            scanf(" %c", &resposta);
            if (resposta=='c')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                } 
    getchar();
    system("cls");

    printf("18 - Um t�cnico derrama, acidentalmente, uma solu��o de limpeza no ch�o da oficina. Onde o t�cnico pode obter instru��es sobre como limpar e descartar corretamente o produto?\n\n");
    printf("A - a pol�tica de seguro da empresa\n");
    printf("B - a data sheet de seguran�a\n");
    printf("C - a equipe local de materiais perigosos\n");
    printf("D - as regulamenta��es fornecidas pela administra��o local de sa�de e seguran�a no trabalho\n");
        printf("Digite sua resposta: ");
            scanf(" %c", &resposta);
            if (resposta=='b')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
    getchar();
    system("cls");

    printf("19 - Qual op��o descreve o termo 'overclocking'?\n\n");
    printf("A - aumento da velocidade da CPU para al�m das recomenda��es do fabricante\n");
    printf("B - substituir uma SDRAM mais lenta por uma mem�ria mais r�pida\n");
    printf("C - alterar a velocidade do barramento de placa-m�e para aumentar a velocidade dos adaptadores conectados\n");
    printf("D - modificar o clock da placa-m�e para aumentar os sinais de temporiza��o\n");
        printf("Digite sua resposta: ");
            scanf(" %c", &resposta);
             if (resposta=='a')
                {
                    printf("resposta Correta!\n\n");
                    c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
    getchar();
    system("cls");
    
    printf("20 - Qual unidade � usada para medir o n�vel de resist�ncia ao fluxo de corrente em um circuito?\n\n");
    printf("A - Volts\n");
    printf("B - Amperes\n");
    printf("C - Watt\n");
    printf("D - OHMS\n");
        printf("Digite sua resposta: ");
            scanf(" %c", &resposta);
             if (resposta=='d')
                {
                    printf("Resposta Correta!\n\n");
                    c_r1++;
                }else{
                    printf("Resposta Incorreta!\n\n");
                    e_r1++;
                }
    getchar();
    system("cls");

    printf("21 - Qual dispositivo pode proteger equipamentos de inform�tica de quedas de energia, proporcionando uma qualidade consistente de energia el�trica?\n\n");
    printf("A - Adaptador AC\n");
    printf("B - SPS\n");
    printf("C - UPS\n");
    printf("D - supressor de picos\n");
        printf("Digite sua resposta:");
            scanf(" %c", &resposta);
             if (resposta=='d')
                {
                    printf("Resposta Correta!\n");
                    c_r1++;
                }else{
                    printf("Resposta Incorreta!\n");
                    e_r1++;
                }
    getchar();
    system("cls");

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
        quiz();
    }else{
        exit(1);
    }
}