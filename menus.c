/**
 * File:   menus.c
 * Author: Danton Issler Rodrigues
 *
 * Created on April 6, 2019, 2:47 AM
 */
#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
#include "metodosFuntamentais.h"
#include "metodosInsercao.h"
#include "metodosRemocao.h"
#include "metodosConsulta.h"

/**Metodo que imprime as op��es iniciais para o usuario*/
int menuInicial(void){
    int opt = 0;
    /** Ope��es disponiveis*/
    printf("|-------Menu inicial-------|\n");
    printf("   Escolha a opcao\n");
    printf("0. Sair\n");
    printf("1. Exibir lista\n");
    printf("2. Adicionar novo cliente\n");
    printf("3. Remover cliente\n");
    printf("4. Zerar lista\n");
    printf("|--------------------------|\n");
    //printf("Opcao:'= %i.\n ", opt);
    printf("Opcao: ");
    /** Captura da op��o escolhida*/
    scanf("%d", &opt);
    return opt;
}
/**
* Metodo para sele��o da fun��o conforme informado
* pelo �suario no menu inicial
*/
void opcaoInicial(Elem *li, int op) {
    int op2 = 0;
    switch(op){
        case 0:
            /** Libera espa�o alocado pela lista*/
            liberaLista(li);
            break;
        case 1:
            /**Chamada da op��o de adicionar elemento no inicio da lista*/
            consultarTodosElementos(li);
            break;
        case 2:
            op2 = menuAdicao();
            opcaoAdicao(li, op2);
            break;
        case 3:
            removeListaFim(li);
            break;
        case 4:
            liberaLista(li);
            break;
        default:
            printf("Comando invalido\n\n");
    }
}
/**Metodo que imprime as op��es de adi��o para o usuario*/
int menuAdicao(void){
    int opt;
    printf("|---Menu para adicionar um novo cliente---|\n");
    /** Ope��es disponiveis*/
    printf("Escolha a opcao\n");
    printf("0. Retornar ao menu anterior\n");
    printf("1. Adicionar elemento no final da lista\n");
    printf("2. Adicionar elemento no inicio da lista\n");
//    printf("3. Adicionar elemento em uma posi��o\n");
    printf("|---------------------------------------|\n");
    printf("Opcao: ");
    /** Captura da op��o escolhida*/
    scanf("%d", &opt);

    return opt;
}
/**
* Metodo para sele��o da fun��o conforme informado
* pelo �suario no menu de adi��o
*/
void opcaoAdicao(Elem *li, int op) {
    int opcao;
    switch(op){
        case 0:
            /** Chama a tela do menu inicial*/
            menuInicial();
            break;
        case 1:
            /**Chamada da op��o de adicionar elemento no inicio da lista*/
            insereListaFinal(li);
            break;
        case 2:
            /**Chamada da op��o de adicionar elemento no inicio da lista*/
            insereListaInicio(li);
            break;
//        case 3:
//            /**insereListaOrdenada(li, conta)*/
//            printf("informe a posicao: ");
//            scanf("%d", &opcao);
//            insereListaOrdenada(li, opcao);
//            /**Chamada da op��o de adicionar elemento no inicio da lista*/
//            break;
        default:
            printf("Comando invalido\n\n");
    }
}
///**Metodo que imprime as op��es de adi��o para o usuario*/
//int menuRemocao(void){
//    int opt;
//    printf("|----Menu para remover um cliente----|\n");
//    /** Ope��es disponiveis*/
//    printf("0. Retornar ao menu anterior\n");
//    printf("1. Remover do �nicio\n");
//    printf("2. Remover um determinada posi��o\n");
//    printf("3. Remover do final\n");
//    printf("|------------------------------------|\n");
//    /** Captura da op��o escolhida*/
//    scanf("%d", &opt);
//    return opt;
//}
///**
//* Metodo para sele��o da fun��o conforme informado
//* pelo �suario no menu inicial
//*/
//void opcaoRemocao(Elem *li, int op) {
//    int conta;
//    switch(op){
//        case 0:
//            /** Chama a tela do menu inicial*/
//            menuInicial();
//            break;
//        case 1:
//            removeListaInicio(li);
//            break;
//        case 2:
//            removeListaFim(li);
//            break;
//        case 3:
//
//            printf("informe o numero da conta: ");
//            scanf("%d", &conta);
//            removeListaMeio(li, conta);
//            break;
//        default:
//            printf("Comando invalido\n\n");
//    }
//}
///**Metodo que imprime as op��es de adi��o para o usuario*/
//int menuConsulta(void){
//    int opt;
//    printf("|----Menu para pesquisa de clientes----|\n");
//    /** Ope��es disponiveis*/
//    printf("0. Retornar ao menu anterior\n");
//    printf("1. Consulta toda lista\n");
//    printf("2. Consulta pela posi��o do elemento\n");
//    printf("3. Consulta pelo n�mero da conta\n");
//    printf("|--------------------------------------|\n");
//    /** Captura da op��o escolhida*/
//    scanf("%d", &opt);
//    return opt;
//}
///**
//* Metodo para sele��o da fun��o conforme informado
//* pelo �suario no menu inicial
//*/
//void opcaoConsulta(Elem *li, int op) {
//    int conta;
//    switch(op){
//        case 0:
//            /** Chama a tela do menu inicial*/
//            menuInicial();
//            break;
//        case 1:
//            consultarTodosElementos(li);
//            break;
//        case 2:
//            printf("informe o numero da conta: ");
//            scanf("%d", &conta);
//            consultaListaCont(li, conta);
//            break;
//        case 3:
//            /**insereListaOrdenada(li, conta);*/
//            break;
//        default:
//            printf("Comando invalido\n\n");
//    }
//}
