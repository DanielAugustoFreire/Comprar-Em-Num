#include <stdio.h>
/*Uma loja de venda de produtos por reembolso postal vende cinco produtos diferentes cujos
preços de varejo são mostrados na tabela seguir:
Número do produto Preço de varejo
1   2,98
2   4.50
3   9.98
4   4.49
5   6.87

Escreva um programa que leia uma série de pares de números como se segue:

10 Número do produto
11 Quantidade vendida em um dia

Seu programa deve usar uma instrução switch para ajudar a determinar o preço de varejo de
cada produto. Seu programa deve calcu*/
main (){

    int n_produto, quantos, i=1, p1=0, p2=0,p3=0, p4=0, p5=0;
    float total_pagar=0, pa1=0, pa2=0, pa3=0, pa4=0, pa5=0;

    while(1){//16//12
        printf("(-1)Finalizar Compra\nNumero do produto\tpreco varejo\n\t1\t\t2.98\n\t2\t\t4.50\n\t3\t\t9.98\n\t4\t\t4.49\n\t5\t\t6.87");
        printf("\nnumero do produto a ser comprado:");
        scanf("%d", &n_produto);
        if (n_produto==-1) break;
        printf("Quantos produtos deseja comprar: ");
        scanf("%d", &quantos);
        switch(n_produto){
            case 1:
                p1+=quantos;
                pa1+=2.98*quantos;
            break;
            case 2:
                p2+=quantos;
                pa2+=4.50*quantos;
            break;
            case 3:
                p3+=quantos;
                pa3+=9.98*quantos;
            break;
            case 4:
                p4+=quantos;
                pa4+=4.49*quantos;
            break;
            case 5:
                p5+=quantos;
                pa5+=6.87*quantos;
            break;
            default: printf("Digite valido.");
        }
        printf("\n\n");
    }
    printf("\n\nVoce comprou:\nProduto 1:%5d unidades\t preco:%.2f\nProduto 2:%5d unidades\t preco:%.2f\nProduto 3:%5d unidades\t preco:%.2f\nProduto 4:%5d unidades\t preco:%.2f\nProduto 5:%5d unidades\t preco:%.2f\n\n", p1,pa1, p2, pa2,p3,pa3,p4,pa4,p5,pa5);

}
