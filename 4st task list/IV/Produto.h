
typedef struct
{
    int cod;
    char nome;
    float preco;
    int estoque;
    int venda;
}Produto;

int CadastrarProduto( Produto produto );
int RemoverProduto( int cod );
int VenderProduto( int cod , int qtd_ );
int QtdProduto();
Produto ObterProduto( int indice );

