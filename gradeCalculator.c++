#include <stdio.h>

int main() {
    float vize, final, ortalama;

    // Kullanıcıdan vize ve final notlarını al
    printf("Vize notunu giriniz: ");
    scanf("%f", &vize);

    printf("Final notunu giriniz: ");
    scanf("%f", &final);

    // Başarı ortalamasını hesapla
    ortalama = (vize * 0.4) + (final * 0.6);

    // Harf notunu belirle ve ekrana yazdır
    printf("Ortalama: %.2f\n", ortalama);
    printf("Harf Notu: ");

    if (ortalama < 50) {
        printf("F\n");
    } else if (ortalama < 60) {
        printf("D\n");
    } else if (ortalama < 70) {
        printf("C\n");
    } else if (ortalama < 80) {
        printf("B\n");
    } else {
        printf("A\n");
    }

    return 0;
}
