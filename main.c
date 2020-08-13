#include <stdio.h>
#include <stdlib.h>

/* Fun��o: aplica��o que faz um question�rio a alunos, com o intuito de saber o seu genero, a sua idade e a sua opini�o
		   em rela��o ao curso que frequentam e que calcula o n� total de alunos inquiridos, a % do sexo Masculino ou Feminino e ainda
		   a quantidade de alunos do sexo Masculino com menos de 23 anos que n�o gostam do curso que frequentam
   Autor:  Lu�s Filipe */

int main(int argc, char *argv[]) {

	//Variaveis
	char genero, opiniao;
	int idade,i,totalEstudantes, estudantesMasculinos, estudantesFemininas, estudantesMenos23anos;
	float percentagemMasculino, percentagemFeminino;

	//limpa consola
	system("cls");
	
	//Inicializar Variaveis
	idade = 0;
	totalEstudantes = 0;
	estudantesMasculinos = 0;
	estudantesFemininas = 0;
	estudantesMenos23anos = 0;
	percentagemMasculino = 0.0F;
	percentagemFeminino = 0.0F;

	puts("=== Questionario ====\n");
	puts("Insira S no genero para fechar o programar"); //Informar acerca da condi��o de paragem
	puts("");

	//Solicita��o da informa�ao referente ao aluno
	do {
		//Solicitar o genero
		printf("Insira o seu genero(M/F): ");
		scanf(" %c", &genero);
		if (genero != 'S' && genero != 's' )
		{
		
		//Solicitar a idade
		printf("Insira a sua idade: ");
		scanf(" %d", &idade);

		//Questionar a sua opiniao referente ao curso que se encontra a frequentar
		printf("Esta a gostar do curso que frequenta? (S/N): ");
		scanf(" %c", &opiniao);

		totalEstudantes++;	//Incrementa 1 valor � variavel totalEstudantes ap�s o termio de cada inquerito de forma a saber o total de alunos inquiridos

		//Verifca se o genero do estudante � Masculino
		if (genero == 'M' || genero == 'm' ) 
		{
			estudantesMasculinos++;
			if (idade < 23  &&  (opiniao == 'N' || opiniao == 'n')) //Verifica se o estudante � do sexo Masculino, tem menos de 23 anos e n�o gosta do curso que frequenta
				estudantesMenos23anos++;
		}

		//Verifca se o genero do estudante � Feminino
		if (genero == 'F' || genero == 'f' )
			estudantesFemininas++;
		}	

	} while (genero != 'S' && genero != 's'); 

	//Calcula a percentagem de estudantes do sexo Masculino
	percentagemMasculino = (estudantesMasculinos * 100) / totalEstudantes;

	//Calcula a percentagem de estudantes do sexo Feminino
	percentagemFeminino = (estudantesFemininas * 100) / totalEstudantes;

	//Apresenta��o dos dados obtidos
	puts("");
	printf("O numero de alunos entrevistados foi de: %d\n",totalEstudantes);
	printf("Percentagem de alunos do Sexo Masculino entrevistados foi de: %.2f %%\n",  percentagemMasculino);
	printf("Percentagem de alunos do Sexo Feminino entrevistados foi de: %.2f %%\n", percentagemFeminino);
	printf("Alunos do Sexo Masculino com menos de 23 anos e que nao gostam do curso que estao a tirar: %d\n",  estudantesMenos23anos);

}
