#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de c�digo para declara��o de classe dom�nio.
// Substituir Dominio por nome da classe.
// Substituir Tipo.

class Dominio {
    private:
        Tipo valor;                      // Atributo para armazenar valor.
        void validar(Tipo);              // Metodo para validar valor.
    public:
        void setValor(Tipo);             // Metodo para atribuir valor.
        Tipo getValor() const;           // Metodo para recuperar valor.
};

inline Tipo Dominio::getValor() const{
    return valor;
}

----------------------------------------------------------------------- */

// -----------------------------------------------------------------------
// Exemplo de declara��o de classe dom�nio e implementa��o de metodo.

class Nome {
private:
        string LIMITE = "teste";       // Declara��o para evitar n�meros m�gicos.
        string valor;
        static void validar(const string&);
public:
        void setValor(const string&);
        string getValor() const;
};

inline string Nome::getValor() const{
    return valor;
}

class Email {
private:
    string LIMITE = "thiago@gmail.com";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Email::getValor() const {
    return valor;
}

class Senha {
private:
    string LIMITE = "1234455";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Senha::getValor() const {
    return valor;
}

class Idioma {
private:
    string LIMITE = "1234455";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Idioma::getValor() const {
    return valor;
}
class Aniversario {
private:
    string LIMITE = "1234455";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Aniversario::getValor() const {
    return valor;
}
class Descricao {
private:
    string LIMITE = "1234455";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Descricao::getValor() const {
    return valor;
}
class Codigo {
private:
    string LIMITE = "12313";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Codigo::getValor() const {
    return valor;
}
class Pais {
private:
    string LIMITE = "12313";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Pais::getValor() const {
    return valor;
}

class City {
private:
    string LIMITE = "12313";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string City::getValor() const {
    return valor;
}

class Nota {
private:
    string LIMITE = "10";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Nota::getValor() const {
    return valor;
}

class Descricao_hosp {
private:
    string LIMITE = "12313";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Descricao_hosp::getValor() const {
    return valor;
}
class Codigo_ava {
private:
    string LIMITE = "12313";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Codigo_ava::getValor() const {
    return valor;
}
class Nota_ava {
private:
    string LIMITE = "12313";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Nota_ava::getValor() const {
    return valor;
}
class Descricao_ava {
private:
    string LIMITE = "12313";
    string valor;
    static void validar(const string&);
public:
    void setValor(const string&);
    string getValor() const;
};
inline string Descricao_ava::getValor() const {
    return valor;
}
#endif // DOMINIOS_H_INCLUDED
