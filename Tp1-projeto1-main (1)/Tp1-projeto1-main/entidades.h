#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;
class Usuario {
private:
    Nome      nome;
    Email     email;
    Senha     senha;
    Idioma    idioma;
    Aniversario       aniversario;
    Descricao descricao;
public:
    void setNome(const Nome&);
    Nome getNome() const;

    void setEmail(const Email&);
    Email getEmail() const;

    void setSenha(const Senha&);
    Senha getSenha() const;

    void setIdioma(const Idioma&);
    Idioma getIdioma() const;

    void setAniversario(const Aniversario&);
    Aniversario getAniversario() const;

    void setDescricao(const Descricao&);
    Descricao getDescricao() const;

};

inline void Usuario::setNome(const Nome& valor_criado){
    this->nome = valor_criado;
}

inline Nome Usuario::getNome() const {
    return nome;
}

inline void Usuario::setEmail(const Email& valor_criado){
    this->email = valor_criado;
}

inline Email Usuario::getEmail() const {
    return email;
}

inline void Usuario::setSenha(const Senha& valor_criado){
    this->senha = valor_criado;
}

inline Senha Usuario::getSenha() const {
    return senha;
}

inline void Usuario::setIdioma(const Idioma& valor_criado){
    this->idioma = valor_criado;
}

inline Idioma Usuario::getIdioma() const {
    return idioma;
}

inline void Usuario::setAniversario(const Aniversario& valor_criado) {
    this->aniversario = valor_criado;
}

inline Aniversario Usuario::getAniversario() const{
    return aniversario;
}

inline void Usuario::setDescricao(const Descricao& valor_criado){
    this->descricao = valor_criado;
}

inline Descricao Usuario::getDescricao() const {
    return descricao;
}


//HOSPEDAGEM
class Hospedagem{
private:
    Codigo codigo;
    Pais pais;
    City city;
    Nota nota;
    Descricao_hosp descricao_hosp;
public:
    void setCodigo(const Codigo&);
    Codigo getCodigo() const;
    void setPais(const Pais&);
    Pais getPais() const;
    void setCity(const City&);
    City getCity() const;
    void setNota(const Nota&);
    Nota getNota() const;
    void setDescricao_hosp(const Descricao_hosp&);
    Descricao_hosp getDescricao_hosp() const;

};

inline void Hospedagem::setCodigo(const Codigo& valor_criado){
    this->codigo = valor_criado;
}
inline Codigo Hospedagem::getCodigo() const{
    return codigo;
}
inline void Hospedagem::setPais(const Pais& valor_criado){
    this->pais = valor_criado;
}
inline Pais Hospedagem::getPais() const{
    return pais;
}
inline void Hospedagem::setCity(const  City& valor_criado){
    this->city = valor_criado;
}
inline City Hospedagem::getCity() const{
    return city;
}
inline void Hospedagem::setNota(const  Nota& valor_criado){
    this->nota = valor_criado;
}
inline Nota Hospedagem::getNota() const{
    return nota;
}

inline void Hospedagem::setDescricao_hosp(const  Descricao_hosp& valor_criado){
    this->descricao_hosp = valor_criado;
}
inline Descricao_hosp Hospedagem::getDescricao_hosp() const{
    return descricao_hosp;
}

class Avaliacao{
private:
    Codigo_ava codigo_ava;
    Nota_ava nota_ava;
    Descricao_ava descricao_ava;
public:
    void setCodigo_ava(const Codigo_ava&);
    Codigo_ava getCodigo_ava() const;
    void setNota_ava(const Nota_ava&);
    Nota_ava getNota_ava() const;
    void setDescricao_ava(const Descricao_ava&);
    Descricao_ava getDescricao_ava() const;
};

inline void Avaliacao::setCodigo_ava(const Codigo_ava& valor_criado){
    this->codigo_ava = valor_criado;
}
inline Codigo_ava Avaliacao::getCodigo_ava() const{
    return codigo_ava;
}
inline void Avaliacao::setNota_ava(const Nota_ava& valor_criado){
    this->nota_ava = valor_criado;
}
inline Nota_ava Avaliacao::getNota_ava() const{
    return nota_ava;
}
inline void Avaliacao::setDescricao_ava(const Descricao_ava& valor_criado){
    this->descricao_ava = valor_criado;
}
inline Descricao_ava Avaliacao::getDescricao_ava() const{
    return descricao_ava;
}
#endif // ENTIDADES_H_INCLUDED
