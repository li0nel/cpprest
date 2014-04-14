#include "windows.h"
#include "../cpprest.h"

//#pragma comment(lib,"CppRest.lib")

int main()
{
	CppRest::SWinHttpParameters SParams;
	SParams.wszServer.assign(L"localhost");
	SParams.wszPath.assign(L"/license");
	SParams.bUseSSL = false;
	SParams.wszVerb.assign(L"GET");

	CppRest::ApiRequest(SParams);
};