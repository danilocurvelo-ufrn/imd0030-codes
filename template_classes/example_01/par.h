template <class T>
class Par {
    private:
        T primeiro;
        T segundo;
    public:
        Par(T a, T b);          // Construtor parametrizado
        T getPrimeiro();        // Retorna o primeiro elemento
        T getSegundo();         // Retorna o segundo elemento
        void setPrimeiro(T v);  // Modifica o primeiro elemento
        void setSegundo(T v);   // Modifica o segundo elemento
};
