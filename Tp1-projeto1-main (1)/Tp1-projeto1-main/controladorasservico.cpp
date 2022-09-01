#include "controladorasservico.h"
#include <iostream>
#include <iterator>

using namespace std;

//--------------------------------------------------------------------------------------
//|                                       Usuario                                      |
//--------------------------------------------------------------------------------------

bool CntrServicoAutenticacao::autenticar(Email email, Senha senha)
{
  // Armazena os dados em servidor ou lista

  ComandoSenha passwd(email);

  try
  {
    passwd.executar();

    string resultado;
    resultado = passwd.getResultado();

    if (resultado == senha.getValor())
    {
      return true;
    }
    return false;
  }

  catch (EErroPersistencia)
  {
    return false;
  }
}

bool CntrServicoUsuario::cadastrarUsuario(Usuario usuario)
{
  ComandoCadastrarUsuario registerUser(usuario);

  try
  {
    registerUser.executar();
    return true;
  }

  catch (EErroPersistencia)
  {
    return false;
  }
}

bool CntrServicoUsuario::editarUsuario(Usuario usuario)
{
  ComandoEditarUsuario editingUser(usuario);

  try
  {
    editingUser.executar();
    return true;
  }

  catch (EErroPersistencia)
  {
    return false;
  }
}

bool CntrServicoUsuario::descadastrarUsuario(Email email) {
  // Armazena os dados em servidor ou lista
  ComandoDescadastrarUsuario deleteUser(email);

  try {
    deleteUser.executar();
    return true;
  }

  catch (EErroPersistencia)
  {
    return false;
  }
}

//--------------------------------------------------------------------------------------
//|                                     Hospedagem                                     |
//--------------------------------------------------------------------------------------

bool CntrServicoHospedagem::cadastrarHospedagem(Hospedagem hospedagem, Email email)
{

  NextIdHospedagem nextIdHospedagem;
  nextIdHospedagem.executar();
  int result;
  result = nextIdHospedagem.getResultado();
  Codigo codigo;

  ComandoCadastrarHospedagem registerHospedagem(hospedagem, email, codigo);
  try
  {
    registerHospedagem.executar();
    return true;
  }

  catch (EErroPersistencia)
  {
    return false;
  }
}

bool CntrServicoHospedagem::editarHospedagem(Hospedagem hospedagem, Email email)
{

  ComandoEditarHospedagem editingHospedagem(hospedagem, email);
  try
  {
    editingHospedagem.executar();
    return true;
  }

  catch (EErroPersistencia)
  {
    return false;
  }
}

bool CntrServicoHospedagem::descadastrarHospedagem(Codigo codigo, Email email)
{
  ComandoDescadastrarHospedagem deregisterHospedagem(codigo, email);

  try
  {
    deregisterHospedagem.executar();
    return true;
  }
  catch (EErroPersistencia)
  {
    return false;
  }
}
//--------------------------------------------------------------------------------------
//|                                 Avaliação                                          |
//--------------------------------------------------------------------------------------

bool CntrServicoHospedagem::cadastrarAvaliacao(Avaliacao avaliacao, Email email, Codigo codigo)
{
  GetNotasAvaliacao getnotas;

  ComandoCadastrarAvaliacao registerAvaliacao(avaliacao, email, codigo);
  try
  {

    getnotas.executar();
    list<string> notas = getnotas.getResultado();
    int soma = 0;
    int contador = 0;
    for (auto it = begin(notas); it != end(notas); ++it)
    {
      // soma += *it;
      // contador++;
    }

    registerAvaliacao.executar();
    return true;
  }

  catch (EErroPersistencia)
  {
    return false;
  }
}