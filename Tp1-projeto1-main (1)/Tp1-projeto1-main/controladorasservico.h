#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "database.h"

//--------------------------------------------------------------------------------------------
// Declaracoes de classes controladoras de servico.

class CntrServicoAutenticacao : public IServicoAutenticacao
{
public:
    // abstract service method of autentication
    bool autenticar(Email, Senha);
};

//--------------------------------------------------------------------------------------------

class CntrServicoUsuario : public IServicoUsuario
{
public:
    // abstract services methods of Users
    bool cadastrarUsuario(Usuario);
    bool editarUsuario(Usuario);
    bool descadastrarUsuario(Email);

    //Usuario recuperarUsuario(Email);
};

class CntrServicoHospedagem : public IServicoHospedagem
{
public:
    // abstract service methods of Excursion
    int getNextId();
    bool cadastrarHospedagem(Hospedagem, Email);
    bool descadastrarHospedagem(Codigo, Email);
    bool editarHospedagem(Hospedagem, Email);
    // Hospedagem recuperarHospedagem(Codigo);
    // list<Hospedagens> listarHospedagens();

    // abstract service methods of Avaliation
    list<int> getNotasAvaliacao();
    bool cadastrarAvaliacao(Avaliacao, Email, Codigo);
    //bool descadastrarAvaliacao(Codigo, Email);
    //bool editarAvaliacao(Avaliacao, Email);
    // Avaliacao recuperarAvaliacao(Codigo, Email);
    // list<Avaliacao> listarAvaliacoes();
    // list<Avaliacao> listarAvaliacoes(Hospedagem, Email);
    // list<Avaliacao> listarAvaliacoes(Usuario, Email);
};


#endif