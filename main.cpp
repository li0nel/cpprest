#include "windows.h"
#include <iostream>
#include "cpprest.h"

//#pragma comment(lib,"CppRest.lib")


int main()
{
	CppRest::SWinHttpParameters SParams;
	SParams.wszServer.assign(L"localhost");
	SParams.wszPath.assign(L"/license");
	SParams.bUseSSL = false;
	SParams.wszVerb.assign(L"GET");
	SParams.mHeaders[L"X-WWWWW-License"] = L"testlmatestlma";

	CppRest::ApiRequest(SParams);

	typedef std::map<std::wstring, std::wstring>::const_iterator MapIterator;
	for (MapIterator iter = SParams.mResponse.begin(); iter != SParams.mResponse.end(); iter++)
		std::cout << "Key: " << to_mbstring(iter->first) << "              Value:" << to_mbstring(iter->second) << std::endl;

	getchar();
};