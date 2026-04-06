# 📘 Sistema de Gerenciamento de Alunos

## 📝 Descrição

Este projeto consiste em um sistema simples de gerenciamento de alunos desenvolvido em linguagem C.

O objetivo é permitir o cadastro, listagem, modificação e exclusão de alunos por meio de um menu interativo no terminal.

O sistema foi desenvolvido com foco em prática de:

* Estruturas (`struct`)
* Vetores
* Modularização em C
* Organização de código em múltiplos arquivos

---

## ⚙️ Tecnologias e Ferramentas Utilizadas

* Linguagem C
* Compilador GCC
* Terminal / Prompt de comando
* Git e GitHub

---

## 💻 Como Rodar o Projeto

### 🔹 Pré-requisitos

* Ter o GCC instalado (ou outro compilador C)

### 🔹 Passo a passo

```bash
# Clone o repositório
git clone https://github.com/annyellesouzap/Cadastro-de-Alunos.git

# Acesse a pasta
cd Cadastro-de-Alunos

# Compile o projeto
gcc main.c menu.c aluno.c -o programa

# Execute o programa
./programa
```

*(No Windows, use `programa.exe`)*

---

## 📂 Estrutura do Projeto

```
/projeto
 ├── main.c
 ├── menu.c
 ├── menu.h
 ├── aluno.c
 ├── aluno.h
```

---

## 👥 Colaboradores

| Nome   | GitHub                                   |
| ------ | ---------------------------------------- |
| Nome 1 | [@annyellesouzap](https://github.com/annyellesouzap) |
| Nome 2 | [@deisesan](https://github.com/deisesan) |

---

## 📌 Divisão de Responsabilidades

* 👩‍💻 **Annyelle**

  * Criação inicial do projeto
  * Implementação das funcionalidades principais em C
  * Organização e atualização do repositório
  * Evolução no uso do Git e GitHub (commits, push, repositórios)

* 👨‍💻 **Deise**

  * Modularização do código (separação em .c e .h)
  * Integração entre os módulos do sistema
  * Estruturação e organização do projeto
  * Criação de materiais de apoio (vídeos passo a passo)
  * Suporte técnico e acompanhamento do desenvolvimento
  * Definição de estratégia e divisão em etapas menores

* 📋 **Todos**

  * Definição de requisitos do sistema
  * Testes das funcionalidades
  * Identificação e correção de erros
  * Documentação do projeto (README)
  * Alinhamentos e reuniões de acompanhamento

---

## 📄 Licença

Este projeto está licenciado sob a licença MIT.
