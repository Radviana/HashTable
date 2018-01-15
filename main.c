#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int M;
// Tamanho da tabela (a ser definido durante a inicializa��o).

#define hash(v, M) (v % M)
// Transforma uma chave v em um �ndice no intervalo 0..M-1.

typedef struct {
   int       chave;
   string valor;
} tipoObjeto;

tipoObjeto objetonulo;
objetonulo.chave = 0;
// Todas as chaves "v�lidas" s�o estritamente positivas.

// A tabela tab[0..M-1] conter� todos os objetos.
tipoObjeto *tab;
// Inicializa uma tabela de s�mbolos que, espera-se, armazenar� 
// no m�ximo max objetos. A tabela residir� no vetor tab[0..M-1]. 
//
void STinit(int max) 
{ 
   int h;
   M = 2 * max;
   tab = malloc(M * sizeof (tipoObjeto));
   for (h = 0; h < M; h++) 
      tab[h] = objetonulo; 
}

// A fun��o insere obj na tabela de s�mbolos. Ela sup�e
// que o n�mero N de objetos na tabela de s�mbolos n�o � 
// maior que M (ou seja, que N <= M).
//
void STinsert(tipoObjeto obj) 
{ 
   int v = obj.chave;
   int h = hash(v, M);
   while (tab[h].chave != objetonulo.chave)
      h = (h + 1) % M;
   tab[h] = obj;
}

// Devolve um objeto cuja chave � v. Se tal objeto n�o existe,
// a fun��o devolve um objeto fict�cio com chave nula. 
// A fun��o sup�e que o n�mero de objetos na tabela de s�mbolos 
// n�o � maior que M.
//
tipoObjeto STsearch(int v) 
{ 
   int h = hash(v, M);
   while (tab[h].chave != objetonulo.chave) 
      if (tab[h].chave == v) return tab[h];
      else h = (h + 1) % M;
   return objetonulo;
}	
	return 0;
}
