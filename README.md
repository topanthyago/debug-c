# Debug-C
Macros que facilitam a depuração por mensagens (PrintDebug) de um código em C.

Alternando a macro DEBUG_C_ON no arquivo .h entre 1 e 0, podemos inserir ou não as mensagens que usamos durante a depuração.

Isso impede que mensagens eventualmente sensíveis estejam presentes no executável final.

### Para depurar
\#define DEBUG_C_ON 1
### Para não depurar
\#define DEBUG_C_ON 0

