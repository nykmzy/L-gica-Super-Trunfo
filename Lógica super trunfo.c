#include <stdio.h>
int main() {
    
    //Adiciona as variáveis para carta 1
    char Estado1[50], Cidade1[50], CodigoCarta1[20];
    int Populacao1, PontosTuristicos1;
    float Area1, PIB1;
    

    // Variáveis carta 2
    char Estado2[50], Cidade2[50], CodigoCarta2[20];
    int Populacao2, PontosTuristicos2;
    float Area2, PIB2;

    printf("Vamos cadastrar sua primeira carta.\nDigite o Estado: ");// Printf solicita os dados
    scanf("%[^\n]", Estado1); //scanf para digitar

    printf("Digite a Cidade:");
    scanf(" %[^\n]", Cidade1);

    printf("Digite o Código da Carta:");
    scanf("%s", CodigoCarta1);

    printf("Digite o Número total da população:");
    scanf("%d", &Populacao1);

    printf("Digite quantos Pontos Turísticos têm:");
    scanf("%d", &PontosTuristicos1);

    printf("Digite a Área da Cidade:");
    scanf("%f", &Area1);

    printf("Digite o PIB:");
    scanf("%f", &PIB1);

    //cálculo da densidade e do PIB per capta e Calcular o super poder da carta 1
    float PIBpCapita1 = PIB1 / Populacao1;
    float DensidadeP1 = Populacao1 / Area1;
    float InversoDensidade1 = 1 / DensidadeP1;
    float SuperPoder1 = Populacao1 + PontosTuristicos1 + Area1 + PIB1 + PIBpCapita1 + InversoDensidade1;

    //exibição dos dados da carta 1
    printf("\nEstes são os dados da primeira carta:\n");
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("Código da Carta: %s\n", CodigoCarta1);
    printf("População : %d\n", Populacao1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Área: %.2fkm\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Densidade Populacional: %.2f\n", DensidadeP1);
    printf("PIB per Capita: %.2f\n", PIBpCapita1);
    printf("Super Poder:%2.f\n",SuperPoder1);


    //inserir dados da carta 2
    // Antes de ler Estado2
    getchar(); // Limpa o \n pendente no buffer
    printf("\nAgora cadastre a segunda carta.\nDigite o Estado: ");
    scanf("%[^\n]", Estado2);

    printf("Digite a Cidade da Carta:");
    scanf(" %[^\n]", Cidade2); //ESPAÇO antes do %[^\n]

    printf("Digite o Código da Carta:");
    scanf(" %s", CodigoCarta2);

    printf("Digite o Número total da população:");
    scanf("%d", &Populacao2);

    printf("Digite quantos Pontos Turísticos têm:");
    scanf("%d", &PontosTuristicos2);

    printf("Digite a Área da Cidade:");
    scanf("%f", &Area2);

    printf("Digite o PIB:");
    scanf("%f", &PIB2);

    //cálculo da densidade e do PIB per capta e Calcular o super poder da carta 2
    float PIBpCapita2 = PIB2 / Populacao2;
    float DensidadeP2 = Populacao2 / Area2;
    float InversoDensidade2 = 1 / DensidadeP2;
    float SuperPoder2 = Populacao2 + PontosTuristicos2 + Area2 + PIB2 + PIBpCapita2 + InversoDensidade2;

    //exibição carta 2
    printf("\nEstes são os dados da segunda carta:\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Código da Carta: %s\n", CodigoCarta2);
    printf("População: %d\n", Populacao2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Área: %fkm\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Densidade Populacional: %2.f\n", DensidadeP2);
    printf("PIB per Capita: %2.f\n", PIBpCapita2);
    printf("Super Poder:%.2f\n",SuperPoder2);

    int opcao;

    printf("Escolha um atributo.\n");
    printf("1. Ver nome das cartas\n");
    printf("2. População\n");
    printf("3. Pontos Turísticos\n");
    printf("4. Área\n");
    printf("5. PIB\n");
    printf("6. Densidade Populacional\n");
    printf("7. PIB per Capta\n");
    printf("8. Super Poder\n");
    printf("9. Comparação com dois atributos\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        {
            printf("Carta 1: %s - %s\n", Estado1, Cidade1);
            printf("Carta 2: %s - %s\n", Estado2, Cidade2);
        }

        break;
    
         case 2:
         {
        if (Populacao1 > Populacao2) {
    printf("Resultado: Carta 1 - %s: %.2f vence!\n", Estado1, Populacao1);
} else if (Populacao2 > Populacao1) { //else if antes de else
    printf("Resultado: Carta 2 - %s: %.2f vence!\n", Estado2, Populacao2);
} else {
    printf("Resultado: Empate!\n");}
}
        break;
    
         case 3:
         {
        if (PontosTuristicos1 > PontosTuristicos2) {
    printf("Resultado: Carta 1 - %s: %.2f vence!\n", Estado1, PontosTuristicos1);
} else if (PontosTuristicos2 > PontosTuristicos1) { //else if antes de else
    printf("Resultado: Carta 2 - %s: %.2f vence!\n", Estado2, PontosTuristicos2);
} else {
    printf("Resultado: Empate!\n");}
}
        break;
    
         case 4:
         {
        if (Area1 > Area2) {
    printf("Resultado: Carta 1 - %s: %.2f vence!\n", Estado1, Area1);
} else if (Area2 > Area1) { //else if antes de else
    printf("Resultado: Carta 2 - %s: %.2f vence!\n", Estado2, Area2);
} else {
    printf("Resultado: Empate!\n");}
}
        break;
    
         case 5:
         {
        if (PIB1 > PIB2) {
    printf("Resultado: Carta 1 - %s: %.2f vence!\n", Estado1, PIB1);
} else if (PIB2 > PIB1) { //else if antes de else
    printf("Resultado: Carta 2 - %s: %.2f vence!\n", Estado2, PIB2);
} else {
    printf("Resultado: Empate!\n");}
}
        break;
    
         case 6:
         {
        if (DensidadeP1 > DensidadeP2) {
    printf("Resultado: Carta 1 - %s: %.2f vence!\n", Estado1, DensidadeP1);
} else if (DensidadeP2 > DensidadeP1) { //else if antes de else
    printf("Resultado: Carta 2 - %s: %.2f vence!\n", Estado2, DensidadeP2);
} else {
    printf("Resultado: Empate!\n");}
}
        break;

         case 7:
         {
        if (PIBpCapita1 > PIBpCapita2) {
    printf("Resultado: Carta 1 - %s: %.2f vence!\n", Estado1, PIBpCapita1);
} else if (PIBpCapita2 > PIBpCapita1) { //else if antes de else
    printf("Resultado: Carta 2 - %s: %.2f vence!\n", Estado2, PIBpCapita2);
} else {
    printf("Resultado: Empate!\n");}
}
        break;

         case 8:
         {
       if (SuperPoder1 > SuperPoder2) {
    printf("Resultado: Carta 1 - %s: %.2f vence!\n", Estado1, SuperPoder1);
} else if (SuperPoder2 > SuperPoder1) { //else if antes de else
    printf("Resultado: Carta 2 - %s: %.2f vence!\n", Estado2, SuperPoder2);
} else {
    printf("Resultado: Empate!\n");}
}
        break;

        case 9:
        {
    int resultado1 = 0, resultado2 = 0;
    int atributo1, atributo2;

    printf("Escolha o primeiro atributo.\n");
    printf("1. População\n2. Pontos Turísticos\n3. Área\n4. PIB\n5. Densidade Populacional\n6. PIB per Capta\n7. Super Poder\n");
    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1: resultado1 = Populacao1 > Populacao2; break;
        case 2: resultado1 = PontosTuristicos1 > PontosTuristicos2; break;
        case 3: resultado1 = Area1 > Area2; break;
        case 4: resultado1 = PIB1 > PIB2; break;
        case 5: resultado1 = DensidadeP1 > DensidadeP2; break;
        case 6: resultado1 = PIBpCapita1 > PIBpCapita2; break;
        case 7: resultado1 = SuperPoder1 > SuperPoder2; break;
        default:
            printf("Opção de jogo inválida\n");
            return 1;
    }

    printf("Escolha o segundo atributo.\n");
    printf("1. População\n2. Pontos Turísticos\n3. Área\n4. PIB\n5. Densidade Populacional\n6. PIB per Capta\n7. Super Poder\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Você escolheu o mesmo atributo!\n");
        printf("Opção inválida. Tente novamente.\n");
        return 1;
    }

    switch (atributo2) {
        case 1: resultado2 = Populacao1 > Populacao2; break;
        case 2: resultado2 = PontosTuristicos1 > PontosTuristicos2; break;
        case 3: resultado2 = Area1 > Area2; break;
        case 4: resultado2 = PIB1 > PIB2; break;
        case 5: resultado2 = DensidadeP1 > DensidadeP2; break;
        case 6: resultado2 = PIBpCapita1 > PIBpCapita2; break;
        case 7: resultado2 = SuperPoder1 > SuperPoder2; break;
        default:
            printf("Opção de jogo inválida\n");
            return 1;
    }

    if (resultado1 && resultado2) {
        printf("Parabéns, você ganhou!\n");
    } else if (resultado1 != resultado2) {
        printf("Empate!\n");
    } else {
        printf("Você perdeu!\n");
    }

    break;
}
    return 0;
        }
    }
