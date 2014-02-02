/* Arquivo: chutes.c
 *
 * Autor: Guilherme N. Ramos (gnramos@unb.br)
 * 
 * Complete o código abaixo, trocando "??_??" pelo termo correto. */

/* Quanto pronto, este programa deve funcionar como uma calculadora simples. 
 * Deve perguntar ao usuário qual a operação a ser executada e, na sequência, os
 * dois operandos envolvidos. Por fim, mostrar o resultado da operação. 
 * 
 * Conhecimentos necessários: 
 *  - condicionais
 *  - laços de repetição
 */

??_?? <stdio.h>

??_?? multiplica(int x, int y) { ??_?? x ??_?? y; }
int divide(int x, int y) { ??_?? x ??_?? y; }
??_?? soma(int x, int y) { ??_?? x ??_?? y; }
??_?? subtrai(int x, int y) { ??_?? x ??_?? y; }

??_?? ??_??() {
	??_?? op = 'c';
	??_?? x, y; 

	printf("\nsoma (+), subtração (-), multiplicação (*), divisão (/), SAIR (s)");
	while(op != 's') {
		printf("\nDigite a operação: ");
		??_??("%c", &op);
		switch(op) {
			??_?? '+':
				printf(" Digite os operadores: ");
				??_??("%d %d", ??_??, ??_??);
				??_??("%d-%d=%d", ??_??, ??_??, ??_??(x, y));
				break;
			??_?? '-':
				??_??(" Digite os operadores: ");
				scanf("%d %d", ??_??, ??_??);
				??_??("%d-%d=%d", x, ??_??, ??_??(x, y));
				break;
			case ??_??:
				printf(" Digite os operadores: ");
				??_??("%d %d", ??_??, ??_??);
				??_??("%d-%d=%d", ??_??, ??_??, multiplica(??_??, y));
				??_??;
			??_?? ??_??:
				??_??(" Digite os operadores: ");
				??_??("%d %d", ??_??, ??_??);
				??_??(??_??, ??_??, ??_??, ??_??(??_??, ??_??));
				??_??;
			case 's': break;
			default:
				printf(" Operação desconhecida...");
		}
	}
	return ??_??;
}