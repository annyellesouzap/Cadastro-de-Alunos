#include <stdio.h>
#include "aluno.h"

Aluno alunos[MAX_ALUNOS];
int totalAlunos = 0;

void incluirAluno() {
    if (totalAlunos >= MAX_ALUNOS) {
        printf("Capacidade máxima atingida!\n");
        return;
    }

    Aluno novo;

    printf("Matricula: ");
    scanf("%d", &novo.matricula);

    printf("Nome: ");
    scanf(" %[^\n]", novo.nome);

    printf("Curso: ");
    scanf(" %[^\n]", novo.codCurso);

    printf("Sexo: ");
    scanf(" %c", &novo.sexo);

    printf("Ano: ");
    scanf("%d", &novo.anoNascimento);

    alunos[totalAlunos++] = novo;

    printf("Aluno cadastrado!\n");
}

void listarAlunos() {
    if (totalAlunos == 0) {
        printf("Nenhum aluno.\n");
        return;
    }

    for (int i = 0; i < totalAlunos; i++) {
        printf("\n%s - %d\n", alunos[i].nome, alunos[i].matricula);
    }
}

void modificarAluno() {
    int matricula;
    printf("Matricula: ");
    scanf("%d", &matricula);

    for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].matricula == matricula) {

            printf("Novo nome: ");
            scanf(" %[^\n]", alunos[i].nome);

            printf("Atualizado!\n");
            return;
        }
    }

    printf("Não encontrado.\n");
}

void excluirAluno() {
    int matricula;
    printf("Matricula: ");
    scanf("%d", &matricula);

    for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].matricula == matricula) {

            for (int j = i; j < totalAlunos - 1; j++) {
                alunos[j] = alunos[j + 1];
            }

            totalAlunos--;
            printf("Removido!\n");
            return;
        }
    }

    printf("Não encontrado.\n");
}