#include <stdio.h>
#include<string.h>


//Fernando Henrique da Silva	RA:2216202903
//Lucas Nascimento Silva		RA:2216200795


int main(){

char c1[100],c2[100],c3[100],c4[100],c5[100];
char t[5]="";
int r=0,op;


printf("COMO PARAR DE PROCASTINAR E AUMENTAR A PRODUTIVIDADE\n");
printf("Voce sofre de PROCASTINACAO?\n");

printf("1-Principio 80/20\n");

	printf("Escolha 5 habitos que voce costuma ter:\n");
	
	printf("Informe o habito 1:\n");
	gets(c1);
	printf("Informe o habito 2:\n");
	gets(c2);
	printf("Informe o habito 3:\n");
	gets(c3);
	printf("Informe o habito 4:\n");
	gets(c4);
	printf("Informe o habito 5:\n");
	gets(c5);
	


	
printf("---------------------------------------------------\n\n\n\n");

printf("2-Comece o dia com as tarefas mais importantes:\n");

	printf("Sempre que comecar o seu dia, inicie com as 3 tarefas de mais importantes e de maior impacto\n");
	printf("%s\n%s\n%s\n%s\n%s\n\n",c1,c2,c3,c4,c5);

printf("\n\n\n\--------------------------------------------\n\n\n\n");



printf("3-Anote ideias e faca uma revisao semanal:\n");
	printf("Recomendamos o programa EVERNOTE, pois ele sincroniza as informacoes com o seu NOTEBOOK e CELULAR\n");
	printf("Mas se preferir, pode utilizar um bloco de notas, ou ate mesmo um caderno para as suas anotacoes\n");
	printf("Faca uma revisao de suas ideias\n");
	
printf("\n\n\n\--------------------------------------------\n\n\n\n");


printf("4-Crie um senso de Urgencia:\n");
	printf("Tente reduzir os prazos para a execucao de suas tarefas, por exemplo\n");
	printf("Digite uma quantidade de dias que voce acha que precise terminar um projeto:\n");
	scanf("%d",&r);
	printf("Tente terminar a sua tarefa em %d dias, assim voce ira desafiar a si mesmo para a conclusao de seus projetos em um menor tempo\n",r-1);
	
printf("\n\n\n\--------------------------------------------\n\n\n\n");


printf("5-Adicione recompensas e consequencias:\n");
printf("Escolha uma recompensa e uma consequencia\n");
	printf("Voce concluiu a tarefa em %d dias?\n1-SIM - 2-NAO\n",r);

	scanf("%d",&op);
	switch(op){
		case 1:{
			printf("Parabens!\nAproveite sua recompensa\n");
			printf("Pode ser um cinema com a namorada(o), pode ser ate mesmo um lanche. Algo que te agrade\n\n");
			break;
		}
		case 2:{
			printf("Voce tera que lavar o banheiro de sua casa. Algo que realmente seje uma pequena punicao para voce, por conta do nao cumprimento dentro do prazo estabelecido\n");
			break;
		}
}
	
printf("\n\n\n\--------------------------------------------\n\n\n\n");

printf("6-Comece aos poucos:\n");
	printf("Para alguma tarefa que queira execer, tente fazer gradativamente, passo a passo. Com isso, voce ira ganhar auto-confianca e tentara se superar cada vez mais\n");
	
	
printf("\n\n\n\--------------------------------------------\n\n\n\n");

printf("7-Monitore seus progressos:\n");
	printf("Anote cada tarefa concluida e todo Final de semana analise se esta sendo feito corretamente e dentro do prazo");
	
	
printf("\n\n\n\--------------------------------------------\n\n\n\n");

//Apresentar as dicas

	printf("Essas foram 7 extrategias simples e poderosas para superar a PROCASTINACAO e para aumentar sua PRODUTIVIDADE:\n");
	printf("1-Principio 80/20\n2-Comece o dia com as tarefas mais importantes:\n3-Anote ideias e faça uma revisao semanal:\n4-Crie um senso de Urgencia:\n5-Adicione recompensas e consequencias:\n6-Comece aos poucos:\n7-Monitore seus progressos:\n");
	printf("Esperamos que com essas dicas, voce se sinta mais feliz e auto confiante para qualquer desafio que voce passe em sua vida.\n");
	
//----------------------------------		
	
	
	
	
	
}
