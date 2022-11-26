//Elaborado por jonathas santos RA:202210434 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define I 5
#define J 5

int i,j;

int main()
{   
    int terminar = 1; // variavel que controla termino do cmd
    char nomecmd[25]={}; // variavel que pega do usuario o comando a ser excutado
    int cmd=100; // variavel que devine as açoes do cmd

    printf("===========================================================\n");
    printf("Linha de comando basica:\n");
    printf("===========================================================\n");

    while (terminar!=200){ //loop em que o cmd fica excutando os comandos ate ser encerrado
        
        printf("/");
        scanf("%s",&nomecmd);
        fflush(stdin);

        if(strcmp("help",nomecmd)==0){  // compara se o comando digitado pelo usuario é compativel e define uma açao para o switch
            cmd = 0;
        }

        if (strcmp("terminar",nomecmd)==0){ // compara se o comando digitado pelo usuario é compativel e define uma açao para o switch
            cmd = 1;
        }

        if (strcmp("lsarq",nomecmd)==0){// compara se o comando digitado pelo usuario é compativel e define uma açao para o switch
            cmd = 2;
        }

        if (strcmp("lscmd",nomecmd)==0){// compara se o comando digitado pelo usuario é compativel e define uma açao para o switch
            cmd = 3;
        }

        if (strcmp("novoarq",nomecmd)==0){// compara se o comando digitado pelo usuario é compativel e define uma açao para o switch
            cmd = 4;
        }

         if (strcmp("delarq",nomecmd)==0){// compara se o comando digitado pelo usuario é compativel e define uma açao para o switch
            cmd = 5;
        }
        
        else if(cmd==100) { // se nenhum dos comandos forem encontrados exibe erro e sugere que digite ajuda!
            printf("Comando invalido, tente novamente ou solicite help\n");
        }
        
        switch (cmd) { // switch que controla as açoes do cmd conforme solicitada pelos usuarios

        case (0): //  comando que mostra a ajuda para usuario indicando os comandos do painel.
            printf("=============================================\n");
            printf("Esse CMD possui os seguintes comandos:\n\n");
            printf("help - Fornece esclarecimento do comando solicitado.\n");
            printf("lscmd - Lista todos os comandos integrados nesse programa\n");
            printf("lsarq - Lista os arquivos desse diretorio.\n");
            printf("novoarq - Cria um novo arquivo nesse diretorio.\n");
            printf("delarq - Exclui um arquivo nesse diretorio.\n");
            printf("terminar - Termina o cmd.\n");
            printf("\n=============================================\n");
        break;
        case (1): // termina o cmd a qualquer momento que usuario digitar "terminar"

            printf("=============================================\n");
            printf("Ate breve!");
            exit(1);
        break;

        case (2): //  lista os comandos esse programa
            printf("=============================================\n");
            system("cmd /c dir");
            printf("=============================================\n");

        break;

         case (3): //  lista os comandos esse programa
            printf("=============================================\n");
            printf("Esse CMD possui os seguintes comandos:\n\n");
            printf("help - Fornece esclarecimento do comando solicitado.\n");
            printf("lscmd - Lista todos os comandos integrados nesse programa\n");
            printf("lsarq - Lista os arquivos desse diretorio.\n");
            printf("novoarq - Cria um novo arquivo nesse diretorio.\n");
            printf("delarq - Exclui um arquivo nesse diretorio.\n");
            printf("terminar - Termina o cmd.\n");
            printf("=============================================\n");
        break;

        case (4): { // novo arquivo
            char nomearq[]={};
            char novoarq[] = "type nul > ";
            
            printf("Digite o nome do arquivo que deseja criar:");
            scanf("%s",&nomearq);
            fflush(stdin);
            strcat(novoarq, nomearq);
            system(novoarq);
            printf("Arquivo criado com sucesso!\n");
            break;
        } 

        case (5): {// excluir arquivo
            char nomearq[]={};
            char delarq[]= "del ";
            printf("Digite o nome do arquivo que deseja deletar:");
            scanf("%s",&nomearq);
            fflush(stdin);
            strcat(delarq, nomearq);
            system(delarq);
            printf("Arquivo deletado com sucesso!\n",nomearq);
            break;
        } 
            
        default:
            break;
        }
    }
  
    
    return 0;
}

//Elaborado por jonathas santos RA:202210434 