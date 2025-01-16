#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprime_matriz(int**v,int ql,int qc);
int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("Digite a quantidade de linhas:\n");
    int ql;
    scanf("%d",&ql);
    printf("Agora a quantidade de colunas:\n");
    int qc;
    scanf("%d",&qc);
    int **v=(int **)malloc(sizeof(int*)*ql);// aloca um espaço de memoria para v
    if(v==NULL)//verifica se o espaço para v foi alocado corretamente
    {
        exit(1);
    }
    for(int i=0; i<ql; i++)// aloca um espaço de memoria para todos os elementos de v
    {
        v[i]=(int*)malloc(qc*sizeof(int));
    }
    for(int i=0; i<ql; i++) //loop para quantidade de linhas
    {
        for(int j=0; j<qc; j++)//loop para quantidade de colunas
        {
            printf("Digite o valor da posição [%d][%d]",i,j);//pede ao usuario o valor de cada elemento da matriz
            scanf("%d",&v[i][j]);
        }
    }
//um loop dentro do outro para imprimir os valores da matriz de forma organizada//
    for(int i=0; i<ql; i++)
    {
        for(int j=0; j<qc; j++)
        {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    int **mt;//criei mais um ponteiro de ponteiros para transpor a matriz
    mt = (int **) malloc(qc * sizeof(int *));
    if(mt==NULL)//verifica se o espaço para mt foi alocado corretamente
    {
        exit(1);
    }
    //alocando a matriz.../
    for (int i = 0; i < qc; i++)
    {
        mt[i] = (int *) malloc(ql * sizeof(int));
    }

    for (int i = 0; i < qc; i++)//aqui estou passando os valores da matriz v para mt, para transpor//
    {
        for (int j = 0; j < ql; j++)
        {
            mt[i][j] = v[j][i];
        }
    }
    printf("\nMatriz transposta:\n");//mais um loop dentro do outro para imprimir a amtriz transposta de forma organizada//
    for (int i = 0; i < qc; i++)
    {
        for (int j = 0; j < ql; j++)
        {
            printf("%d ", mt[i][j]);
        }
        printf("\n");
    }
    if(ql==qc)
    {
        printf("A matriz é quadrada.\n");
    }
    else
    {
        printf("A matriz não é quadrada.\n");
    }

    int verificador;
    for (int i = 0; i < qc; i++)
    {
        for (int j = 0; j < ql; j++)
        {
            if(v[i][j]==mt[i][j])
            {
                verificador=1;
            }
            else
            {
                verificador=0;
                break;
            }
        }
    }
    if(verificador==1)
    {
        printf("A matriz é simetrica.\n");
    }
    else
    {
        printf("A matriz não é simetrica.\n");
    }
//aqui fui liberando os espaços alocados de v e mt//
    for(int i=0; i<ql; i++)
    {
        free(v[i]);
        free(mt[i]);
    }
    free(v);
    free(mt);
    return 0;
}
