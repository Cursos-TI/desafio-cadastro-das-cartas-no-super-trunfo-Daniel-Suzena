#include<stdio.h>

int main(){
    char estado1[50];
    char codigo1[50];
    char cidade1[50];
    float populacao1;
    float area1;
    double pib1;
    int numerodepontosturisticos1;
    double densidadepopulacional1;
    double pibpercapita1;
    double superpoder1;
    

    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    float populacao2;
    float area2;
    double pib2;
    int numerodepontosturisticos2;
    double densidadepopulacional2;
    double pibpercapita2;
    double superpoder2;
    

    printf("\n------------Cadastre a primeira carta---------------\n");

    printf("Letra de Estado(ex: A - H) : \n");
    scanf("%s",estado1);

    printf("Codigo da Cidade (ex:A1,B4) : \n");
    scanf("%s",codigo1);

    printf("Cidade : \n");
    scanf("%s",cidade1);

    printf("Populacao : \n");
    scanf("%f",&populacao1);

    printf("Area em Km²: \n");
    scanf("%f",&area1);

    printf("PIB : \n");
    scanf("%lf",&pib1);

    printf("Número de pontos turisticos : \n");
    scanf("%i",&numerodepontosturisticos1);

    densidadepopulacional1 = populacao1 / area1;
    printf("Densidade populacional : %.2lf\n", densidadepopulacional1);

    pibpercapita1 = pib1 / populacao1;
    printf("PIB per capita : %.2lf\n", pibpercapita1);

    superpoder1 = (populacao1 + area1 + pib1 + numerodepontosturisticos1 + pibpercapita1) + (densidadepopulacional1 / 1);


    printf("\n------------Cadastre a segunda carta---------------\n");

    printf("Letra de Estado(ex: A - H) : \n");
    scanf("%s",estado2);

    printf("Codigo da Cidade (ex:A1,B4) : \n");
    scanf("%s",codigo2);

    printf("Cidade : \n");
    scanf("%s",cidade2);

    printf("Populacao : \n");
    scanf("%f",&populacao2);

    printf("Area em Km²: \n");
    scanf("%f",&area2);

    printf("PIB : \n");
    scanf("%lf",&pib2);

    printf("Numero de pontos turisticos : \n");
    scanf("%i",&numerodepontosturisticos2);

    densidadepopulacional2 = populacao2 / area2;
    printf("Densidade populacional : %.2lf\n", densidadepopulacional2);

    pibpercapita2 = pib2 / populacao2;
    printf("PIB per capita : %.2lf\n", pibpercapita2);

    superpoder2 = (populacao2 + area2 + pib2 + numerodepontosturisticos2 + pibpercapita2) + (densidadepopulacional2 / 1);


    printf("\n---------------Carta 01----------------\n");

    printf("Estado : %s\n",estado1);
    printf("Codigo da Cidade : %s\n",codigo1);
    printf("Cidade : %s\n",cidade1);
    printf("Populacao : %.2f\n",populacao1);
    printf("Area em Km² : %.2f\n",area1);
    printf("PIB : %.2lf\n",pib1);
    printf("Numero de pontos turisticos : %i\n",numerodepontosturisticos1);
    printf("Densidade populacional : %.2lf\n",densidadepopulacional1);
    printf("PIB Per Capita : %.2lf\n",pibpercapita1);
    printf("Super poder da Carta1 : %.2lf\n",superpoder2);


    printf("\n---------------Carta 02----------------\n");

    printf("Estado : %s\n",estado2);
    printf("Codigo da Cidade : %s\n",codigo2);
    printf("Cidade : %s\n",cidade2);
    printf("Populacao : %.2f\n",populacao2);
    printf("Area em Km² : %.2f\n",area2);
    printf("PIB : %.2lf\n",pib2);
    printf("Numero de pontos turisticos : %i\n",numerodepontosturisticos2);
    printf("Densidade populacional : %.2lf\n",densidadepopulacional2);
    printf("PIB Per Capita : %.2lf\n",pibpercapita2);
    printf("Super poder da Carta1 : %.2lf\n",superpoder1);

                                      //Comparação
                                      printf("\n-------------Comparações-------------\n");
    printf("Populacao da Carta1 corresponde ser maior que a carta2  ? : %i\n",(populacao1 > populacao2));
    printf("Area em Km² da Carta1 corresponde ser maior que a carta2 ?  : %i\n",(area1 > area2));
    printf("PIB da Carta1 corresponde ser maior que a carta2 ?  : %i\n",(pib1 > pib2));
    printf("Numero de pontos turisticos da Carta1 corresponde ser maior que a carta2 ? :  %i\n",(numerodepontosturisticos1 > numerodepontosturisticos2));
    printf("Densidade populacional da Carta1 corresponde ser menor que a carta2 ? : %i\n",(densidadepopulacional1 < densidadepopulacional2));
    printf("PIB per Capita da Carta1 corresponde ser menor que a carta2 ? : %i\n",(pibpercapita1 < pibpercapita2));
    printf("Super poder da Carta1 : %.2lf\n",superpoder1);
    printf("Super poder da Carta2 : %.2lf\n",superpoder2);

    return 0;
}
