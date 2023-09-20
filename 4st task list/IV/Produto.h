
typedef struct
{
    int cod;
    char nome;
    float preco;
    int estoque;
    int venda;
}Produto;

Produto produto;

int CadastrarProduto();
int RemoverProduto();
int VenderProduto();

