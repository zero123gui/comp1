#include <stdio.h>
#include <string.h>
#define max 15

void contaLetras(char palavra[]){
    int tamanho = 0;
        for (int i = 0; palavra[i] != '\0'; i++)
        {
            if (palavra[i] != ' ')
            {
                tamanho++;
            }
        }
        printf("%s - %d\n", palavra, tamanho);
}

void contaVogal(char palavra[]){
    int vogais = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e'  || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            vogais++;
        }
        if (palavra[i] == 'A' || palavra[i] == 'E'  || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U')
        {
            vogais++;
        }
    }
    printf("%s - %d\n", palavra, vogais);
    
}

void contaPalavra(char palavra[]){
    int palavras = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == ' ')
        {
            palavras++;
        }
    }
    palavras+=1;
    printf("%s - %d\n",palavra, palavras);
    
}


int main(){
    char palavras[max][max];
    int op_palavra=0, op=0,i=0;
    
    do
    {
        printf("\nDigite a palavra: ");
        scanf("%[^\n]%*c", palavras[i]);
        i++;

        printf("\n1 - Cadastrar nova palavra: \n0 - Se nao deseja cadastrar nova palavra: ");
        scanf("%d%*c",&op_palavra);
    } while (op_palavra);

    do
    {
        printf("Escolha uma opcao:\n");
        printf("1 - Contar Letras\n");
        printf("2 - Contar Vogais\n");
        printf("3 - Contar palavras\n");
        printf("0 - Sair\n");
        scanf("%d%*c", &op);

        switch(op)
        {
            case 1: for (int x = 0; x < i; x++)
            {
                contaLetras(palavras[x]);
            }
                break;

            case 2: for (int y = 0; y < i; y++)
            {
                contaVogal(palavras[y]);
            }
                break;

            case 3: for (int z = 0; z < i; z++)
            {
                contaPalavra(palavras[z]);
            }
            
            default:
                break;
        }

    } while (op != 0);
    

    return 0;
}