#include "perpus.h"

void createRak(rakBuku &L) {
    L.Top = -1;
}

void insertBuku(rakBuku &L, infotype x) {
    if (L.Top < 1000) {
        L.Top++;
        L.info[L.Top] = x;
    } else {
        cout << "Rak buku penuh!" << endl;
    }
}

int SequentialSearchBukuIterasi(rakBuku L, string x) {
    for (int i = 0; i <= L.Top; i++) {
        if (L.info[i].judul == x) {
            return i;
        }
    }
    return -1;
}
