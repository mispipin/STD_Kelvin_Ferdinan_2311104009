#include <iostream>
#include <limits>
using namespace std;

struct Pohon {
  char data;
  Pohon *left, *right, *parent;
};

Pohon *root, *baru;

void init() {
  root = NULL;
}

bool isEmpty() {
  return root == NULL;
}

void buatNode(char data) {
  if(isEmpty()) {
    root = new Pohon{data, NULL, NULL, NULL};
    cout << "\nNode " << data << " berhasil dibuat menjadi root.\n";
  } else {
    cout << "\nPohon sudah dibuat.\n";
  }
}

Pohon *insertLeft(char data, Pohon *node) {
  if(isEmpty()) {
    cout << "\nBuat tree terlebih dahulu!\n";
    return NULL;
  }
  if(node->left != NULL) {
    cout << "\nNode " << node->data << " sudah ada child kiri!\n";
    return NULL;
  }
  baru = new Pohon{data, NULL, NULL, node};
  node->left = baru;
  cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data << endl;
  return baru;
}

Pohon *insertRight(char data, Pohon *node) {
  if(isEmpty()) {
    cout << "\nBuat tree terlebih dahulu!\n";
    return NULL;
  }
  if(node->right != NULL) {
    cout << "\nNode " << node->data << " sudah ada child kanan!\n";
    return NULL;
  }
  baru = new Pohon{data, NULL, NULL, node};
  node->right = baru;
  cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data << endl;
  return baru;
}

void update(char data, Pohon *node) {
  if(isEmpty()) {
    cout << "\nBuat tree terlebih dahulu!\n";
    return;
  }
  if(!node) {
    cout << "\nNode yang ingin diganti tidak ada!\n";
    return;
  }
  char temp = node->data;
  node->data = data;
  cout << "\nNode " << temp << " berhasil diubah menjadi " << data << endl;
}

void retrieve(Pohon *node) {
  if(isEmpty()) {
    cout << "\nBuat tree terlebih dahulu!\n";
    return;
  }
  if(!node) {
    cout << "\nNode yang ditunjuk tidak ada!\n";
    return;
  }
  cout << "\nData node: " << node->data << endl;
}

void find(Pohon *node) {
  if(isEmpty()) {
    cout << "\nBuat tree terlebih dahulu!\n";
    return;
  }
  if(!node) {
    cout << "\nNode yang ditunjuk tidak ada!\n";
    return;
  }
  cout << "\nData Node : " << node->data << endl;
  cout << "Root: " << root->data << endl;
  cout << "Parent: " << (node->parent ? node->parent->data : 'tidak punya parent') << endl;

  if(node->parent) {
    if(node->parent->left == node && node->parent->right)
      cout << "Sibling: " << node->parent->right->data << endl;
    else if(node->parent->right == node && node->parent->left)
      cout << "Sibling: " << node->parent->left->data << endl;
    else
      cout << "Sibling: (Tidak ada sibling)" << endl;
  }
}

void displayDescendants(Pohon *node) {
  if(!node) return;
  if(node->left) {
    cout << node->left->data << " ";
    displayDescendants(node->left);
  }
  if(node->right) {
    cout << node->right->data << " ";
    displayDescendants(node->right);
  }
}

bool is_valid_bst(Pohon *node, char min_val, char max_val) {
  if(!node) return true;
  if(node->data <= min_val || node->data >= max_val) return false;
  return is_valid_bst(node->left, min_val, node->data) && is_valid_bst(node->right, node->data, max_val);
}

int cari_simpul_daun(Pohon *node) {
  if(!node) return 0;
  if(!node->left && !node->right) return 1;
  return cari_simpul_daun(node->left) + cari_simpul_daun(node->right);
}

void menu() {
  char pilihan, data;
  while (true) {
    cout << "\nMenu:\n";
    cout << "1. Buat Node Root\n";
    cout << "2. Tambah Node Kiri\n";
    cout << "3. Tambah Node Kanan\n";
    cout << "4. Tampilkan Data Node\n";
    cout << "5. Update Node\n";
    cout << "6. Tampilkan Descendant Node\n";
    cout << "7. Periksa Validitas BST\n";
    cout << "8. Hitung Jumlah Simpul Daun\n";
    cout << "0. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;

    if (pilihan == '0') break;

    switch (pilihan) {
      case '1':
        cout << "Masukkan data root: ";
        cin >> data;
        buatNode(data);
        break;
      case '2':
        cout << "Masukkan data node kiri: ";
        cin >> data;
        cout << "Masukkan data node parent: ";
        cin >> pilihan;
        insertLeft(data, (pilihan == 'A') ? root : NULL); 
        break;
      case '3':
        cout << "Masukkan data node kanan: ";
        cin >> data;
        cout << "Masukkan data node parent: ";
        cin >> pilihan;
        insertRight(data, (pilihan == 'A') ? root : NULL); 
        break;
      case '4':
        cout << "Masukkan data node yang ingin ditampilkan: ";
        cin >> pilihan;
        retrieve((pilihan == 'A') ? root : NULL); 
        break;
      case '5':
        cout << "Masukkan data node yang ingin diupdate: ";
        cin >> pilihan;
        cout << "Masukkan data baru: ";
        cin >> data;
        update(data, (pilihan == 'A') ? root : NULL); 
        break;
      case '6':
        cout << "Masukkan data node untuk melihat descendant: ";
        cin >> pilihan;
        displayDescendants((pilihan == 'A') ? root : NULL); 
        break;
      case '7':
        if(is_valid_bst(root, numeric_limits<char>::min(), numeric_limits<char>::max())) {
          cout << "Pohon ini adalah BST yang valid.\n";
        } else {
          cout << "Pohon ini bukan BST yang valid.\n";
        }
        break;
      case '8':
        cout << "Jumlah simpul daun: " << cari_simpul_daun(root) << endl;
        break;
      default:
        cout << "Pilihan tidak valid!\n";
        break;
    }
  }
}

int main() {
  init();
  menu();
  return 0;
}