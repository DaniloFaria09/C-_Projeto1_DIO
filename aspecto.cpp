aspect VerificarSaldo {
    pointcut saqueConta(ContaBancaria& conta, double valor) = call("void ContaBancaria::sacar(double)") && args(valor) && target(conta);

    advice saqueConta(ContaBancaria& conta, double valor) : before() {
        if (valor > conta.getSaldo()) {
            std::cout << "[Aspect] Saldo insuficiente na conta " << conta.getTipoConta() << "!\n";
        }
    }
};
