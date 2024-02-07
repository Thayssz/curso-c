#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _livro{
    char titulo[100];
    unsigned int num_pag; //inteiro positivo
    float preco;
} Livro;

typedef struct _aluno{
    char nome[100];
    unsigned int idade;
    Livro *livro_fav; 
} Aluno;

Livro *create_livro(const char *titulo, unsigned int num_pag, float preco){
    Livro *livro = (Livro*)calloc(1, sizeof(Livro));

    strcpy(livro->titulo, titulo);
    livro->num_pag = num_pag;
    livro->preco = preco;

    return livro;
}

void print_livro(Livro *livro){
    printf("Titulo: %s\n", livro->titulo);
    printf("Numero de paginas: %d paginas\n", livro->num_pag);
    printf("Preco: %.2f reais\n\n", livro->preco);
}

void destroy_livro(Livro **livro_ref){
    free(*livro_ref);
    *livro_ref = NULL;
}

Livro *copy_livro(const Livro *livro){
    return create_livro(livro->titulo, livro->num_pag, livro->preco);
}

Aluno *create_aluno(const char *nome, int idade, const Livro *livro_fav){
    Aluno *aluno = (Aluno*)calloc(1, sizeof(Aluno));

    strcpy(aluno->nome, nome);
    aluno->idade = idade;
    aluno->livro_fav = copy_livro(livro_fav);

    return aluno;
}

void print_aluno(const Aluno *aluno){
    printf("Nome: %s\n", aluno->nome);
    printf("Idade: %d\n", aluno->idade);
    puts("Livro favorito:");
    puts("------");
    print_livro(aluno->livro_fav);
}

void destroy_aluno(Aluno **aluno_ref){
    Aluno *aluno = *aluno_ref;

    destroy_livro(&aluno->livro_fav);

    free(*aluno_ref);
    *aluno_ref = NULL;
}

int main(){
    Livro *livro_harry = create_livro("Harry Potter 1", 200, 30);

    Aluno *ted = create_aluno("Ted", 10, livro_harry);
    print_aluno(ted);

    destroy_livro(&livro_harry);
}