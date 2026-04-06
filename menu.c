#include <stdio.h>
#include "menu.h"
#include "aluno.h"

void menu() {
    int op;

    do {
        printf("\n1-Incluir\n2-Listar\n3-Modificar\n4-Excluir\n0-Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1: incluirAluno(); break;
            case 2: listarAlunos(); break;
            case 3: modificarAluno(); break;
            case 4: excluirAluno(); break;
        }

    } while (op != 0);
}