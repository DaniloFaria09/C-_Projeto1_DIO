#include <iostream>
#include <string>

class ContaBancaria {
protected:
    double saldo;
    std::string tipoConta;

public:
    ContaBancaria(double saldoInicial, const std::string& tipo) : saldo(saldoInicial), tipoConta(tipo) {}

    virtual void sacar(double valor) {
        if (valor > saldo) {
            std::cout << "Saldo insuficiente na conta " << tipoConta << "!\n";
        } else {
            saldo -= valor;
            std::cout << "Saque realizado com sucesso na conta " << tipoConta << ". Saldo atual: " << saldo << "\n";
        }
    }

    virtual double getSaldo() const {
        return saldo;
    }

    virtual std::string getTipoConta() const {
        return tipoConta;
    }
};

class ContaCorrente : public ContaBancaria {
public:
    ContaCorrente(double saldoInicial) : ContaBancaria(saldoInicial, "Corrente") {}
};

class ContaPoupanca : public ContaBancaria {
public:
    ContaPoupanca(double saldoInicial) : ContaBancaria(saldoInicial, "Poupança") {}
};

class ContaSalario : public ContaBancaria {
public:
    ContaSalario(double saldoInicial) : ContaBancaria(saldoInicial, "Salário") {}
};
