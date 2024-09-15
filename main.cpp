int main() {
    ContaCorrente cc(1000);
    ContaPoupanca cp(500);
    ContaSalario cs(1200);

    cc.sacar(200);  // Saque bem-sucedido
    cp.sacar(600);  // Saldo insuficiente (capturado pelo aspecto)
    cs.sacar(100);  // Saque bem-sucedido

    return 0;
}
