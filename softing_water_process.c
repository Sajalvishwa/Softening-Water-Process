#include<stdio.h>
int main() 
{
    float Caco3;
    printf("enter the value of Caco3 =\n");
    scanf("%f",& Caco3);
    printf(" Caco3 is =%f\n", Caco3 = 100 * Caco3 / 100);

    float CaHco3;
    printf("enter the value of CaHco3 =");
    scanf("%f",&CaHco3);
    printf("CaHco3 is =%f\n", CaHco3= 100 * CaHco3 / 162);

    float CaSo4;
    printf("enter the value of CaSo4 =\n");
    scanf("%f",& CaSo4);
    printf("CaSo4 is =%f\n", CaSo4 = 100 * CaSo4 / 136);

    float CaCl2;
    printf("enter the value of CaCl2 =\n");
    scanf("%f",& CaCl2);
    printf("CaCl2 is =%f\n", CaCl2 = 100 * CaCl2 / 111);


    float MgCo3;
    printf("enter the value of MgCo3 =\n");
    scanf("%f",& MgCo3);
    printf("MgCo3 is =%f\n", MgCo3 = 100 * MgCo3 / 84);

    float MgHco3;
    printf("enter the value of MgHco3 =\n");
    scanf("%f",& MgHco3);
    printf("MgHco3 is =%f\n", MgHco3 = 100 * MgHco3 / 146);

    float MgCl2;
    printf("enter the value of MgCl2 =\n");
    scanf("%f",& MgCl2);
    printf("MgCl2 is =%f\n", MgCl2 = 100 * MgCl2 / 95);

    float MgSo4;
    printf("enter the value of MgSo4 =\n");
    scanf("%f",& MgSo4);
    printf("MgSo4 is =%f\n",MgSo4 = 100 * MgSo4 / 120);

    float FeCl2;
    printf("enter the value of FeCl2 =\n");
    scanf("%f",& FeCl2);
    printf("FeCl2 is =%f\n", FeCl2 = 100 * FeCl2 / 126);

    float FeSo4;
    printf("enter the value of FeSo4 =\n");
    scanf("%f",& FeSo4);
    printf("FeSo4 is =%f\n",FeSo4 = 100 * FeSo4 / 151);

    float AlCl3;
    printf("enter the value of AlCl3 =\n");
    scanf("%f",& AlCl3);
    printf("ALcl3 is =%f\n", AlCl3 = 100 * AlCl3 / 133.5);

    float Al2So4;
    printf("enter the value of Al2So4 =\n");
    scanf("%f",& Al2So4);
    printf("AL2So4 is =%f\n", Al2So4 = 100 * Al2So4 / 342);

    float H;
    printf("enter the value of H+ =\n");
    scanf("%f",& H);
    printf("H is =%f\n", H = 100 * H / 1);

    float C02;
    printf("enter the value of CO2 =\n");
    scanf("%f",& C02);
    printf("co2 is =%f\n",C02 = 100 * C02 / 44);

    float HCO3;
    printf("enter the value of HCO3 =\n");
    scanf("%f",& HCO3);
    printf("HCO3 is =%f\n", HCO3 = 100 * HCO3 / 61);

    float NaAlO2;
    printf("enter the value of NaAlO2 =\n");
    scanf("%f",& NaAlO2);
    printf("naal02 is =%f\n", NaAlO2 = 100 * NaAlO2 / 81);

    float water;
    printf("enter the value of water =\n");
    scanf("%f",& water);

    float puritylime;
    printf("enter the value of puritylime =\n");
    scanf("%f",& puritylime);

    float Lime;
    scanf("%f",& Lime);
    printf("LIME REQUIRED = %f\n",
    Lime = 0.74 * (Caco3 + CaHco3 + MgCo3 + 2*MgHco3 + MgCl2 + MgSo4 + FeCl2 + FeSo4 + 3*AlCl3 + 3*Al2So4 + 0.5*H + C02 + 0.5*HCO3 - NaAlO2) * (water / 1000000) * (100 / puritylime) );

    float puritysoda;
    printf("enter the value of puritysoda =\n");
    scanf("%f",& puritysoda);

    float Soda;
    scanf("%f",&Soda);
    printf("SODAREQUIRED = %f\n",
    Soda = 1.06 * (CaSo4 + CaCl2 + MgCl2 + MgSo4 + FeCl2 + FeSo4 + 3*AlCl3 + 3*Al2So4 + H - HCO3)  * (water / 1000000) * (100 / puritysoda) );
    return 0;
}
