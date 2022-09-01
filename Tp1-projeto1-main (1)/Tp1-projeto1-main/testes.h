// Diretivas de compila��o para controlar processo de inclus�o.

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

// Incluir cabe�alhos.
#include <string>
#include "dominios.h"
#include "entidades.h"

using namespace std;

// --------------------------------------------------------------------------
// Exemplo de declara��o de classe para teste de unidade de classe dom�nio.

class TUNome {
private:
    const std::string VALOR_VALIDO = "Thiago Calegario";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="mar   cos";   // Defini��o de constante para evitar n�mero m�gico.
    Nome *nome;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};

class TUEmail {
private:
    const std::string VALOR_VALIDO = "thiagocalegario@gmail.com";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="thiago3123s.com";   // Defini��o de constante para evitar n�mero m�gico.
    Email *email;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};

class TUSenha {
private:
    const std::string VALOR_VALIDO = "T!q5hc";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="thiago1";   // Defini��o de constante para evitar n�mero m�gico.
    Senha *senha;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};


class TUIdioma {
private:
    const std::string VALOR_VALIDO = "Ingles";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="Italiano";   // Defini��o de constante para evitar n�mero m�gico.
    Idioma *idioma;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};


class TUAniversario {
private:
    const std::string VALOR_VALIDO = "thiago";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="43/193";   // Defini��o de constante para evitar n�mero m�gico.
    Aniversario *aniversario;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};


class TUDescricao {
private:
    const std::string VALOR_VALIDO = "Este é um exemplo de descricao";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="taa      ta";   // Defini��o de constante para evitar n�mero m�gico.
    Descricao *descricao;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};

class TUCodigo {
private:
    const std::string VALOR_VALIDO = "79927398713";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="1234567890";   // Defini��o de constante para evitar n�mero m�gico.
    Codigo *codigo;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};
class TUPais {
private:
    const std::string VALOR_VALIDO = "Brazil";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="Chile";   // Defini��o de constante para evitar n�mero m�gico.
    Pais *pais;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};
class TUCity {
private:
    const std::string VALOR_VALIDO = "Toquio";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="Brasilia";   // Defini��o de constante para evitar n�mero m�gico.
    City *city;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};
class TUNota {
private:
    const std::string VALOR_VALIDO = "8";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="14";   // Defini��o de constante para evitar n�mero m�gico.
    Nota *nota;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};

class TUDescricao_hosp {
private:
    const std::string VALOR_VALIDO = "Este é um exemplo de descricao";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="Nao siua    descricao";   // Defini��o de constante para evitar n�mero m�gico.
    Descricao_hosp *descricao_hosp;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};
class TUCodigo_ava {
private:
    const std::string VALOR_VALIDO = "79927398713";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="1234567890";   // Defini��o de constante para evitar n�mero m�gico.
    Codigo_ava *codigo_ava;                        // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};
class TUNota_ava {
private:
    const std::string VALOR_VALIDO = "10";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="99";   // Defini��o de constante para evitar n�mero m�gico.
    Nota_ava *nota_ava;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};
class TUDescricao_ava {
private:
    const std::string VALOR_VALIDO = "Este é um exemplo de descricao";
    //const static string VALOR_VALIDO = nome1;   // Defini��o de constante para evitar n�mero m�gico.
    const std::string VALOR_INVALIDO  ="asdad      assss";   // Defini��o de constante para evitar n�mero m�gico.
    Descricao_ava *descricao_ava;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};


// --------------------------------------------------------------------------
// Exemplo de declara��o de classe para teste de unidade de classe entidade.

class TUUsuario {
private:
    const std::string VALOR_VALIDO   = "thiago";   // Defini��o de constante para evitar n�mero m�gico.
    Usuario *usuario;                       // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};

class TUHospedagem {
private:
    const std::string VALOR_VALIDO   = "thiago";   // Defini��o de constante para evitar n�mero m�gico.
    Hospedagem *hospedagem;                       // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};
class TUAvaliacao {
private:
    const std::string VALOR_VALIDO   = "thiago";   // Defini��o de constante para evitar n�mero m�gico.
    Avaliacao *avaliacao;                       // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em teste.
    void tearDown();                        // Metodo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // Metodo para executar teste.
};

#endif // TESTES_H_INCLUDED
