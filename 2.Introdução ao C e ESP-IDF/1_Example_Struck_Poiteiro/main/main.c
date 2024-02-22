#include <stdio.h>
#include <string.h>

// Struck Pessoa -  Parametros
typedef struct Pessoa_struct{
    char primeiro_Nome[20];
    char ultimo_Nome[20];
    int idade;
} Pessoa;

// Função de Update de informações da Struck Pessoa
void update_Pessoa(Pessoa *pessoa){
    strcpy(pessoa->primeiro_Nome, "Bob");
    strcpy(pessoa->ultimo_Nome, "Fisher");
    pessoa->idade = 45;
}

void app_main(void)
{
    // Modo associado a segunda forma de struck
    Pessoa pessoa;
    update_Pessoa(&pessoa);    
    printf("Pessoa: %s %s, idade %d \n", pessoa.primeiro_Nome, pessoa.ultimo_Nome, pessoa.idade);
}

