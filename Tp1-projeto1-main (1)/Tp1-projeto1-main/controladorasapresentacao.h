#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

#include <conio.h>
#include <iostream>
#include <string.h>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"

#define CLR_SCR system("cls");

//--------------------------------------------------------------------------------------------
// Declaracoes de classes controladoras e implementacoes de metodos.

class CntrApresentacaoControle{
    private:
        Email email;
        IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoUsuario *cntrApresentacaoUsuario;
        IApresentacaoHospedagem *cntrApresentacaoHospedagem;
        IApresentacaoAvaliacao *cntrApresentacaoAvaliacao;
    public:
        void executar();
        void executar(Email);
        void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrApresentacaoUsuario(IApresentacaoUsuario*);
        void setCntrApresentacaoHospedagem(IApresentacaoHospedagem*);
        void setCntrApresentacaoAvaliacao(IApresentacaoAvaliacao *);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntrApresentacaoAutenticacao)
{
    this->cntrApresentacaoAutenticacao = cntrApresentacaoAutenticacao;
}

inline void CntrApresentacaoControle::setCntrApresentacaoUsuario(IApresentacaoUsuario *cntrApresentacaoUsuario)
{
    this->cntrApresentacaoUsuario = cntrApresentacaoUsuario;
}

inline void CntrApresentacaoControle::setCntrApresentacaoHospedagem(IApresentacaoHospedagem *cntrApresentacaoHospedagem)
{
    this->cntrApresentacaoHospedagem = cntrApresentacaoHospedagem;
}

inline void CntrApresentacaoControle::setCntrApresentacaoAvaliacao(IApresentacaoAvaliacao *cntrApresentacaoAvaliacao)
{
    this->cntrApresentacaoAvaliacao = cntrApresentacaoAvaliacao;
}

//--------------------------------------------------------------------------------------------
//Controle de Autenticacao

class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
    private:
        IServicoAutenticacao *cntr;
    public:
        bool autenticar(Email*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
}

//--------------------------------------------------------------------------------------------
//Controle de Usuario

class CntrApresentacaoUsuario : public IApresentacaoUsuario
{
private:
    IServicoUsuario *cntrServicoUsuario;
    void consultarDadosUsuario();
    void editarUsuario();
    bool descadastrar();

public:
    void executar(Email);
    void cadastrar();
    void setCntrServicoUsuario(IServicoUsuario *);
};

inline void CntrApresentacaoUsuario::setCntrServicoUsuario(IServicoUsuario *cntrServicoUsuario)
{
    this->cntrServicoUsuario = cntrServicoUsuario;
}

//--------------------------------------------------------------------------------------------
//Controle Hospedagem

class CntrApresentacaoHospedagem : public IApresentacaoHospedagem
{
private:
    IServicoHospedagem *cntrServicoHospedagem;
    void consultarHospedagem(Email);
    void cadastrarHospedagem(Email);
    void editarHospedagem(Email);
    void descadastrarHospedagem(Email);
    void listarHospedagens(Email);
    void listarHospedagens();

public:
    void executar();
    void executar(Email);
    void setCntrServicoHospedagem(IServicoHospedagem *);
};

inline void CntrApresentacaoHospedagem::setCntrServicoHospedagem(IServicoHospedagem *cntrServicoHospedagem)
{
    this->cntrServicoHospedagem = cntrServicoHospedagem;
}

//--------------------------------------------------------------------------------------------
//Controle Avaliacao

class CntrApresentacaoAvaliacao : public IApresentacaoAvaliacao
{
private:
    IServicoHospedagem *cntrServicoHospedagem;
    void consultarAvaliacao(Email);
    void cadastrarAvaliacao(Email);
    void editarAvaliacao(Email);
    void descadastrarAvaliacao(Email);
    void listarAvaliacoes(Email);
    void listarAvaliacoes();

public:
    void executar();
    void executar(Email);
    void setCntrServicoHospedagem(IServicoHospedagem *);
};

inline void CntrApresentacaoAvaliacao::setCntrServicoHospedagem(IServicoHospedagem *cntrServicoHospedagem)
{
    this->cntrServicoHospedagem = cntrServicoHospedagem;
}

//--------------------------------------------------------------------------------------------


#endif