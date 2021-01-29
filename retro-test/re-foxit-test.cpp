#include "./FoxitQPLLinuxCPP1811.h"
#include "./FoxitQPLLinuxCPP1811.cpp"
#include <iostream>
using namespace std;

int main(int argc, char ** argv){


	std::wstring const wide( L"./asm/re-foxit.so" );
	FoxitQPLLinuxCPP1811 * FQL = new FoxitQPLLinuxCPP1811(wide);

	cout << FQL->UnlockKey(L"jf33n75u9oj3nb9pn7mf5rt8y") << endl;

	FQL->SetGlobalOrigin(5);

	FQL->AddLinkToWeb(200, 100, 60, 20, L"http://www.quickpdflibrary.com", 1);

	FQL->DrawText(205, 114, L"Click me!");

	FQL->SaveToFile(L"link_to_web.pdf");

	return 0;
}
