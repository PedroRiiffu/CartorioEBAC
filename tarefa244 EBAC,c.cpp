#include <stdio.h> //BIBLIOTECA DE COMUNICAÇAO COM O USUARIO
#include <stdlib.h> //BIBLIOTECA DE ALOCAÇAO DE ESPAÇO EM MEMORIA
#include <locale.h>
#include <string.h> //BIBLIOTECA RESPONSAVEL PELOS STRING

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("digite o cpf que deseja cadrastrar: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //RESPONSAVEL POR COPIAR OS VALOES DAS STRINGS
	
	FILE  *file; //cria arquivo
	file = fopen(arquivo,"w"); //cria arquivo
	fprintf(file, cpf); //salva o alor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo,"a");
	fprintf(file, ",");
	fclose(file);
	
	printf("digite o nome a ser cadrastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo,"a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file, ",");
	fclose(file);
	
	printf("digite o sobrenome a ser cadrastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file, ",");
	fclose(file);
	
	printf("digite o cargo a ser cadrastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //define idioma
	
	char cpf[40];
	char conteudo[200];
	
	printf("digite o cpt que deseja consultar: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("esse arquivo nao existe nesse sistema.\N");
		
	}
    	
   	while(fgets(conteudo, 200, file) !=NULL)
   	{
   		printf("\n essas sao as informaçoes do conteudo");
   		printf("%s", conteudo);
   		printf("\n\n");
	   }
    	
	system("pause");
	
}

int deletar()
{
	printf("voce escolheu deletar nome!\n");
	system("pause");
	
}


int main()
{
	int opcao=0; //definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("### cartorio da EBAC ###\n");
	printf("escolha a opçao desejada do menu\n\n"); //inicio do menu
	printf("\t1 - registrar nomes\n");
	printf("\t2 - consultar nomes\n");
	printf("\t3 - deletar nomes\n\n");
	printf("\t4 - Sair do sistema\n\n");
	printf("opcao: "); //fim do menu
	
	scanf("%d" , &opcao); //armazenando escolhas do usuario
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
		registro();
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
		printf("Obrigado por utilizar o sistema!\n");
		return 0;
		break;
		
		default:
		printf("essa opcao nao existe");
		system("pause");
		break;
	}
	
 }
}
