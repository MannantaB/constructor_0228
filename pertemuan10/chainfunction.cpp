#include <iostream>
using namespace std;
class buku
{
	string judul;
public:
	buku setJudul(string judul)
	{
		this->judul = judul;
		return *this; // cahin function
	}
	string getJudul()
	{
		return this->judul;
	}
} bukunya;

int main()
{
	//bukunya.setJudul("Matematika);
	//cout << bukunya.getJudul();
	cout << bukunya.setJudul("Matematika").getJudul(); //cahin function calls
	return 0;
}