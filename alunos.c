#include <stdio.h>
#include <string.h>
#define MAX_ALUNOS 100 // Limite máximo de alunos
// Estrutura para representar um aluno
typedef struct {
int matricula;
char nome[100];
char codCurso[10];
char sexo; // M ou F
int anoNascimento;
} Aluno;
// Vetor de alunos e contador
Aluno alunos[MAX_ALUNOS];
int totalAlunos = 0;
// Função para incluir aluno
void incluirAluno() {
if (totalAlunos >= MAX_ALUNOS) {
printf("Capacidade máxima de alunos atingida!\n");
return;
}
Aluno novoAluno;
printf("Digite a matrícula: ");
scanf("%d", &novoAluno.matricula);
printf("Digite o nome do aluno: ");
scanf(" %[^\n]", novoAluno.nome);
printf("Digite o código do curso (SIS, ESI, etc.): ");
scanf(" %[^\n]", novoAluno.codCurso);
printf("Digite o sexo (M/F): ");
scanf(" %c", &novoAluno.sexo);
printf("Digite o ano de nascimento: ");
scanf("%d", &novoAluno.anoNascimento);
alunos[totalAlunos++] = novoAluno;
printf("Aluno cadastrado com sucesso!\n");
}
// Função para listar todos os alunos
void listarAlunos() {
if (totalAlunos == 0) {
printf("Nenhum aluno cadastrado.\n");
return;
}
for (int i = 0; i < totalAlunos; i++) {
printf("\nAluno %d:\n", i + 1);
printf("Matrícula: %d\n", alunos[i].matricula);
printf("Nome: %s\n", alunos[i].nome);
printf("Curso: %s\n", alunos[i].codCurso);
printf("Sexo: %c\n", alunos[i].sexo);
printf("Ano de nascimento: %d\n", alunos[i].anoNascimento);
}
}
// Função para modificar dados de um aluno
void modificarAluno() {
int matricula;
int encontrado = 0; // Flag para indicar se o aluno foi encontrado
printf("Digite a matrícula do aluno que deseja modificar: ");
scanf("%d", &matricula);
for (int i = 0; i < totalAlunos; i++) {
if (alunos[i].matricula == matricula) {
printf("Modificando dados do aluno '%s'\n", alunos[i].nome);
printf("Digite o novo nome: ");
scanf(" %[^\n]", alunos[i].nome);
printf("Digite o novo código do curso: ");
scanf(" %[^\n]", alunos[i].codCurso);
printf("Digite o novo sexo (M/F): ");
scanf(" %c", &alunos[i].sexo);
printf("Digite o novo ano de nascimento: ");
scanf("%d", &alunos[i].anoNascimento);
printf("Dados do aluno modificados com sucesso!\n");
encontrado = 1; // Marca que o aluno foi encontrado
return; // Sai da função após modificar
}
}
if (!encontrado) {
printf("Aluno com matrícula '%d' não encontrado.\n", matricula);
}
}
// Função para excluir um aluno
void excluirAluno() {
int matricula;
printf("Digite a matrícula do aluno que deseja excluir: ");
scanf("%d", &matricula);
// Procurar o aluno no vetor
int i, encontrado = 0;
for (i = 0; i < totalAlunos; i++) {
if (alunos[i].matricula == matricula) {
encontrado = 1; // Aluno encontrado
break;
}
}
if (!encontrado) {
printf("Aluno com matrícula '%d' não encontrado.\n", matricula);
return;
}
// Deslocar os elementos para "remover" o aluno
for (int j = i; j < totalAlunos - 1; j++) {
alunos[j] = alunos[j + 1];
}
totalAlunos--; // Atualiza o contador de alunos
printf("Aluno com matrícula '%d' excluído com sucesso!\n", matricula);
}
// Menu principal
void menu() {
int opcao;
do {
printf("\nMenu de Alunos\n");
printf("1. Incluir Aluno\n");
printf("2. Listar Alunos\n");
printf("3. Modificar Aluno\n");
printf("4. Excluir Aluno\n"); // Nova opção adicionada
printf("0. Sair\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);
switch (opcao) {
case 1:
incluirAluno();
break;
case 2:
listarAlunos();
break;
case 3:
modificarAluno();
break;
case 4:
excluirAluno();
break;
case 0:
printf("Encerrando o programa.\n");
break;
default:
printf("Opção inválida!\n");
}
} while (opcao != 0);
}
// Função principal
int main() {
menu();
return 0;
}