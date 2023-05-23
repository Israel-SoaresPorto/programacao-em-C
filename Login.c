#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char usuario[20];
    char senha[20];
    char usuarioRegistrado[] = "user123";
    char senhaRegistrada[] = "123456";
    bool acesso;

    while (acesso == 0)
    {
        printf("nome de usuario: ");
        scanf("%s", usuario);

        printf("senha: ");
        scanf("%s", senha);

        int validarUsuario = strcmp(usuario, usuarioRegistrado);
        int validarSenha = strcmp(senha, senhaRegistrada);

        if(validarUsuario == 0 && validarSenha == 0) {
            printf("acesso validado, seja bem-vindo \n");
            acesso = 1;
        } else {
            printf("usuario ou senha invalidos \n");
        }
    }
    
    return 0;
}
