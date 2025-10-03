#include <iostream>

using namespace std;

class nparr {
    private:
        int arr[10];
    public:
        nparr() {
            for(int i = 0; i < 10; i++) {
                cin >> arr[i];
            }
        }
        void arrprint(nparr a) {
            cout << "[";
            for (int i = 0; i < 9; i++) {
                cout << a.arr[i] << ", ";
            }
            cout << a.arr[9] << "]" << endl;;
        }
        void add(nparr a, nparr b) {
            for (int i = 0; i < 10; i++) {
                a.arr[i] += b.arr[i];
            }
            cout << "n1 + n2 = ";
            arrprint(a);
        }
        void add(nparr a, int b) {
            for (int i = 0; i < 10; i++) {
                a.arr[i] += b;
            }
            cout << "n1 + " << b << " = ";
            arrprint(a);
        }
};

int main() {
    int s;
    cin >> s;       // This is not necessary because question already limits the size of the array so taking the size as input sode not make scense.
    nparr arr1, arr2;
    int a;
    cin >> a;
    arr1.add(arr1, arr2);
    arr1.add(arr1, a);
    return 0;
}