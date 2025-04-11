

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // declaração das variáveis Carta 1
    char estado1;
    char codigo1[3];
    char cidade1[80];
    unsigned long int populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;
    int opcao1;
    float resultado1;

    // declaração das variáveis Carta 2
    char estado2;
    char codigo2[3];
    char cidade2[80];
    unsigned long int populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    int opcao2;
    float resultado2;

    printf("\n*************Primeiro estado do Super Trunfo*************\n");

    printf("Digite o Estado de A - H:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta sendo as possibilidades 01 / 02 / 03 / 04:\n");
    scanf(" %3s", &codigo1);

    printf("Digite o nome da cidade:\n");
    // Utilizei %[^\n] pois estava encontrando erro quando inseria uma cidade com espaço
    scanf(" %[^\n]", &cidade1);

    printf("Digite número da população desta cidade:\n");
    scanf(" %u", &populacao1);

    printf("Digite a área em Km² da cidade:\n");
    scanf(" %f", &Area1);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &PIB1);

    printf("Quantos pontos turísticos tem na cidade?\n");
    scanf(" %d", &PontosTuristicos1);

    float densidade1 = populacao1 / Area1;
    float PIBpercapita1 = PIB1 / populacao1;
    double superpoder1 = populacao1 + Area1 + PIB1 + PIBpercapita1 + (1.0 / densidade1) + PontosTuristicos1;
  
    printf("\n*************Segundo estado do Super Trunfo*************\n");

    printf("Digite o Estado de A - H:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta sendo as possibilidades 01 / 02 / 03 / 04:\n");
    scanf(" %3c", &codigo2);

    printf("Digite o nome da cidade:\n");
    // Utilizei %[^\n] pois estava encontrando erro quando inseria uma cidade com espaço
    scanf(" %[^\n]", &cidade2);

    printf("Digite número da população desta cidade:\n");
    scanf(" %u", &populacao2);

    printf("Digite a área em Km² da cidade:\n");
    scanf(" %f", &Area2);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &PIB2);

    printf("Quantos pontos turísticos tem na cidade?\n");
    scanf(" %d", &PontosTuristicos2);

    float densidade2 = populacao2 / Area2;
    float PIBpercapita2 = PIB2 / populacao2;
    double superpoder2 = populacao2 + Area2 + PIB2 + PIBpercapita2 + (1.0 / densidade2) + PontosTuristicos2;


    printf("\n******* Carta 01 *******\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f Km²\n", Area1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("PIB per capita: %.2f\n", PIBpercapita1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n******* Carta 02 *******\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f Km²\n", Area2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("PIB per capita: %.2f\n", PIBpercapita2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Super Poder: %.2f\n", superpoder2);

printf("--------------------------------------------------------------------------------\n"); //pular linha

srand(time(0));

printf("------- COMPARAÇÃO DAS CARTAS -----------------------------------\n");
printf("Escolha uma opção de Comparativo:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. Densidade Populacional\n");
printf("4. PIB\n");
printf("5. PIB per capita\n");
printf("6. Pontos Turísticos\n");
printf("7. Super Poder\n");

printf("----------------------------------------------------------------------------------\n");
printf("PRIMEIRO ATRIBUTO: ");
scanf("%d",&opcao1);

printf("----------------------------------------------------------------------------------\n");

printf("SEGUNDO ATRIBUTO: ");
scanf("%d",&opcao2);


if (opcao1 == opcao2)
{
    printf("Não é possivel escolher o mesmo Atributo\n"); 
}
else
{
    printf("\n");

    switch (opcao1){

        case 1:
            printf("População:\n");
            printf("Carta 1 - %s: %u\n", cidade1, populacao1);
            printf("Carta 2 - %s: %u\n", cidade2, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            
            break;

        case 2:
            printf("Área:\n");
            printf("Carta 1 - %s: %f Km²\n", cidade1, Area1);
            printf("Carta 2 - %s: %f Km²\n", cidade2, Area2);
            resultado1 = Area1 > Area2 ? 1 : 0;
            
        break;

        case 3:
            printf("Densidade Populacional:\n");
            printf("Carta 1 - %s: %f\n", cidade1, densidade1);
            printf("Carta 2 - %s: %f\n", cidade2, densidade2);
            resultado1 = densidade1 > densidade2 ? 1 : 0;
            
        break;

        case 4:
            printf("PIB:\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, PIB1);
            printf("Carta 2 - %s: %.2f\n", cidade2, PIB2);
            resultado1 = PIB1 > PIB2 ? 1 : 0;
            
        break;

        case 5:
            printf("PIB per capita:\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, PIBpercapita1);
            printf("Carta 2 - %s: %.2f\n", cidade2, PIBpercapita2);
            resultado1 = PIBpercapita1 > PIBpercapita2 ? 1 : 0;
            
        break;

        case 6:
            printf("Numeros de pontos turisticos:\n");
            printf("Carta 1 - %s: %d\n", cidade1, PontosTuristicos1);
            printf("Carta 2 - %s: %d\n", cidade2, PontosTuristicos2);
            resultado1 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
            
        break;

        case 7:
            printf("Super Poder:\n");
            printf("Carta 1 - %s: %f\n", cidade1, superpoder1);
            printf("Carta 2 - %s: %f\n", cidade2, superpoder2);
            resultado1 = superpoder1 > superpoder2? 1 : 0;
            
        break;

        default:
        break;

}

    switch (opcao2){

        case 1:
            printf("População:\n");
            printf("Carta 1 - %s: %u\n", cidade1, populacao1);
            printf("Carta 2 - %s: %u\n", cidade2, populacao2);
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            
        break;

        case 2:
            printf("Área:\n");
            printf("Carta 1 - %s: %f Km²\n", cidade1, Area1);
            printf("Carta 2 - %s: %f Km²\n", cidade2, Area2);
            resultado2 = Area1 > Area2 ? 1 : 0;
            
        break;

        case 3:
            printf("Densidade Populacional:\n");
            printf("Carta 1 - %s: %f\n", cidade1, densidade1);
            printf("Carta 2 - %s: %f\n", cidade2, densidade2);
            resultado2 = densidade1 > densidade2 ? 1 : 0;
            
        break;

        case 4:
            printf("PIB:\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, PIB1);
            printf("Carta 2 - %s: %.2f\n", cidade2, PIB2);
            resultado2 = PIB1 > PIB2 ? 1 : 0;
            
        break;

        case 5:
            printf("PIB per capita:\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, PIBpercapita1);
            printf("Carta 2 - %s: %.2f\n", cidade2, PIBpercapita2);
            resultado2 = PIBpercapita1 > PIBpercapita2 ? 1 : 0;
            
        break;

        case 6:
            printf("Numeros de pontos turisticos:\n");
            printf("Carta 1 - %s: %d\n", cidade1, PontosTuristicos1);
            printf("Carta 2 - %s: %d\n", cidade2, PontosTuristicos2);
            resultado2 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
            
        break;

        case 7:
            printf("Super Poder:\n");
            printf("Carta 1 - %s: %f\n", cidade1, superpoder1);
            printf("Carta 2 - %s: %f\n", cidade2, superpoder2);
            resultado2 = superpoder1 > superpoder2? 1 : 0;
            
        break;

        default: printf("Opção Inválida: digite 1 a 7");
    break;
    
        }

        }
        
        printf("\n");
            
          
    if (resultado1 && resultado2) {
        printf("Carta 1 venceu!\n");
    } else if (resultado1 != resultado2) {
        printf("Empate");
    } else {
        printf("Carta 2 venceu!");
    }
    
return 0;
}


    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    