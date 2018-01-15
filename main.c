#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int M;
// Tamanho da tabela (a ser definido durante a inicialização).

#define hash(v, M) (v % M)
// Transforma uma chave v em um índice no intervalo 0..M-1.

typedef struct {
   int       chave;
   string valor;
} tipoObjeto;

tipoObjeto objetonulo;
objetonulo.chave = 0;
// Todas as chaves "válidas" são estritamente positivas.

// A tabela tab[0..M-1] conterá todos os objetos.
tipoObjeto *tab;
// Inicializa uma tabela de símbolos que, espera-se, armazenará 
// no máximo max objetos. A tabela residirá no vetor tab[0..M-1]. 
//
void STinit(int max) 
{ 
   int h;
   M = 2 * max;
   tab = malloc(M * sizeof (tipoObjeto));
   for (h = 0; h < M; h++) 
      tab[h] = objetonulo; 
}

// A função insere obj na tabela de símbolos. Ela supõe
// que o número N de objetos na tabela de símbolos não é 
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

// Devolve um objeto cuja chave é v. Se tal objeto não existe,
// a função devolve um objeto fictício com chave nula. 
// A função supõe que o número de objetos na tabela de símbolos 
// não é maior que M.
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
