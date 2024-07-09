template <class T>
class Par {
    private:
        T primeiro;
        T segundo;

    public:
        Par(T a, T b);
        T getPrimeiro();
        T getSegundo();
};

template <class T>
Par<T>::Par(T a, T b) {
    primeiro = a;
    segundo = b;
}

template <class T>
T Par<T>::getPrimeiro() {
    return primeiro;
}

template <class T>
T Par<T>::getSegundo() {
    return segundo;
}