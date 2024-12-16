namespace MathLib {
    struct Complex {
        double real; // Действительная часть
        double imag; // Мнимая часть
    };

    // Функция для сложения комплексных чисел
    Complex add(const Complex& a, const Complex& b);

    // Функция для вычитания комплексных чисел
    Complex subtract(const Complex& a, const Complex& b);

    // Функция для умножения комплексных чисел
    Complex multiply(const Complex& a, const Complex& b);

    // Функция для вычисления модуля комплексного числа
    double modulus(const Complex& a);
}