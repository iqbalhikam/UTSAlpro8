#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;

int main()
{
    // DATA MAHASISWA START
    string nama = "m iqbal fatkhul hikam";
    string kelas = "FI23B";
    string fakultas = "Informatika";
    string prodi = "Teknik Informatika";
    int NIM = 2023310004;
    // DATA MAHASISWA END

    // OUTPUT DATA MAHASISWA START
    cout << "=================================" << endl;
    cout << "nama      : " << nama << endl;
    cout << "kelas     : " << kelas << endl;
    cout << "fakultas  : " << fakultas << endl;
    cout << "prodi     : " << prodi << endl;
    cout << "NIM       : " << NIM << endl;
    cout << "=================================\n\n\n"
         << endl;
// OUTPUT DATA MAHASISWA

// OUTPUT AWAN LONGIN USER START
masuk:
    char ch, jwb;
    system("cls");
    for (int i = 1; i < 3; i++)
    {
        string user = "";
        string pass = "";

        cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n";
        cout << "******************************************************\n";
        cout << "          | LOGIN APLIKASI MENU WRUNG MPO |\n";
        cout << "******************************************************\n";
        cout << "          USERNAME : ";
        cin >> user;
        cout << "          PASSWORD : ";
        ch = _getch();
        while (ch != 13)
        {
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
        }
        system("cls");
        if (user == "user" && pass == "123")
        {
            goto home;
        }
        else
        {
            cout << "\n\n\t\t  -+-+-+--+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
            cout << "\n\t\t                     Username/Password yang anda masukkan salah";
            cout << "\n\t\t                           silahkan coba kembali [y/t] : ";
            cin >> jwb;
            if (jwb == 'y' || jwb == 'y')
            {
                goto masuk;
            }
            else if (jwb == 't' || jwb == 't')
            {
                return 0;
            }
            else
            {
                return 0;
            }
        }
    }
    // OUTPUT AWAN LONGIN USER END

    // DATA PROGRAM DI BAWAH START
home:
    string np;
    string tujuan;
    string kode;
    string hadiah;
    int mp;
    float harga;
    float kembali = 0;
    float jumlah = 0;
    float th = 0;
    float tb = 0;
    float pembayaran;
    // DATA PROGRAM DI BAWAH END

    // PERINTAH INPUTAN USER START
    // OUTPUT KETENTUAN TUJUAN SESUAI KODE START
    cout << "================================================================================" << endl;
    cout << " \t\tKode "
         << "\t\t|\t\tTujuan" << endl;
    cout << "================================================================================" << endl;
    cout << " R "
         << "\t\t\t\t|\t\t SBY \n\t\t\t\t------------------------------------------------\n\t\t\t\t|\t\t MLG" << endl;
    cout << "================================================================================" << endl;
    cout << " S "
         << "\t\t\t\t|\t\t SLO \n\t\t\t\t------------------------------------------------\n\t\t\t\t|\t\t TGL" << endl;
    cout << "================================================================================" << endl;
    cout << " H "
         << "\t\t\t\t|\t\t LMP \n\t\t\t\t------------------------------------------------\n\t\t\t\t|\t\t JGY" << endl;
    cout << "================================================================================\n"
         << endl;
    // OUTPUT KETENTUAN TUJUAN SESUAI KODE END

    // LOOPING SAMPAI USER INPUTKAN NAMA START
    do
    {
        cout << "Masukkan nama penumpang   : ";
        getline(cin, np);
    } while (np.empty());
    // LOOPING SAMPAI USER INPUTKAN NAMA END

    // LOOPING SAMPAI KODE SESUAI KETENTUAN START
    do
    {
        cout << "Masukkan kode bus (R S H) : ";
        cin >> kode;
    } while (kode != "R" && kode != "r" && kode != "S" && kode != "s" && kode != "H" && kode != "h"); // Lanjutkan loop sampai kode yang valid dimasukkan
    // LOOPING SAMPAI KODE SESUAI KETENTUAN END

    // LOOPING SAMPAI TUJUAN SESUAI KODE YANG DI TENTUKAN START
    do
    {
        cout << "Masukkan tujuan           : ";
        cin >> tujuan;
    } while (tujuan != "SBY" && tujuan != "sby" && tujuan != "MLG" && tujuan != "mlg" && tujuan != "SLO" && tujuan != "slo" && tujuan != "TGL" && tujuan != "tgl" && tujuan != "LMP" && tujuan != "lmp" && tujuan != "JGY" && tujuan != "jgy");
    system("cls");
    // LOOPING SAMPAI TUJUAN SESUAI KODE YANG DI TENTUKAN END
    // PERINTAH INPUTAN USER END

    // PERCABANGAN IF ELSE KODE DAN TUJUAN UNTUK MENETUKAN HARGA START
    if (kode == "R" || kode == "r")
    {
        if (tujuan == "SBY" || tujuan == "sby")
        {
            harga = 300;
        }
        else if (tujuan == "MLG" || tujuan == "mlg")
        {
            harga = 400;
        }
    }
    else if (kode == "S" || kode == "s")
    {

        if (tujuan == "SLO" || tujuan == "slo")
        {
            harga = 200;
        }
        else if (tujuan == "TGL" || tujuan == "tgl")
        {
            harga = 250;
        }
    }
    else if (kode == "H" || kode == "h")
    {
        if (tujuan == "LMP" || tujuan == "lmp")
        {
            harga = 350;
        }
        else if (tujuan == "JGY" || tujuan == "jgy")
        {
            harga = 400;
        }
    }
    else
    {
        cout << "anda memasukkan data yang tidak valid"
             << endl;
    }
    // PERCABANGAN IF ELSE KODE DAN TUJUAN UNTUK MENETUKAN HARGA END

    // OUTPUT AGENDA BUS PERJALANAN START
    cout << "================================================================================" << endl;
    cout << "                             AGENDA BUS PERJALANAN" << endl;
    cout << "================================================================================" << endl;
    cout << "Nama penumpang                          : " << np << endl;
    cout << "tujuan                                  : " << tujuan << endl;
    // MENAMPILKAN ANGKAN  .000 START
    cout << fixed << setprecision(3);
    // MENAMPILKAN ANGKAN  .000 END
    cout << "Harga tiket                             : " << harga << endl;
    cout << "Jumlah beli                             : ";
    cin >> jumlah;
    th += harga * jumlah;

    // PERCABAGAN IF ELSE UNUTUK MENETUKAN HADIAH SESUAI DENGAN TOTAL BAYAR START
    if (th >= 1000)
    {
        hadiah = "Voucher Belanja Rp 100.000";
    }
    else if (th >= 500)
    {
        hadiah = "Voucher Belanja Rp 50.000";
    }
    else
    {
        hadiah = "Tidak ada hadiah";
    }
    // PERCABAGAN IF ELSE UNUTUK MENETUKAN HADIAH SESUAI DENGAN TOTAL BAYAR END

    // HITUNG PPN 5% START
    float ppn = 0.05 * th;
    th += ppn;
    // HITUNG PPN 5% END

    cout << "================================================================================" << endl;
    cout << "total harga                             : " << th << endl;
    cout << "hadiah                                  : " << hadiah << endl;
    cout << "PPN                                     : " << ppn << endl;
    tb = th + ppn;
    cout << "total Bayar                             : " << tb << endl;
    cout << "================================================================================" << endl;
    cout << "Masukkan pembayaran                     : ";
    cin >> pembayaran;
    kembali = pembayaran - tb;
    cout << "kembalian                               : " << kembali << endl;
    cout << "================================================================================" << endl;
    cout << "\t\t\t\t Trimakasih" << endl;
    cout << "\t\t\tSemoga selamat sampai tujuan" << endl;
    cout << "================================================================================" << endl;
    // OUTPUT AGENDA BUS PERJALANAN END

    // OUTPUT VOUCHER UNTUK USER START
    if (th >= 1000)
    {
        cout << "\n\n\t\t|-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|\n";
        cout << "\t\t| v          VOUCHER BELANJA  v v v v v|\n";
        cout << "\t\t|v o                           o o o o |\n";
        cout << "\t\t| o u            SEBESAR        u u u u|\n";
        cout << "\t\t|v u c           100.000         c c c |\n";
        cout << "\t\t| o c h                           h h h|\n";
        cout << "\t\t|v u h e   masa berlaku sampai     e e |\n";
        cout << "\t\t| o c e r    10 januari 2024        r r|\n";
        cout << "\t\t|-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    }
    else if (th >= 500)
    {
        cout << "\n\n\t\t|-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|\n";
        cout << "\t\t| v          VOUCHER BELANJA  v v v v v|\n";
        cout << "\t\t|v o                           o o o o |\n";
        cout << "\t\t| o u            SEBESAR        u u u u|\n";
        cout << "\t\t|v u c           50.000          c c c |\n";
        cout << "\t\t| o c h                           h h h|\n";
        cout << "\t\t|v u h e   masa berlaku sampai     e e |\n";
        cout << "\t\t| o c e r    10 januari 2024        r r|\n";
        cout << "\t\t|-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+|\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    }
    // OUTPUT VOUCHER UNTUK USER END

    return 0;
}
