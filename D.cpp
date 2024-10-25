#include <iostream>

class D {
    private:
        int D1;
        float D2;
    public:
        D(int D1, float D2);
        ~D();
        void MD1();
        void MD2();
<<<<<<< HEAD
        void MD3();
=======
        void MD4();
>>>>>>> a68d0f42f53ecb321854b2824f14ab850612532b
};

D::D(int D1, float D2){
    this->D1 = D1;
    this->D2 = D2;
}

void D::MD1(){
    std::cout << "MD1\n";
}

void D::MD2(){
    std::cout << "MD2\n";
}

<<<<<<< HEAD
void D::MD3(){
    std::cout << "MD3\n";
}
=======
void D::MD4(){
    std::cout << "MD4\n";
}
>>>>>>> a68d0f42f53ecb321854b2824f14ab850612532b
