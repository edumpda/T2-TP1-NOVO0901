#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include <list>
#include "dominios.h"
#include "entidades.h"
//#include "comandos.h"
//#include <stdexcept>

//using namespace std;

// Declara��es adiantadas.

class IServicoAutenticacao;
class IServicoUsuario;
class IServicoHospedagem;
class IServicoAvaliacao;

// Declara��es de servi�os na camada de apresenta��o
// -----------------------------------------------------------------

// Declara��o de interface para servi�o de autentica��o na camada de apresenta��o.

class IApresentacaoAutenticacao {
public:
    virtual bool autenticar(Email *) = 0;
    virtual void setCntrServicoAutenticacao(IServicoAutenticacao *) = 0;
    virtual ~IApresentacaoAutenticacao() {}
};

// Declara��o de interface para servi�o de usuario na camada de apresenta��o.

class IApresentacaoUsuario
{
public:
    virtual void executar(Email) = 0;
    virtual void cadastrar() = 0;
    virtual void setCntrServicoUsuario(IServicoUsuario *) = 0;
    virtual ~IApresentacaoUsuario() {}
};

// Declara��o de interface para servi�o de hospedagem na camada de apresenta��o.

class IApresentacaoHospedagem
{
public:
    virtual void executar() = 0;
    virtual void executar(Email) = 0;
    virtual void setCntrServicoHospedagem(IServicoHospedagem *) = 0;
    virtual ~IApresentacaoHospedagem() {}
};

// Declara��o de interface para servi�o de avaliacao na camada de apresenta��o.

class IApresentacaoAvaliacao
{
public:
    virtual void executar() = 0;
    virtual void executar(Email) = 0;
    virtual void setCntrServicoHospedagem(IServicoHospedagem *) = 0;
    virtual ~IApresentacaoAvaliacao() {}
};

// Declara��es de servi�os na camada de neg�cio
// ------------------------------------------------------------------

// Declara��o de interface para o servi�o de autentica��o na camada de neg�cio.

class IServicoAutenticacao
{
public:
    virtual bool autenticar(Email, Senha) = 0;
    virtual ~IServicoAutenticacao() {}
};

// Declara��o de interface para o servi�o de usuario na camada de neg�cio.

class IServicoUsuario
{
public:
    virtual bool cadastrarUsuario(Usuario) = 0;
    virtual bool editarUsuario(Usuario) = 0;
    virtual bool descadastrarUsuario(Email) = 0;
    virtual ~IServicoUsuario() {}
};

// Declara��o de interface para o servi�o de hospedagem na camada de neg�cio.

class IServicoHospedagem
{
public:
    // abstract service methods of Hosp
    virtual bool cadastrarHospedagem(Hospedagem, Email) = 0;
    virtual bool descadastrarHospedagem(Codigo, Email) = 0;
    virtual bool editarHospedagem(Hospedagem, Email) = 0;

    // abstract service methods of Avaliation
    virtual bool cadastrarAvaliacao(Avaliacao, Email, Codigo) = 0;
    virtual bool descadastrarAvaliacao(Codigo) = 0;
    virtual bool editarAvaliacao(Avaliacao, Email) = 0;

    virtual ~IServicoHospedagem() {}
};

#endif // INTERFACES_H_INCLUDED
