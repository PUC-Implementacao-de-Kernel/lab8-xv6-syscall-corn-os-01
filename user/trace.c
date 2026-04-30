#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int mask;

  if(argc < 3){
    fprintf(2, "uso: trace mask comando [args...]\n");
    exit(1);
  }

  mask = atoi(argv[1]);
  (void)mask;  // Remova esta linha quando usar mask no TODO 1.

  /* TODO 1: chame trace(mask).
   * Se a chamada retornar valor negativo, imprima uma mensagem de erro
   * em stderr e finalize com exit(1).
   */

  /* TODO 2: execute o comando recebido em argv[2].
   * Dica: exec deve receber o nome do programa e o vetor de argumentos
   * iniciando no proprio argv[2].
   */

  fprintf(2, "trace: exec %s falhou\n", argv[2]);
  exit(1);
}
