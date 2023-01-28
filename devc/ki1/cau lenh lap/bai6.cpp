#include <iostream>
using namespace std;


int main()
{
    float n, sum = 0;
    int dem = 0, demam = 0;
    cout << "Nhap n:";
    do
    {
        cin >> n;
        dem++;
        sum += n;
        if (n <= 0)
        {
            demam++;
        }
    } while (n != 0);
    cout << "So phan tu da nhap la " << dem++ << endl;
    cout << "Trung binh cong cac phan tu da nhap la " << sum / dem << endl;
    cout << "So phan tu am la " << demam;
}