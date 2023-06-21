#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char usuario[20];
    char senha[20];
    char usuarioRegistrado[] = "user123";
    char senhaRegistrada[] = "123456";

    while (true)
    {
        printf("nome de usuario: ");
        gets(usuario);

        fflush(stdin);

        printf("senha: ");
        gets(senha);

        int validarUsuario = strcmp(usuario, usuarioRegistrado);
        int validarSenha = strcmp(senha, senhaRegistrada);

        if(validarUsuario == 0 && validarSenha == 0) {
            printf("acesso validado, seja bem-vindo \n");
            break;
        } else {
            printf("usuario ou senha invalidos \n");
        }
    }
    
    return 0;
}
