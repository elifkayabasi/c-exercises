#include <stdio.h>
#include <string.h>

#define MAX 10 // Maksimum rehber kapasitesi

// Telefon rehberi için diziler
char adlar[MAX][50];
char soyadlar[MAX][50];
char telefonlar[MAX][15];
int kayit_sayisi = 0; // Mevcut kayıt sayısı

// Kayıt ekleme fonksiyonu
void ekle() {
    if (kayit_sayisi < MAX) {
        printf("Ad: ");
        scanf("%s", adlar[kayit_sayisi]);
        printf("Soyad: ");
        scanf("%s", soyadlar[kayit_sayisi]);
        printf("Telefon: ");
        scanf("%s", telefonlar[kayit_sayisi]);
        kayit_sayisi++;
        printf("Kayıt başarıyla eklendi.\n");
    } else {
        printf("Rehber dolu! Yeni kayıt eklenemez.\n");
    }
}

// Kayıt silme fonksiyonu
void sil() {
    int index;
    printf("Silmek istediğiniz kayıt numarası (0-%d): ", kayit_sayisi - 1);
    scanf("%d", &index);

    if (index >= 0 && index < kayit_sayisi) {
        for (int i = index; i < kayit_sayisi - 1; i++) {
            strcpy(adlar[i], adlar[i + 1]);
            strcpy(soyadlar[i], soyadlar[i + 1]);
            strcpy(telefonlar[i], telefonlar[i + 1]);
        }
        kayit_sayisi--;
        printf("Kayıt başarıyla silindi.\n");
    } else {
        printf("Geçersiz kayıt numarası!\n");
    }
}

// Kayıt güncelleme fonksiyonu
void guncelle() {
    int index;
    printf("Güncellemek istediğiniz kayıt numarası (0-%d): ", kayit_sayisi - 1);
    scanf("%d", &index);

    if (index >= 0 && index < kayit_sayisi) {
        printf("Yeni Ad: ");
        scanf("%s", adlar[index]);
        printf("Yeni Soyad: ");
        scanf("%s", soyadlar[index]);
        printf("Yeni Telefon: ");
        scanf("%s", telefonlar[index]);
        printf("Kayıt başarıyla güncellendi.\n");
    } else {
        printf("Geçersiz kayıt numarası!\n");
    }
}

// Kayıtları alfabetik sıraya göre sıralama fonksiyonu (Ada göre)
void sirala() {
    for (int i = 0; i < kayit_sayisi - 1; i++) {
        for (int j = 0; j < kayit_sayisi - i - 1; j++) {
            if (strcmp(adlar[j], adlar[j + 1]) > 0) {
                // Adları değiştirme
                char temp[50];
                strcpy(temp, adlar[j]);
                strcpy(adlar[j], adlar[j + 1]);
                strcpy(adlar[j + 1], temp);

                // Soyadları değiştirme
                strcpy(temp, soyadlar[j]);
                strcpy(soyadlar[j], soyadlar[j + 1]);
                strcpy(soyadlar[j + 1], temp);

                // Telefonları değiştirme
                strcpy(temp, telefonlar[j]);
                strcpy(telefonlar[j], telefonlar[j + 1]);
                strcpy(telefonlar[j + 1], temp);
            }
        }
    }
    printf("Rehber başarıyla sıralandı.\n");
}

// Kayıtları gösterme fonksiyonu
void goster() {
    printf("\nTelefon Rehberi:\n");
    for (int i = 0; i < kayit_sayisi; i++) {
        printf("%d: %s %s - %s\n", i, adlar[i], soyadlar[i], telefonlar[i]);
    }
}

// Ana menü
void menu() {
    int secim;
    do {
        printf("\nTelefon Rehberi Uygulaması\n");
        printf("1. Kayıt Ekle\n");
        printf("2. Kayıt Sil\n");
        printf("3. Kayıt Güncelle\n");
        printf("4. Kayıtları Göster\n");
        printf("5. Kayıtları Sırala\n");
        printf("0. Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                ekle();
                break;
            case 2:
                sil();
                break;
            case 3:
                guncelle();
                break;
            case 4:
                goster();
                break;
            case 5:
                sirala();
                break;
            case 0:
                printf("Programdan çıkılıyor.\n");
                break;
            default:
                printf("Geçersiz seçim! Tekrar deneyin.\n");
        }
    } while (secim != 0);
}

// Ana fonksiyon
int main() {
    menu();
    return 0;
}
