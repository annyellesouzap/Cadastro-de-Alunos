#ifndef ALUNO_H
#define ALUNO_H

#define MAX_ALUNOS 100

typedef struct {
    int matricula;
    char nome[100];
    char codCurso[10];
    char sexo;
    int anoNascimento;
} Aluno;

void incluirAluno();
void listarAlunos();
void modificarAluno();
void excluirAluno();

#endif